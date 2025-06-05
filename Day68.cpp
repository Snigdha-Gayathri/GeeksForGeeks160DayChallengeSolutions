class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head || k==1) return head;
        Node* curr=head;
        int count=0;
        while(curr)
        {
            count++;
            curr=curr->next;
        }
        Node* dummy=new Node(0);
        dummy->next=head;
        
        
        Node* prevGroupEnd=dummy;
        Node* groupStart=head;
        Node* nextNode=nullptr;
        
        
        while(count>=k)
        {
            curr=groupStart;
            Node* prev=nullptr;
            
            for(int i=0;i<k;++i)
            {
               nextNode=curr->next;
               curr->next=prev;
               prev=curr;
               curr=nextNode;
            }
            prevGroupEnd->next=prev;
            groupStart->next=curr;
            prevGroupEnd=groupStart;
            groupStart=curr;
            count-=k;
        }
        
        if(groupStart)
        {
            curr=groupStart;
            Node* prev=nullptr;
            while(curr)
            {
                nextNode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextNode;
            }
            prevGroupEnd->next=prev;
        }
        return dummy->next;
        
    }
};