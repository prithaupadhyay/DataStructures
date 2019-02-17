#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool isbalanced(string expr)
{
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
  
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
}
int main()
 {
	stack<char> s;
	string str;
	int t;
	cin>>t;
	while(t>0)
	{
	    cin>>str;
	    if(isbalanced(str))
	    {
	        cout<<"balanced"<<endl;
	    }
	    else{
	        cout<<"not balanced"<<endl;
	    }
	    t--;
	   
	}
	return 0;
}