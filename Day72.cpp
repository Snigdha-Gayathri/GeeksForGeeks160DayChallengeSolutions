class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        if(!head || !head->next) return NULL;
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                break;
            }
        }
        
        if(slow!=fast) return NULL;
        slow=head;
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
        
    }
};