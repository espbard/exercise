#include "match.h"
#include <vector>

// Scoreboard class to manage multiple matches and their scores
class Scoreboard
{
public:
    std::vector<Match> matches;

    std::pair<int, int> getScore(int matchId);
    std::vector<std::pair<int, int>> getScores();
    void addMatch(Match match);
};