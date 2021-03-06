#pragma once

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot
{
  class GDExample : public Sprite
  {
    GODOT_CLASS(GDExample, Sprite)

  private:
    float time_passed;

  public:
    static void _register_methods();

    GDExample();
    ~GDExample();

    void _init();

    void _process(float delta);
  };
}