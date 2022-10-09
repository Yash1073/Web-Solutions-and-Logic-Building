#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;

    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
node* sortedInsert(node *head, int data)
{
    //code here
    node *temp = head;
    node *head2;
    node *n = new node(data);
    do
    {
        if(temp->next->data > n->data)
            break;
        temp = temp->next;
        head2 = temp->next;
    }while(temp!=head);

    temp->next = n;
    n->next = head2;
    return head;
}
void deleteAtHead(node* &head)
{
    node* temp = head;
    
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int ctr = 1;

    while (ctr!=pos-1)
    {
        temp = temp->next;
        ctr++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(node* head)
{
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
}
// ----------------------------------------------------------------
int length(node *head)
{
    int l = 0;
    node* temp = head;
    while(temp!=head)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

void splitList(node *head, node **head1_ref, node **head2_ref)
{
    // your code goes here
    node* fast = head;
    node* slow = head;
    *head1_ref = head;
    node* mid ;
    node* mid1 ;
    node* temp = head;
    
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    cout<<"temp = "<<temp->data<<endl;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    }while(fast->next->next!=head && fast->next!=head);

    cout<<"fast = "<<fast->data<<endl;
    cout<<"slow = "<<slow->data<<endl;

    int n = length(head);
    if(n&1)
    {
        mid = slow->next;
        mid1 = mid;
        cout<<"ifmid1 = "<<mid1->data<<endl;
    }
    else
    {
        mid = slow;
        mid1 = mid->next;
        cout<<"elsemid1 = "<<mid1->data<<endl;
    }
    
    mid ->next = *head1_ref;
    *head2_ref = mid1;
    temp->next = *head2_ref;
}

int main()
{
    node* head = NULL;
    node* head1 = NULL;
    node* head2 = NULL;
    int arr[]={1,4,7,9};
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    // insertAtHead(head,5);
    // display(head);

    // deletion(head,4);
    // splitList(head,&head1,&head2);

    // display(head1);
    // display(head2);

    head1 = sortedInsert(head,8);
    display(head1);

    return 0;
}