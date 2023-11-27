#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1,s2;
    public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    void dequeue()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Queue underflow\n";
            return;
        }
        if(s2.empty())
        {
            while(!s1.empty()) s2.push(s1.top()), s1.pop();
        }
        s2.pop();
    }
    int front()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    bool empty()
    {
        return s1.empty() and s2.empty();
    }
};

void doSomething(string s) {
    queue q;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            i++;
            int n=0;
            while(s[++i]!=',')
            {
                n=n*10+(s[i]-'0');
            }
            q.enqueue(n);
            i++;
        }
        if(s[i]=='2')
        {
            q.dequeue();
            i++;
        }
        else
        {
            cout<<q.front()<<"\n";
            i++;
        }
    }
    return;
}

int main() {
    string s;
    getline(cin,s);
    doSomething(s);
    return 0;
}
                                                                                                                            