//
//  FBullCowGame.cpp
//  BullCowGame
//
//  Created by Pablo N Dalmasso on 27/2/16.
//  Copyright © 2016 Pablo N Dalmasso. All rights reserved.
//
#include <string>
#include "FBullCowGame.h"

using int32 = int;
using Fstring = std::string;

FBullCowGame::FBullCowGame(){ Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTries() const { return MyCurrentTrye; }

void FBullCowGame::Reset(){
    constexpr int32 MAX_TRIES = 8;
    MyMaxTries = MAX_TRIES;

    MyCurrentTrye = 1;
    return;
}

bool FBullCowGame::IsGameWon() const{
    return false;
}

bool FBullCowGame::CheckGuessValidity(Fstring text){
    return false;
}
