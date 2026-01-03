#include <iostream>
#include <stack>
using namespace std;
bool is_valid(string s)
{
    stack<char> st;
    for(char c: s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
        else
        {
            if(st.empty() || 
            (c == ')' && st.top()!= '(') ||
            (c == '}' && st.top()!= '{') || 
            (c == ']' && st.top()!= '['))
            {
                
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    std::cout<<"Hello World"<<endl;
    string test="[]";
    if(is_valid(test))
    {
        cout<<"valid match"<<endl;
    }
    else
    {
        cout<<"invalid match"<<endl;
    }
    return 0;
}
