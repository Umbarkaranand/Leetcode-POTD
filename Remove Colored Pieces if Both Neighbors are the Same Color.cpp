class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0, bob = 0;
        int n = colors.size();

        // Loop safely up to n - 2 to check 3 consecutive characters
        for (int i = 0; i <= n - 3; i++) {
            if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A') {
                alice++;
            }
            if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B') {
                bob++;
            }
        }

        return alice > bob;
    }
};
