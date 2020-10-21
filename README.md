# Bestia Godot-Custom-Module

This is a Godot Game-Engine Custom Module which manages the entity and component transmission and handling from the server into the game client.

## Usage

This module serves mainly two purposes:

1. Deserialization of ProtoBuf messages from the Bestia Game server.
2. Redirecting this data to the EntityNode which can be added to Godot nodes in order to react on changed properties of the data.

For message deserialization there is the `MessageDeserializer` singelton. The messages are then fed into the `EntitiesManager`. This class
will basically own an Entity -> Component relationship and update the message base. As soon as a message is encountered which justifies the
spawn of a visual node manager will do so and send all cached messages to this node so it can work with them and update its model.

There are a bunch of `*ComponentSetter` helper classes. These ones can be attached to Godot Entities and upon creation they will setup a Protobuf update message and then remove themselfes from the entities. Its only used for setting up values.

## Installation

In order to use it, checkout the Godot Game engine and copy the module into the module folder. Then compile the engine for your platform.

For more detailled instructions see the main README of the client.
