
#include "../inc/scoreboard.h"

// Get score of a specific match by match ID
std::pair<int, int> Scoreboard::getScore(int matchId)
{
        for (Match &match : matches)
        {
                if (match.match_id == matchId)
                {
                        return match.getScore();
                }
        }
        return std::make_pair(-1, -1); // Return -1 if match not found
}

// Get scores of all matches
std::vector<std::pair<int, int>> Scoreboard::getScores()
{
        std::vector<std::pair<int, int>> scores;
        for (Match &match : matches)
        {
                scores.push_back(match.getScore());
        }
        return scores;
}

// Add a match to the scoreboard
void Scoreboard::addMatch(Match match)
{
        matches.push_back(match);
}