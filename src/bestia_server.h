#ifndef BESTIA_SERVER_H
#define BESTIA_SERVER_H

#include "core/list.h"
#include "core/object.h"
#include "core/os/thread.h"
#include "core/os/mutex.h"
#include "core/rid.h"
#include "core/set.h"
#include "core/variant.h"

class BestiaServer : public Object
{
  GDCLASS(BestiaServer, Object);

  static BestiaServer *singleton;
  static void thread_func(void *p_udata);

private:
  bool thread_exited;
  mutable bool exit_thread;
  Thread *thread;
  Mutex *mutex;

public:
  static BestiaServer *get_singleton();
  Error init();
  void lock();
  void unlock();
  void finish();

protected:
  static void _bind_methods();

private:
  // uint64_t counter;
  // RID_Owner<InfiniteBus> bus_owner;
  // https://github.com/godotengine/godot/blob/master/core/rid.h#L196
  // Set<RID> buses; // Keep a list of entities and update their data via sockets.
  // void _emit_occupy_room(uint64_t room, RID rid);

public:
  // RID create_bus();
  BestiaServer();
};

class _BestiaServer : public Object
{
  GDCLASS(_BestiaServer, Object);

  friend class BestiaServer;
  static _BestiaServer *singleton;

protected:
  static void _bind_methods();

private:
  // void _occupy_room(int room_number, RID bus);

public:
  static _BestiaServer *get_singleton();
  _BestiaServer();
  ~_BestiaServer();
};

#endif