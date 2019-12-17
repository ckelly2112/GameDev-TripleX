#include <iostream>

void PrintIntroduction(int Difficulty){
    std::cout << "You are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room... \nEnter the correct code to continue..." << std::endl;
}
bool PlayGame(int Difficulty){

    PrintIntroduction(Difficulty);
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;


    //Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add-up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give:  " << CodeProduct << std::endl;

    //Store Player Guess

    int GuessA, GuessB, GuessC;
    std::cout << "Guess a number: ";
    std::cin >> GuessA >> GuessB >> GuessC;


    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA*GuessB*GuessC;

    if (GuessSum = CodeSum && GuessProduct == CodeProduct){
        std::cout << "You win!";
        return true;
    }
    else {
        std::cout << "You Lose!";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while(true){
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
            ++LevelDifficulty;

    }
    return 0;
}