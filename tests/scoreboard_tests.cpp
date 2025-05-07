#include "../inc/scoreboard.h"
#include <cassert>
#include <iostream>

void test_init_scoreboard()
{
    Scoreboard scoreboard;

    assert(scoreboard.matches.empty());

    Match match1(1);
    Match match2(2);

    scoreboard.addMatch(match1);
    scoreboard.addMatch(match2);

    assert(scoreboard.matches.size() == 2);
    assert(scoreboard.matches[0].match_id == 1);
    assert(scoreboard.matches[1].match_id == 2);

    std::vector<std::pair<int, int>> scores = scoreboard.getScores();

    assert(scores.size() == 2);
    assert(scores[0].first == 0);
    assert(scores[0].second == 0);
    assert(scores[1].first == 0);
    assert(scores[1].second == 0);

    std::cout << "test_init_scoreboard passed!" << std::endl;
}

int main()
{
    test_init_scoreboard();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}