#include "register_types.h"
#include "core/class_db.h"
#include "core/engine.h"

#include "src/entities_manager.h"
#include "src/entity_registry.h"
#include "src/entity_node.h"
#include "src/bestia_server.h"

static BestiaServer *bestia_server = NULL;
static _BestiaServer *_bestia_server = NULL;

void register_bestia_types()
{
  ClassDB::register_class<bestia::EntitiesManager>();
  ClassDB::register_class<bestia::EntityNode>();

  bestia::EntityRegistry::create_singleton();

  bestia_server = memnew(BestiaServer);
  bestia_server->init();
  _bestia_server = memnew(_BestiaServer);
  ClassDB::register_class<_BestiaServer>();
  Engine::get_singleton()->add_singleton(Engine::Singleton("BestiaServer", _BestiaServer::get_singleton()));
}

void unregister_bestia_types()
{
  bestia::EntityRegistry::destroy_singleton();

  if (bestia_server)
  {
    bestia_server->finish();
    memdelete(bestia_server);
    bestia_server = NULL;
  }

  if (_bestia_server)
  {
    memdelete(_bestia_server);
  }
}
