class Solution {
public:
    bool isPalindrome(string s) {
        string newS;
        for(char c: s){
            if(isalnum(c)){
                newS+=c;
            }
        }

        bool flag = true;
        int j = newS.length()-1;
        int i = 0;
        while(i<j){
            if(tolower(newS[i]) != tolower(newS[j])){
                flag = false;
            }

            i++;
            j--;
        }

        return flag;
    }
};
