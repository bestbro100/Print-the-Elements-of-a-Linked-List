// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr = head;
    if (head == nullptr)
        return;
    while (curr != nullptr) {
        cout << curr->data << '\n';
        curr = curr->next;
    }
}