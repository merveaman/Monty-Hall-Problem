// 3doorproblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

int main()
{
    int doors[] = { 0,1,2 };
    int player_score_if_update_door = 0;
    int player_score_if_not_change = 0;

    for (int i = 0; i < 10000; i++)
    {
        std::list<int> doorlist(doors, doors + sizeof(doors) / sizeof(int));
        int luckychoice = rand() % 3;
        int playerguess = rand() % 3;
        doorlist.remove(luckychoice);
        doorlist.remove(playerguess);
        if (playerguess == luckychoice)
            player_score_if_not_change++;
        else
            player_score_if_update_door++;
    }
    std::cout << "\n\nPlayer score if update the door choice:" << player_score_if_update_door;
    std::cout << "\n\nPlayer score not change the door choice:" << player_score_if_not_change;

}
