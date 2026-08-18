class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int num1=stoi(st.top());
                st.pop();
                int num2=stoi(st.top());
                st.pop();
                int num=0;
                if(tokens[i]=="+")
                 num=num1+num2;
                 if(tokens[i]=="-")
                 num=num2-num1;
                 if(tokens[i]=="*")
                 num=num1*num2;
                 if(tokens[i]=="/")
                 num=num2/num1;
                 st.push(to_string(num));
            }
            else
             st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};