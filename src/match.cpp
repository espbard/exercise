#include "../inc/match.h"

// Get score of the match
std::pair<int, int> Match::getScore()
{
    return std::make_pair(home_team.goals_scored, away_team.goals_scored);
}