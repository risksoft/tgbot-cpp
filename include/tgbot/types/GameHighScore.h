/*
 * Copyright (c) 2015 Oleg Morozenkov
 * Copyright (c) 2018 JellyBrick
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef TGBOT_GAMEHIGHSCORE_H
#define TGBOT_GAMEHIGHSCORE_H

#include <memory>
#include <string>

#include "tgbot/types/PhotoSize.h"
#include "tgbot/types/User.h"

namespace TgBot {

/**
 * @brief This object represents one row of the high scores table for a game.
 * 
 * @ingroup types
 */
class GameHighScore {
public:
	typedef std::shared_ptr<GameHighScore> Ptr;

	/**
	 * @brief Position in high score table for the game.
	 */
	std::string position;

	/**
	 * @brief User.
	 */
	User::Ptr user;

	/**
	 * @brief Score.
	 */
	int32_t score;
};
}

#endif //TGBOT_GAMEHIGHSCORE_H