#include <cstdlib>

#include <memory>
#include <src/game.hpp>

int main() {
	std::unique_ptr<game::Game> game = std::make_unique<game::Game>();
	game->start();
	game->stop();

	return EXIT_SUCCESS;
}
