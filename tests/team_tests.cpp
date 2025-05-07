#include "../inc/team.h"
#include <cassert>
#include <iostream>

// Confirm that team objects are initialized with scores of 0
void test_init_team()
{
    Team team;
    assert(team.goals_scored == 0);
    std::cout << "test_init_team passed!" << std::endl;
}

int main()
{
    test_init_team();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}