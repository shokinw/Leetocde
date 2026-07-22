class Solution {
public:

    vector<string> ans;

    vector<string> phone = {
        "", "",        // 0,1
        "abc",         //2
        "def",         //3
        "ghi",         //4
        "jkl",         //5
        "mno",         //6
        "pqrs",        //7
        "tuv",         //8
        "wxyz"         //9
    };

    void solve(int index, string digits, string current)
    {
        // Base Case
        if(index == digits.size())
        {
            ans.push_back(current);
            return;
        }

        // Current digit
        string letters = phone[digits[index] - '0'];

        // Try every letter
        for(char ch : letters)
        {
            solve(index + 1, digits, current + ch);
        }
    }

    vector<string> letterCombinations(string digits)
    {
        if(digits.empty())
            return {};

        solve(0, digits, "");

        return ans;
    }
};