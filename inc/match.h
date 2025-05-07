#include "team.h"
#include <string>

// Match class that can represent a match between two teams
class Match
{
public:
    int match_id;
    Team home_team;
    Team away_team;

    std::pair<int, int> getScore();

    Match(int id)
    {
        match_id = id;
        home_team = Team();
        away_team = Team();
    };
};
