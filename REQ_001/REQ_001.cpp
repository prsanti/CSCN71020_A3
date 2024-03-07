#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>

extern "C" char* game(char*, char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		// testing game function where rock wins
		// player1 = "rock" and player2 = "scissors"
		TEST_METHOD(RockWin)
		{
			char* player1 = "rock";
			char* player2 = "scissors";
			char* result = game(player1, player2);
			char* expected = "Player1";

			Assert::AreEqual(result, expected);
		}

		// testing game function where paper wins
		// player1 = "rock" and player2 = "paper"
		TEST_METHOD(PaperWin)
		{
			char* player1 = "rock";
			char* player2 = "paper";
			char* result = game(player1, player2);
			char* expected = "Player2";

			Assert::AreEqual(result, expected);
		}

		// testing game function where scissors wins
		// player1 = "paper" and player2 = "scissors"
		TEST_METHOD(ScissorsWin)
		{
			char* player1 = "paper";
			char* player2 = "scissors";
			char* result = game(player1, player2);
			char* expected = "Player2";

			Assert::AreEqual(result, expected);
		}

		// testing game function where it results in a tie
		// player1 = "rock" and player2 = "rock"
		TEST_METHOD(Draw)
		{
			char* player1 = "rock";
			char* player2 = "rock";
			char* result = game(player1, player2);
			char* expected = "Draw";

			Assert::AreEqual(result, expected);
		}
		// testing game function where there is an invalid input
		// player1 = "" and player2 = "dog"
		TEST_METHOD(Invalid)
		{
			char* player1 = "";
			char* player2 = "dog";
			char* result = game(player1, player2);
			char* expected = "Invalid";

			Assert::AreEqual(result, expected);
		}
	};
}
