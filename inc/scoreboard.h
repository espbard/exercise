#include "match.h"
#include <vector>

class Scoreboard
{
public:
    std::vector<Match> matches;

    std::pair<int, int> getScore(int matchId);
    std::vector<std::pair<int, int>> getScores();
    void addMatch(Match match);
};