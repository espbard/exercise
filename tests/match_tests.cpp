#include "../inc/match.h"
#include <cassert>
#include <iostream>

void test_init_match()
{
    Match match = Match(1);
    assert(match.match_id == 1);

    std::pair<int, int> score = match.getScore();
    std::pair<int, int> expected_score = {0, 0};

    assert(score.first == expected_score.first);
    assert(score.second == expected_score.second);

    std::cout << "test_init_match passed!" << std::endl;
}

int main()
{
    test_init_match();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}