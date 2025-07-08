class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

      if(tokens.size() == 1 && power < tokens[0]) return 0;
    if(tokens.size() == 1 && power >= tokens[0]) return 1;

    sort(tokens.begin(), tokens.end());

    int score = 0, maxScore = 0;
    int i = 0, j = tokens.size() - 1;

    while(i <= j)
    {
        if(tokens[i] <= power)
        {
            power -= tokens[i];
            score += 1;
            i++;
            maxScore = max(maxScore, score);
        }
        else if(score >= 1)  // ✅ corrected here
        {
            power += tokens[j];
            score -= 1;
            j--;
        }
        else 
        {
            break;
        }
    }

       return maxScore;

    }
};