#pragma once

#include <scene/main/scene_tree.hpp>

namespace game {

class Game : public Toof::SceneTree {
private:
	void _initialize() override;
};

}