#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame{

public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTries() const;
    bool IsGameWon() const;
    
    void Reset(); //TODO: make a more rich return value.
    bool CheckGuessValidity(FString); //TODO: make a more rich return value.
    // provide a method for counting bull & cows, and increasing turn #

// ^^ Please try and ignore this and focus on the nterface about ^^
private:
    // see constructor for initialization
    int32 MyCurrentTrye;
    int32 MyMaxTries;
};
