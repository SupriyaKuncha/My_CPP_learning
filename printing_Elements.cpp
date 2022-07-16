#include <iostream>
using namespace std;
class Node
{
    public:
    int data;//value of the node
    Node* next;//pointer to the next node
};
void PrintList(Node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" "<<endl;
        n=n->next;
    }
}
int main()
{
    Node* head/*pointer to the first element i.e head*/=new Node();/*allocated some space in the memory*/
    Node* second/*pointer to the second element*/=new Node();/*allocated some space in the memory*/
    Node* third/*pointer to the third element*/=new Node();/*allocated some space in the memory*/
   
    head->data=1;//assign value to the first node i.e head
    head->next=second;// linking head node to second node
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    PrintList(head);
    
}