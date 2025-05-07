
add_executable(TeamTests team_tests.cpp)
add_test(NAME TeamTests COMMAND TeamTests)

add_executable(MatchTests match_tests.cpp)
add_test(NAME MatchTests COMMAND MatchTests)

add_executable(ScoreboardTests scoreboard_tests.cpp)
add_test(NAME ScoreboardTests COMMAND ScoreboardTests)