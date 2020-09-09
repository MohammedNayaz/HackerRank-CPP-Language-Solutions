//Queue using Two Stacks


#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

void shift1(stack<int> &pushS, stack<int> &popS) 
{
    while(!pushS.empty()) 
    {
         popS.push(pushS.top());
          pushS.pop();
    }
}



int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int query, choice, ele;
    stack<int> pushS, popS; 

    cin>>query;

    while(query--)
    {
        cin>>choice;

        if(choice==1)
        {
            cin>>ele;
            pushS.push(ele);
        }
        else if(choice==2)
        {
            if(popS.empty())
            {
                shift1(pushS, popS);
            }
            popS.pop();
        } 
        else if(choice==3)
        {
            if(popS.empty())
            {
                shift1(pushS, popS);
            }
           cout<<popS.top()<<endl;
        }
    }
    return 0;
}
