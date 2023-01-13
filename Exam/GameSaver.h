#pragma once

#include <cstdint>
#include <stdlib.h>
#include <ctime>
#include <wincrypt.h>

using namespace System::Security::Cryptography;


class GameSaver {
public:

	GameSaver() {
		generateNums();
		auto a = System::Text::Encoding::ASCII::GetBytes("Salt");

	}
	void generateNums() {
		srand(time(0));
		for (int i = 0; i != 16; i++) {
			nums_[i] = rand();
		}
	}

	unsigned int getNumByIndex(int index) {
		return nums_[index];
	}


private:
	uint8_t nums_[16];
};