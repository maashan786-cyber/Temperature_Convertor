#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <numeric>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
    int dice, block;
    char y;
    int n = 0, steps = 0;

    block = n;
    cout << "WELCOME TO SINGLE PLAYER SNAKES AND LADDER" << endl
         << "Have fun" << endl;
    while (block <= 20)
    {
        cout << "You are on block: " << block << endl
             << "Press y to roll the dice " << endl;
        y = getch();
        if (y == 'y')
        {
            dice = rand() % 4 + 1;
            cout << "You rolled: " << dice << endl;
            block += dice;
            if (block == 15 || block == 19 || block == 7)
            {
                cout << "You stepped on a mine.BOOOOOHOOOOOO!!\nReturning to first block" << endl;
                block = n;
            }
            cout << "------------------" << endl;
            steps += dice;
            if (block > 20)
            {
                cout << "Out of Range" << endl;
                block -= dice;
                continue;
            }
            if (block == 20)
                break;
        }
        else
        {
            cout << "Invalid input";
            continue;
        }
    }
    cout << "=== Final Result ===" << endl
         << "YAY you won" << endl
         << "Your score is: " << steps;
}
