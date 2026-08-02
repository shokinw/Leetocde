class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        int n1 = str1.length();
        int n2 = str2.length();

        // chhoti length se start karenge
        for(int i = min(n1, n2); i >= 1; i--) {

            if(n1 % i == 0 && n2 % i == 0) {

                string ans = str1.substr(0, i);

                string temp1 = "";
                string temp2 = "";

                // str1 ko repeat karke banao
                for(int j = 0; j < n1 / i; j++) {
                    temp1 += ans;
                }

                // str2 ko repeat karke banao
                for(int j = 0; j < n2 / i; j++) {
                    temp2 += ans;
                }

                if(temp1 == str1 && temp2 == str2) {
                    return ans;
                }
            }
        }

        return "";
    }
};