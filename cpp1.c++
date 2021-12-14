#include<bits/stdc++.h>
using namespace std;
class node
{
   
    public:
     int data;
    node *next;
    node()
    {
        next=NULL;
    }
    node(int a)
    {
         data=a;
         next=NULL;
    }
    
};
void insertattail(node *head,int data)
    {
        node* n=new node(data);
        node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;

    }
void print(node* head)
    {
      node* temp=head;
      while (temp!=NULL)
      {
          cout<<temp->data<<"-->";
          temp=temp->next;
      }
      cout<<endl;
    }
void insertathead(node* &head,int data)
    {
      node *temp=new node();
      temp->data=data;
      temp->next=head;
      head=temp;

    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    node *head;
    head=new node(10);
    insertattail(head,20);
    insertattail(head,30);
    insertattail(head,40);
    insertattail(head,50);
    insertattail(head,60);
    insertattail(head,70);
    insertattail(head,80);
    insertathead(head,100);
    insertathead(head,200);

    print(head);
    return 0;
}
