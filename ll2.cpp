#include<iostream>
using namespace std;
struct q *head=NULL;
struct q *tail=NULL;
struct q{
    int val;
    struct q *link;
};

void enqueue(int e)
{
    q *temp = new q;
    temp->val=e;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->link=temp;
        tail=temp;
    }
}

void dequeue()
{
    int e;
    if(head==NULL)
    {
        cout<<"The queue is empty"<<endl;
    }
    else{
        e=head->val;
        head=head->link;
        cout<<"The dequeued element is "<<e<<endl;
    }
}

void display()
{
    if(head==NULL)
    {
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"The elements in the queue are"<<endl;
        q *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<endl;
            temp=temp->link;
        }
    }
}
int main()
{
   
   int c,x=1,ele;
   cout<<"1 enqueue"<<endl;
   cout<<"2 dequeue"<<endl;
   cout<<"3 display"<<endl;
   cout<<"4 exit"<<endl;
   while(x)
   {
    cout<<"Enter your choise"<<endl;
   cin>>c;
   switch(c)
   {
       case 1:
                cout<<"Enter the element"<<endl;
                cin>>ele;
                enqueue(ele);
                break;
        case 2: 
                dequeue();
                break;
        case 3:
                display();
                break;
        case 4:
                x=0;
                break;        
        default:
                cout<<"Wrong choise"<<endl;
                break;                

   }
   cout<<endl;
   }
   return 0;

}