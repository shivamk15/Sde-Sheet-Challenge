LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *cur = NULL;
    while(head){
        LinkedListNode<int> *next = head->next;
        head->next = cur;
        cur = head;
        head = next;
    }
    return cur;
}