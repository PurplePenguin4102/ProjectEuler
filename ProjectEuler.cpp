#include "Problems.h"
#include <iostream>
#include <string>

int main()
{
    int choice;
    std::cout << "Welcome to Project Euler, please input problem ('l' to list): \n";
    {
        std::string inp;
        do 
        {
            if (inp == "l")
            {
                std::cout << "1: Multiples of 3 and 5 \n";
            }
            std::cin >> inp;
            choice = std::stoi(inp);
        } while (choice <= 0);
    }

    std::cout << "You have chosen: " << choice << std::endl;
    std::cout << "A Patrician's choice! :) \n";
    {
        unsigned long long ans;
        switch (choice)
        {
        case 1: ans = problem1(); break;
        case 2: ans = problem2(); break;
        case 3: ans = problem3(); break;
        case 4: ans = problem4(); break;
        case 5: ans = problem5(); break;
        case 6: ans = problem6(); break;
        case 7: ans = problem7(); break;
        case 8: ans = problem8(); break;
        case 9: ans = problem9(); break;
        case 10: ans = problem10(); break;
        case 11: ans = problem11(); break;
        case 12: ans = problem12(); break;
        case 13: ans = problem13(); break;
        case 14: ans = problem14(); break;
        case 15: ans = problem15(); break;
        case 16: ans = problem16(); break;
        case 17: ans = problem17(); break;
        }
        std::cout << "Oh mighty patrician! The answer is :: " << ans << std::endl;
    }
    std::cout << "goodbye!\n";
}

