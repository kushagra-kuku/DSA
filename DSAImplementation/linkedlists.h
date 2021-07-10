//
// Created by Kushagra Kandpal on 03-07-2021.
//

#ifndef DS_LINKEDLISTPARTITIONING_MEDIUM_H
#define DS_LINKEDLISTPARTITIONING_MEDIUM_H

#endif //DS_LINKEDLISTPARTITIONING_MEDIUM_H

template<class gen>
class LLNode{
public:
    gen val;
    LLNode* next;
};

template<class gen>
LLNode<gen>* MakeSinglyLList(gen arr[], int size){
    LLNode<gen>* head = new LLNode<gen>;
    if (size == 0) return head;
    LLNode<gen>* itr = head;
    itr->val = arr[0];
    itr->next = new LLNode<gen>;
    for(int i = 1; i < size; i ++){
        itr = itr->next;
        itr->val = arr[i];
        itr->next = new LLNode<gen>;
    }
    itr->next = NULL;
    return head;
}



