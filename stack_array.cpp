#include<iostream>
using namespace std;
#define MAX 5
class stack
{
    private:
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    int empty()
    {
        if(top==-1)
        return(1);
        else
        return(0);
    }
    int full()
    {
        if (top==MAX-1)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        top++;
        a[top]=x;
    }
    int pop()
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek()
    {
        return(a[top]); 
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        cout<<a[i]<<endl;
    }
};
int main()
{
    stack s;
    if(!s.full())s.push(10); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(!s.full())s.push(20); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(!s.full())s.push(30); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(!s.full())s.push(40); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(!s.full())s.push(50); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(!s.full())s.push(60); else cout<<"stack is full"<<endl;
    cout<<"stack contents after push operation: "<<endl;
    s.display();
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"poped out element is "<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation: "<<endl;
    s.display();

    return 0;
}

/*

d:\DSA Programming>g++ stack_array.cpp -o 6bout

d:\DSA Programming>.\6bout
stack contents after push operation:
10
stack contents after push operation:
20
10
stack contents after push operation:
30
20
10
stack contents after push operation:
40
30
20
10
stack contents after push operation:
50
40
30
20
10
stack is full
stack contents after push operation:
50
40
30
20
10
poped out element is 50
stack contents after pop operation:
40
30
20
10
poped out element is 40
stack contents after pop operation:
30
20
10
poped out element is 30
stack contents after pop operation:
20
10
poped out element is 20
stack contents after pop operation:
10
poped out element is 10
stack contents after pop operation:
stack is empty
stack contents after pop operation:

*/