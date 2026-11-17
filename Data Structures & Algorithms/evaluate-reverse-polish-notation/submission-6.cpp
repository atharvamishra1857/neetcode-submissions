class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> stk;

        for(string& a: tokens){
            if(a == "+" || a == "*" || a == "-" || a == "/"){
                long long k = stk.top(); 
                stk.pop();
                long long m = stk.top();
                stk.pop();

                if(a == "+"){
                    stk.push(k+m);
                }else if(a == "-"){
                    stk.push(m-k);

                }else if(a == "*"){
                    stk.push(k * m);
                }else if (a == "/"){
                    stk.push(m/k);
                }
            }else{
                stk.push(stoll(a));
            }

        }

        return stk.top();
    }
};
