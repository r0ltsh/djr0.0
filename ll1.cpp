#include<iostream>
using namespace std;
struct stack *head=NULL;
struct stack{
    int val;
    struct stack *link;
};

void add(int e)
{
    stack *temp = new stack;
    temp->val=e;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->link=head;
        head=temp;
    }
}

int pop()
{
    int e;
    if(head==NULL)
    {
        cout<<"The Stack is empty"<<endl;
    }
    else{
    e=head->val;
    head=head->link;
    cout<<"the popped element is "<<e<<endl;
    }
}
void display()
{
    if(head==NULL)
    {
        cout<<"The Stack is empty"<<endl;
    }
    else{
        cout<<"The elements in the list are"<<endl;
        stack *temp=head;
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
   cout<<"1 push"<<endl;
   cout<<"2 pop"<<endl;
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
                add(ele);
                break;
        case 2: 
                pop();
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