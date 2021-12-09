#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    class node *next;
};
void travellink(class node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<"data is:"<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    class node *head;
    class node *second;
    class node *third;
    //allocate in heap section
    head= (class node*)malloc(sizeof(class node));
    second= (class node*)malloc(sizeof(class node));
    third= (class node*)malloc(sizeof(class node));

    //asign first node
    head->data=10;
    head->next=second;

    //asign first node
    second->data=20;
    second->next=third;
    
    //asign first node
    third->data=30;
    third->next=NULL;
    
    travellink(head);
   free(head);
   free(second);
   free(third);
    return 0;
}
