// https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1#

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int> st;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                st.push(s[i]-'0');
            }
            else{
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                
                if(s[i] == '*'){
                    st.push(num1*num2);
                }
                else if(s[i] == '/'){
                    st.push(num2/num1);
                }
                else if(s[i] == '-'){
                    st.push(num2-num1);
                }
                else{
                    st.push(num1+num2);
                }
            }
        }
        
        int ans = st.top();
        
        return ans;
    }
};
