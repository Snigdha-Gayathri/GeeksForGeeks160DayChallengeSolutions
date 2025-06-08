class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        if(head== NULL) return NULL;
        Node* curr=head;
        while(curr)
        {
            Node* clone= new Node(curr->data);
            clone->next=curr->next;
            curr->next=clone;
            curr=clone->next;
            
        }
        curr=head;
        while(curr)
        {
            if(curr->random)
            {
                curr->next->random=curr->random->next;
                
            }
            curr=curr->next->next;
        }
        curr=head;
        Node* dummy=new Node(0);
        Node* copyCurr=dummy;
        while(curr)
        {
            Node* copy=curr->next;
            copyCurr->next=copy;
            copyCurr=copy;
            curr->next=copy->next;
            curr=curr->next;
        }
        return dummy->next;
    }
};