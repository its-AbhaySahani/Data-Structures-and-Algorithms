// Lead game codechef

#include <iostream>
using namespace std;

int main() {
    int rounds;
    cin >> rounds;

    int maxLead = 0;
    int winner = 1;
    int score1 = 0, score2 = 0;

    for (int i = 0; i < rounds; ++i) {
        int player1, player2;
        cin >> player1 >> player2;

        score1 += player1;
        score2 += player2;

        int lead = abs(score1 - score2);
        if (lead > maxLead) {
            maxLead = lead;
            winner = (score1 > score2) ? 1 : 2;
        }
    }

    cout << winner << " " << maxLead << endl;

    return 0;
}

