#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>


void play_game(){
    int random = rand() % 251;
    std::cout<<random<<std::endl;
    std::cout<<"Guess a number: ";

    while (true)
    {
        int guess;
        std::cin>>guess;
        if(guess==random){
            std::cout<<"You win!!\n";
            break;
        }else if(guess<random){
            std::cout<<"too low\n";
        }else{
            std::cout<<"too high\n";
        }
    }
    
}

int main()
{
    srand(time(NULL));
    int choice;

    do
    {
        std::cout << "0. Quit" << std::endl << "1. Play the game\n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Thanks for Nothing\n";
            break;
        case 1:
            play_game();
        default:
            break;
        }
    } while (choice!=0&&choice==1);
}