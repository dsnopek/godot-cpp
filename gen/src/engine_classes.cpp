
#include <godot_cpp/godot.hpp>
#include <godot_cpp/classes/packed_scene.hpp>

using namespace godot;

void GDExtensionBinding::register_engine_classes() {
	ClassDB::register_engine_class<godot::PackedScene>();
}

