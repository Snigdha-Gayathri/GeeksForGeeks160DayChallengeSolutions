class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head || !head->next || k==0) return head;
        Node* temp=head;
        int length=1;
        while(temp->next)
        {
            temp=temp->next;
            length++;
        }
        temp->next=head;
        k=k%length;
        if(k==0)
        {
            temp->next=NULL;
            return head;
        }
        Node* newTail=head;
        for(int i=1;i<k;i++)
        {
            newTail=newTail->next;
            
        }
        
        
        Node* newHead=newTail->next;
        newTail->next=NULL;
        return newHead;
    }
};