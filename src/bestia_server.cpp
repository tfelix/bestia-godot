#include "bestia_server.h"

#include "core/dictionary.h"
#include "core/list.h"
#include "core/os/os.h"
#include "core/variant.h"

void BestiaServer::thread_func(void *p_udata)
{

  BestiaServer *ac = (BestiaServer *)p_udata;
  uint64_t msdelay = 1000;

  while (!ac->exit_thread)
  {
    // NO OP
    OS::get_singleton()->delay_usec(msdelay * 1000);
  }
}

Error BestiaServer::init()
{
  thread_exited = false;
  mutex = Mutex::create();
  thread = Thread::create(BestiaServer::thread_func, this);
  return OK;
}

BestiaServer *BestiaServer::singleton = NULL;

BestiaServer *BestiaServer::get_singleton()
{
  return singleton;
}

void BestiaServer::unlock()
{
  if (!thread || !mutex)
  {
    return;
  }

  mutex->unlock();
}

void BestiaServer::lock()
{
  if (!thread || !mutex)
  {
    return;
  }

  mutex->lock();
}

void BestiaServer::finish()
{
  if (!thread)
  {
    return;
  }

  exit_thread = true;
  Thread::wait_to_finish(thread);

  memdelete(thread);

  if (mutex)
  {
    memdelete(mutex);
  }

  thread = NULL;
}

void BestiaServer::_bind_methods()
{
}

BestiaServer::BestiaServer()
{
  singleton = this;
}

_BestiaServer *_BestiaServer::singleton = NULL;
_BestiaServer *_BestiaServer::get_singleton() { return singleton; }

void _BestiaServer::_bind_methods() {
        // ClassDB::bind_method(D_METHOD("get_bus_info", "r_id"), &_BestiaServer::get_bus_info);
        ADD_SIGNAL(MethodInfo("occupy_room", PropertyInfo(Variant::INT, "room_number"), PropertyInfo(Variant::_RID, "r_id")));
}

_BestiaServer::_BestiaServer() {
        singleton = this;
}

_BestiaServer::~_BestiaServer() {
}