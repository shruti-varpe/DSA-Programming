#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;

    }
};
class linkedlist
{
     private:
    node *head;
    public:
    linkedlist()
    {
        head=NULL;
    }
   void insert(int x)
   {
     node *p=new node(x);
     if(head==NULL)
     {
         head=p;
     }
     else
     {
         node *q=head;
         while(q-> next!=(NULL))
         q=q->next;
         q->next=p;
         p->prev=q;
     }
   }
    void display()
    {
        node *q=head;
        while(q!=NULL)
        {
           cout<<"["<<""<<q->data<<"]"<<"<=>";
            q=q->next;
        }
     
    } 
    void remove(int x)
    {
     node *p=NULL;
     if(head->data==x)
     {
         p=head;
         head=head->next;
         head->prev=NULL;
         delete p;
         return;
     }
     node *q=head;
     while(q->next!=NULL)
     {
         if(q->next->data==x)
         {
             p=q->next;
             q->next=p->next;
             p->next->prev=q;
             delete p;
             return ;
         }
         q=q->next;
      }
     cout<<"Data Not Found in list";
    }
};
int main()
{
    linkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    cout<<"Before removing node"<<endl;
    list.display();cout<<endl;
    list.remove(30);
    cout<<"After removing node"<<endl;
    list.display();cout<<endl;
    return 0;

} 

/*

d:\DSA Programming>g++ doubly_linked.cpp -o 5output

d:\DSA Programming>.\5output
Before removing node
[10]<=>[20]<=>[30]<=>[40]<=>
After removing node
[10]<=>[20]<=>[40]<=>

*/