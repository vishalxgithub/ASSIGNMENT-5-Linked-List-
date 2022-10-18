DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* n = new DoublyLinkedListNode(data);
    if(data < head->data){
        n->next = head;
        head->prev = n;
        head = n;
    }
    else{
        DoublyLinkedListNode* temp = head;
        while(temp->data < data && temp->next != NULL){
            temp = temp->next;
        }
        if(data <= temp->data){
            temp = temp->prev;
            n->next = temp->next;
            n->prev = temp;
            temp->next->prev = n;
            temp->next = n;
        }
        else{
            temp->next = n;
            n->prev = temp;
        }
    }
    return head;
    
}
