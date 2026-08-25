class Solution { 
public: 
    int numberOfSpecialChars(string word) { 
        int count = 0; 
 
        for(char ch = 'A'; ch <= 'Z'; ch++) { 
            if(word.find(ch) != string::npos) {
                
                char lower = tolower(ch);

                if(word.find(lower) != string::npos) {
                    count++;
                }
            } 
        }  

        return count;        
    } 
};