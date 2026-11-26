class Solution {
public:
    string remove(string s) {
        string answer;
        for (int i = 1; i + 1 < (int)s.size(); i++) {
            answer += s[i];
        }
        return answer;
    }

    string removeOuterParentheses(string s) {
        if (s.empty()) {
            return "";
        }

        string answer;
        int score = 0;
        string temp = "";

        for (int i = 0; i < (int)s.size(); i++) {
            temp += s[i];
            if (s[i] == '(') {
                score++;
            } else {
                score--;
            }

            if (score == 0) {
                answer += remove(temp);
                temp = "";
            }
        }

        return answer;
    }
};