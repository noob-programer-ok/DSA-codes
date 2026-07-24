/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
            c++;
        }
        temp = head;
        if(c%2==0){
            for(int i=0;i<c/2;i++){
                temp = temp->next;
            }
        }
        else{
            for(int i=0;i<(c/2)+1;i++){
                temp = temp->next;
            }
        }
    return temp;
    }
};