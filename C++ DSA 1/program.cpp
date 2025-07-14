// #include <iostream>

// using namespace std;

// class circle
// {
// public:
//     double r;
//     circle(double radius)
//     {
//        r = radius; // Initialize the radius
//     }
//     void area()
//     {
//         double a = 3.14 * r * r;
//         cout << "Area of circle: " << a << endl;
//     }
//     void circumference()
//     {
//         double c = 2 * 3.14 * r;
//         cout << "Circumference of circle : "
//              << c << endl;
//     }
// };

// int main()
// {
//     circle c(3); // Create a circle object with radius 5.0
//     c.area(); // Call the area method
//     c.circumference(); // Call the circumference method
//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Time {
//     public :
//     int hours;
//     int minutes;
//     Time(int h, int m) : hours(h), minutes(m) {}
//     Time add(Time t){

//         int minutesRemaining = (minutes + t.minutes) % 60;

//     }
//     void display() {
//         cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
//     }

// };
// int main(){

//     Time t1(1,20);
//     Time t2(2,50);
//     t1.add(t2);
//     t1.display();
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;  // Pointer to another Node

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }

//     void print() {
//         cout << "Data: " << data << endl;
//     }
// };

// int main() {
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     first->next = second; // Connect nodes

//     first->print();
//     first->next->print(); // Access next node via pointer

//     delete first;
//     delete second;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next; // Pointer to another Node

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }

//     void print()
//     {
//         cout << "Data: " << data << endl;
//     }
// };

// int main()
// {
//     Node *first = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     first->next = second; // Connect nodes
//     second->next = third; // Connect second to third
//     third->next = fourth; // Connect third to fourth
//     fourth->next = NULL;  // Last node points to NULLfirst->print();

//     Node* temp = first ;
//     while(temp != NULL){
//         temp->print();
//         temp = temp->next ;
//     }

//     delete first;
//     delete second;
//     delete third;
//     delete fourth;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// // Insert new node at beginning
// Node *insertAtBeginning(Node *head, int newData)
// {
//     Node *newNode = new Node(newData);
//     newNode->next = head;
//     return newNode; // return new head
// }
// Node *insertAtEnd(Node *tail, int newData)
// {
//     Node *newNode = new Node(newData);
//     tail->next = newNode;
//     newNode->next = NULL; // New node will be the last node
//     return newNode;       // return new head
// }
// Node *insertAtPosition(Node *head, int position, int data)
// {
//     Node *newNode = new Node(data);
//     if (position == 0)
//     {
//         return insertAtBeginning(head, data);
//     }
//     Node *temp = head;
//     while (temp->next != NULL && position > 1)
//     {
//         temp = temp->next;
//         position--;
//     }
//     newNode->next = temp->next; // Link new node to next node
//     temp->next = newNode;       // Link previous node to new node
//     return head;                // Return the head of the list
// }

// Node *deleteAtEnd(Node *head)
// {
//     if (head == NULL)
//         return NULL; // If list is empty, return NULL
//     Node *temp = head;
//     while (temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     delete temp->next; // Delete the last node
//     temp->next = NULL;
//     return head;
// }
// Node *deleteAtBeginning(Node *head)
// {
//     if (head == NULL)
//         return NULL; // If list is empty, return NULL
//     Node *temp = head;
//     head = temp->next;
//     delete temp;
//     return head;
// }
// // Traverse list
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " - ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *deleteAtPosition(Node *head, int position)
// {
//     if (head == NULL)
//     {
//         return NULL; // If list is empty, return NULL
//     }
//     if (position == 1 || position == 0)
//     {
//         return deleteAtBeginning(head); // If position is 0, delete at beginning
//     }
//     Node *temp = head;
//     int count = 1;
//     while (temp != NULL && count < position - 1 )
//     {
//         temp = temp->next; // Move to next node
//         count++;
//     }
//     Node *nodeToDelete = temp->next;
//     temp->next = nodeToDelete->next;
//     delete nodeToDelete;
//     return head;
// }

// Node *reverselist(Node *head){
//     Node *prev = NULL ;
//     Node *curr = head ;
//     while(curr !=NULL){
//         Node *nextNode = curr->next ;
//         curr->next = prev;
//         prev = curr ;
//         curr = nextNode;
//     }
//     return prev ;
// }
// int middleElement(Node *head){
//     Node *slow = head ;
//     Node *fast = head ;
//     while(fast !=NULL && fast->next !=NULL){
//         slow = slow->next ;
//         fast = fast->next->next ;
//     }
//     return slow->data ;
// }
// int main()
// {
//     Node *first = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     first->next = second; // Connect nodes
//     second->next = third; // Connect second to third
//     third->next = fourth; // Connect third to fourth
//     fourth->next = NULL;  // Last node points to NULLfirst->print();
//     Node *head = first;   // Initialize head
//     Node *tail = fourth;  // Initialize tail

//     printList(head);
//     head = insertAtBeginning(head, 5); // Insert at beginning
//     printList(head);                   // Output: 5 → 10 → 20 → 30 → 40 → NULL
//     tail = insertAtEnd(tail, 50);      // Insert at end
//     printList(head);                   // Output: 5 → 10 → 20 → 30 → 40 → 50 → NULL

//     head = insertAtPosition(head, 5, 15); // Insert at position 2
//     printList(head);                      // Output: 5 → 10 → 15 → 20 → 30 → 40 → 50 → NULL
//     head = deleteAtBeginning(head);       // Delete at beginning
//     printList(head);                      // Output: 10 → 15 → 20 →
//     // head = deleteAtEnd(head);             // Delete at beginning
//     // printList(head);                      // Output: 10 → 15 → 20 →
//     // Free memory (optional for now)
//     head = deleteAtPosition(head, 3); // Delete at position 1
//     printList(head);                  // Output: 10 → 20 → NULL\

//     head = reverselist(head);
//     printList(head); // Output: 20 → 10 → NULL

//     cout << "Middle Element: " << middleElement(head) << endl; // Output: 10
//     return 0;
// }

/*

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

bool isCircular(Node *head)
{
    if (head == NULL)
        return false; // Empty list is not circular
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // Move slow pointer by 1
        fast = fast->next->next; // Move fast pointer by 2
        if (slow == fast)        // If they meet, it's circular
            return true;
    }
    return false; // If we reach here, it's not circular
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // first->next = second; // Connect nodes
    // second->next = third; // Connect second to third
    // third->next = fourth; // Connect third to fourth
    // fourth->next = NULL;  // Last node points to NULLfirst->print();
    // Node *head = first;   // Initialize head
    // Node *tail = fourth;  // Initialize tail

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *tail = new Node(40);
    head->next = second;  // Connect nodes
    second->next = third; // Connect second to third
    third->next = tail;   // Connect third to fourth
    tail->next = head;    // Last node points to NULLfirst->print();
    // printList(head);
    if (isCircular(head))
    {
        cout << "The linked list is circular." << endl;
    }
    else
    {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* reverseInKgroups(Node* head, int group) {

    if(head == NULL || group == 1) {
        return head ;
    }

    Node *temp = head ;
    int count = 0 ;

    while(temp != NULL && count < group) {
        temp = temp->next ;
        count++ ;
    }
    if(count < group) {
        return head ;
    }

    Node *curr = head ;
    Node *next = NULL ;
    Node *prev = NULL ;
    count = 0;

    while(curr != NULL && count < group) {

        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
        count++ ;
    }

    if(next!= NULL) {
        head->next  = reverseInKgroups(curr,group) ;
    }

    return prev ;

}


int main() {



    Node *first= new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seven = new Node(70);

    first->next = second; // Connect nodes
    second->next = third; // Connect second to third
    third->next = fourth; // Connect third to fourth
    fourth->next = fifth;
    fifth->next = sixth ;
    sixth->next = seven ;
    seven->next = NULL ;

    Node* head = first ;
    Node* tail = tail ;

    head = reverseInKgroups(head,2);
    printList(head) ;




    return 0;
}

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *add(Node *head,int value) {

    Node* newNode = new Node(value) ;
    if(!head) {
        head = newNode ;
        return head ;
    }
    Node *temp = head ;
    while(temp->next) {
        temp = temp->next ;
    }
    temp->next = newNode ;
    return head ;
}

Node* mergeTwoLL(Node* l1, Node* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    if (l1->data < l2->data) {
        l1->next = mergeTwoLL(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeTwoLL(l1, l2->next);
        return l2;
    }
}

void fun(int n) {
    if (n == 0) return;
    fun(n-1);
    cout << n << " ";
}

int main() {


    Node *head1 = new Node(1) ;
    add(head1,3) ;
    Node *tail1 = add(head1,5) ;
    printList(head1) ;

    Node *head2 = add(NULL,2);
    add(head2,4) ;
    Node *tail2 = add(head2,6);
    printList(head2) ;

    mergeTwoLL(head1, head2) ;
    printList(head1) ;
    printList(head1) ;

    fun(5) ;

    return 0;
}

*/

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " - ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *add(Node *head, int value)
// {

//     Node *newNode = new Node(value);
//     if (!head)
//     {
//         head = newNode;
//         return head;
//     }
//     Node *temp = head;
//     while (temp->next)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return newNode;
// }

// Node *mergeTwoLL(Node *l1, Node *l2)
// {
//     if (l1 == NULL)
//         return l2;
//     if (l2 == NULL)
//         return l1;

//     if (l1->data < l2->data)
//     {
//         l1->next = mergeTwoLL(l1->next, l2);
//         return l1;
//     }
//     else
//     {
//         l2->next = mergeTwoLL(l1, l2->next);
//         return l2;
//     }
// }

// void fun(int n)
// {
//     if (n == 0)
//         return;
//     fun(n - 1);
//     cout << n << " ";
// }

// Node *removeDuplicates(Node *head)
// {
//     Node *curr = head;
//     while (curr->next)
//     {
//         Node *temp = curr->next;
//         if (curr->data == temp->data)
//         {
//             curr->next = temp->next;
//             delete temp;
//             continue;
//         }
//         curr = curr->next;
//     }
//     return head;
// }

// int FindnthNodeFromEnd(Node *head, int n)
// {
//     Node *fast = head, *slow = head;
//     for (int k = 0; k < n; k++)
//     {
//         if (fast == NULL)
//         {
//             return -1;
//         }
//         fast = fast->next;
//     }
//     while (fast != NULL)
//     {
//         fast = fast->next;
//         slow = slow->next;
//     }
//     return slow->data;
// }

// Node *withoutHead(Node *deleteNode)
// {
//     if (deleteNode != NULL && deleteNode->next != NULL)
//     {
//         Node *temp = deleteNode->next;
//         deleteNode->data = temp->data;
//         deleteNode->next = temp->next;
//         delete temp;
//         return deleteNode;
//     }
//     return NULL ;
// }
// int main()
// {

//     Node *head = new Node(1);
//     add(head, 2);
//     add(head, 3);
//     add(head, 3);
//     add(head, 4);
//     Node *anyNode = add(head, 4);
//     add(head, 5);
//     add(head, 6);
//     add(head, 6);
//     printList(head);

//     // Node *removeDuplicate = removeDuplicates(head);
//     // printList(removeDuplicate);
//     // fun(5) ;

//     // cout << FindnthNodeFromEnd(head, 4) << endl;

//     Node *deleted = withoutHead(anyNode);
//     cout << "deleted - " << deleted->data << endl;
//     printList(head) ;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " - ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *removeLoop(Node *head)
// {
//     Node *slow = head, *fast = head;
//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//         if (fast == slow)
//         {
//             break;
//         }
//     }
//     if(fast == NULL || fast->next == NULL){
//         return head;
//     }

//     slow = head;
//     if (slow == fast)
//     {
//         while (fast->next != slow)
//         {
//             fast = fast->next;
//         }
//     }
//     else
//     {
//         while (slow->next != fast->next)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     fast->next = NULL;
//     return head;
// }
// int main()
// {
//     Node *head = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *tail = new Node(40);
//     head->next = second;  // Connect nodes
//     second->next = third; // Connect second to third
//     third->next = tail;   // Connect third to fourth
//     tail->next = third;
//     // printList(head);

//     head = removeLoop(head);
//     printList(head);

//     return 0;
// }

/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrone(Node *head)
{

    Node *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *secondHalf = reverseList(slow->next);
    Node *firstHalf = head;
    Node *jointSecond = secondHalf;
    while (secondHalf != NULL)
    {
        if (firstHalf->data != secondHalf->data)
        {
            slow->next = reverseList(jointSecond);
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    slow->next = reverseList(jointSecond);
    return true;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(20);
    Node *tail = new Node(20);
    head->next = second;  // Connect nodes
    second->next = third; // Connect second to third
    third->next = tail;   // Connect third to fourth
    tail->next = NULL;

    printList(head);

    // head = reverseList(head);
    printList(head);

    if (isPalindrone(head))
    {
        printList(head);
        cout << "The linked list is palindrone." << endl;
    }
    else
    {
        printList(head);
        cout << "The linked list is not palindrone." << endl;
    }

    return 0;
}

*/

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// Node *getIntersection(Node *headA, Node *headB)
// {
//     if (!headA || !headB)
//         return NULL;

//     Node *a = headA;
//     Node *b = headB;

//     while (a != b)
//     {
//         a = (a == NULL) ? headB : a->next;
//         b = (b == NULL) ? headA : b->next;
//     }

//     return a;
// }

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " - ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     // Shared part
//     Node *common = new Node(6);
//     common->next = new Node(7);

//     // List A: 1 -> 2 -> 3 -> 6 -> 7
//     Node *headA = new Node(1);
//     headA->next = new Node(2);
//     headA->next->next = new Node(3);
//     headA->next->next->next = common;

//     // List B: 4 -> 5 -> 6 -> 7
//     Node *headB = new Node(4);
//     headB->next = new Node(5);
//     headB->next->next = common;
//     printList(headA);
//     printList(headB);
//     Node *intersect = getIntersection(headA, headB);
//     if (intersect)
//     {
//         cout << "Intersection at node with value: " << intersect->data << endl;
//     }
//     else
//     {
//         cout << "No intersection found." << endl;
//     }

//     return 0;
// }

// Stack

// #include <iostream>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int capacity)
//     {
//         arr = new int[capacity];
//         size = capacity;
//         top = -1;
//     }

//     void push(int val)
//     {
//         if (top == size - 1)
//         {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         arr[++top] = val;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack underflow" << endl;
//         }
//         top--;
//     }
//     bool isEmpty()
//     {
//         // if (top == -1)
//         // {

//         //     return true;
//         // }

//         // return false;

//         // or
//         return top == -1;
//     }

//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack underflow" << endl;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }

//     ~Stack()
//     {
//         delete[] arr;
//     }
// };

// int main()
// {

//     Stack st(6);
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout << st.peek() << endl;
//     st.pop();
//     cout << st.peek() << endl;
//     st.isEmpty() ? cout << "Empty" : cout << "Not Empty\n";
//     st.pop();
//     st.pop();
//     st.isEmpty() ? cout << "Empty" : cout << "Not Empty";
//     return 0;
// }

// desing a stack using linked lists

// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = nullptr;
//     }
// };

// class stack
// {
// public:
//     node *top;

//     stack()
//     {
//         top = nullptr;
//     }

//     void push(int val)
//     {
//         node *newNode = new node(val);
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop()
//     {
//         if (top == nullptr)
//         {
//             cout << "Stack Underflow" << endl;
//         }
//         else
//         {
//             node *temp = top;
//             top = temp->next;
//             delete temp;
//         }
//     }
//     bool isEmpty()
//     {
//         return top == nullptr;
//     }

//     int peek()
//     {
//         if (top == nullptr)
//         {
//             cout << "Stack underflow" << endl;
//             return -1;
//         }
//         else
//         {
//             return top->data;
//         }
//     }
//     ~stack()
//     {
//         while (top != NULL)
//         {
//             pop();
//         }
//     }
// };
// int main()
// {
//     stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << "Top: " << st.peek() << endl; // 30
//     st.pop();
//     cout << "Top after pop: " << st.peek() << endl; // 20
//     cout << (st.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

//     st.pop();
//     st.pop();
//     st.pop(); // Underflow

//     cout << (st.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>

// using namespace std;

// string reversedString(string str)
// {
//     stack<char> st;

//     for (char ch : str)
//     {
//         st.push(ch);
//     }
//     string rev = "";
//     while (!st.empty())
//     {
//         rev += st.top();
//         st.pop();
//     }
//     return rev;
// }
// int main()
// {
//     string input = "hello";
//     cout<<"Original String :- "<< input <<endl ;
//     string output = reversedString(input);
//     cout << "Reversed string :- " << output << endl; // Output: "olleh"
//     return 0;
// }

// #include <iostream>
// #include <stack>

// using namespace std;

// bool isBalanced(string brackets)
// {
//     stack<char> st;
//     for (char ch : brackets)
//     {
//         if (ch == '(' || ch == '[' || ch == '{')
//         {
//             st.push(ch);
//         }
//         else
//         {
//             if (st.empty()) return false;
//             char top = st.top();
//             if (top == '(' && ch == ')')
//             {
//                 st.pop();
//             }
//             else if (top == '[' && ch == ']')
//             {
//                 st.pop();
//             }
//             else if (top == '{' && ch == '}')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     return st.empty() ;
// }
// int main()
// {
//     string brackets = "{{{[()]}";
//     cout << "Brackets :- " << brackets << endl;
//     if (isBalanced(brackets))
//     {
//         cout << "Balanced" << endl;
//     }
//     else
//     {
//         cout << "Not Balanced" << endl;
//     }
//     return 0;
// }

// Design a Stack That Supports getMin() in O(1)
// #include <iostream>
// #include <stack>
// using namespace std;

// class minStack
// {
// public:
//     stack<int> mainstack;
//     stack<int> minstack;

//     void push(int val)
//     {

//         mainstack.push(val);
//         if (minstack.empty() || val <= minstack.top())
//         {
//             minstack.push(val);
//         }
//     }

//     void pop()
//     {
//         if (mainstack.top() == minstack.top())
//         {
//             minstack.pop();
//         }
//         mainstack.pop();
//     }
//     int top()
//     {
//         if (!mainstack.empty())
//         {
//             return mainstack.top();
//         }
//         return -1;
//     }

//     int getMin()
//     {
//         return minstack.top();
//     }
// };

// int main()
// {
//     minStack st;
//     st.push(2);
//     st.push(5);
//     st.push(3);
//     st.push(7);

//     cout << "Min: before pop - " << st.getMin() << endl; // 3
//     st.pop();
//     cout << "Min: after pop - " << st.getMin() << endl; // 3
//     st.pop();
//     cout << "Min: after pop - " << st.getMin() << endl; // 5
//     return 0;
// }

// Design a Stack That Supports getMax() in O(1)

// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
// public:
//     stack<int> mainstack;
//     stack<int> maxstack;

//     void push(int val)
//     {
//         mainstack.push(val);
//         if (maxstack.empty() || val >= maxstack.top())
//         {
//             maxstack.push(val);
//         }
//     }

//     void pop()
//     {
//         if (mainstack.top() == maxstack.top())
//         {
//             maxstack.pop();
//         }
//         mainstack.pop();
//     }

//     int top()
//     {
//         return mainstack.top();
//     }
//     int getMax()
//     {
//         return maxstack.top();
//     }
// };
// int main()
// {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     st.push(8);
//     st.push(100);
//     st.push(12);

//     cout << "Max: " << st.getMax() << endl;
//     st.pop();
//     cout << "Max: " << st.getMax() << endl;
//     st.pop();
//     cout << "Max: " << st.getMax() << endl;

//     return 0;
// }

// // Next Greater Element
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextGreaterElements(vector<int> &arr)
// {
//     int size = arr.size() - 1;
//     stack<int> st;
//     vector<int> res(size-1,-1); ;

//     for(int i = size ; i >= 0 ; i++){
//         while(!st.empty() && st.top() <= arr[i]){
//             st.pop();
//         }
//         if(!st.empty()){
//             res[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return res ;
// }
// int main()
// {
//     vector<int> arr = {4, 5, 2, 25};
//     vector<int> ans = nextGreaterElements(arr);

//     cout << "Next Greater Elements: ";
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Previous smaller element

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> previousSmaller(vector<int> &arr)
// {
//     int size = arr.size() ;
//     stack<int> st;
//     vector<int> res(size, -1);
//     ;

//     for (int i = 0; i < size ; i++)
//     {
//         while(!st.empty() && st.top() >= arr[i])
//         {
//             st.pop();
//         }
//         if(!st.empty()){
//             res[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return res;
// }
// int main()
// {
//     vector<int> arr = {1, 5, 0, 3, 4, 5};
//     vector<int> ans = previousSmaller(arr);

//     cout << "Previous Smaller Element: ";
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// // Next smaller element
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> nextSmaller(vector<int> &arr)
// {
//     int size = arr.size() ;
//     stack<int> st;
//     vector<int> res(size, -1);

//     for (int i = size - 1; i >=0 ; i--)
//     {
//         while(!st.empty() && st.top() >= arr[i])
//         {
//             st.pop();
//         }
//         if(!st.empty()){
//             res[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return res;
// }
// int main()
// {
//     vector<int> arr = {4,2, 1, 5 ,3};
//     vector<int> ans = nextSmaller(arr);

//     cout << "Next Smaller Element: ";
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// vector<int> previousGreater(vector<int>& arr) {
//     int n = arr.size();
//     stack<int> st;
//     vector<int> res(n, -1);

//     for (int i = 0; i < n; i++) {
//         while (!st.empty() && st.top() <= arr[i]) {
//             st.pop();
//         }
//         if (!st.empty()) {
//             res[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {4, 5, 2, 10, 8};

//     // -1  -1  5 -1  10

//     vector<int> ans = previousGreater(arr);

//     cout << "Next Smaller Elements: ";
//     for (int val : ans) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// int LargestRectangleArea(vector<int> &heights)
// {
//     int size = heights.size();
//     vector<int> left(size, -1);
//     vector<int> right(size, size);
//     stack<int> st;

//     // store the index of the left smaller value
//     for (int i = 0; i < size; i++)
//     {
//         while (!st.empty() && heights[st.top()] >= heights[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             left[i] = st.top();
//         }
//         st.push(i);
//     }

//     while (!st.empty())
//     {
//         st.pop();
//     }
//     // store the index of the right smaller value
//     for (int i = size - 1; i >= 0; i--)
//     {
//         while (!st.empty() && heights[st.top()] >= heights[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             right[i] = st.top();
//         }
//         st.push(i);
//     }

//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int width = right[i] - left[i] - 1;
//         int area = heights[i] * width;
//         ans = max(ans, area);
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> heights = {2, 1, 5, 6, 2, 3};
//     cout << "Largest Rectangle Area: " << LargestRectangleArea(heights) << endl;
//     return 0;
// }

// Maximum rectangle in binary matrix

// #include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// int LargestRectangleArea(vector<int> &heights)
// {
//     int size = heights.size();
//     vector<int> left(size, -1);
//     vector<int> right(size, size);
//     stack<int> st;

//     // store the index of the left smaller value
//     for (int i = 0; i < size; i++)
//     {
//         while (!st.empty() && heights[st.top()] >= heights[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             left[i] = st.top();
//         }
//         st.push(i);
//     }

//     while (!st.empty())
//     {
//         st.pop();
//     }
//     // store the index of the right smaller value
//     for (int i = size - 1; i >= 0; i--)
//     {
//         while (!st.empty() && heights[st.top()] >= heights[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             right[i] = st.top();
//         }
//         st.push(i);
//     }

//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int width = right[i] - left[i] - 1;
//         int area = heights[i] * width;
//         ans = max(ans, area);
//     }
//     return ans;
// }

// int maximumRectangleBinaryMatrix(vector<vector<char>> &matrix)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     vector<int> add(cols, 0);
//     int maxArea = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matrix[i][j] == '1')
//             {
//                 add[j] += 1;
//             }
//             else
//             {
//                 add[j] = 0;
//             }
//         }
//         maxArea = max(maxArea, LargestRectangleArea(add));
//     }
//     return maxArea;
// }

// int main()
// {
//     vector<vector<char>> matrix = {{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
//     cout << "Largest Rectangle Area: " << maximumRectangleBinaryMatrix(matrix) << endl;
//     return 0;
// }

// // Queue
// #include <iostream>
// using namespace std;

// class Queue
// {
// public:
//     int *arr;
//     int size;
//     int rear;
//     int front;
//     int capacity;

//     Queue(int val)
//     {
//         arr = new int[val];
//         front = 0;
//         rear = -1;
//         size = 0;
//         capacity = val;
//     }
//     bool isEmpty()
//     {
//         return size == 0;
//     }
//     void enqueue(int val)
//     {
//         if (isFull())
//         {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         rear++;
//         arr[rear] = val;
//         size++;
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is Empty" << endl;
//             return;
//         }
//         front++;
//         size--;
//     }
//     int peek()
//     {
//         if(isEmpty()){
//             cout<<"Queue is Empty"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     bool isFull()
//     {
//         return size == capacity;
//     }
//     ~Queue()
//     {
//         delete[] arr;
//     }
// };

// int main()
// {
//     Queue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     cout << "Front: " << q.peek() << endl; // 10

//     q.dequeue();
//     cout << "Front after dequeue: " << q.peek() << endl; // 20

//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60);
//     q.enqueue(70); // Should give overflow

//     while (!q.isEmpty())
//     {
//         cout << q.peek() << " ";
//         q.dequeue();
//     }

//     return 0;
// }

// // Circular Queue
// #include <iostream>
// using namespace std;

// class CircularQueue
// {
// public:
//     int *arr;
//     int size;
//     int rear;
//     int front;
//     int capacity;

//     CircularQueue(int val)
//     {
//         arr = new int[val];
//         front = 0;
//         rear = 0;
//         size = 0;
//         capacity = val;
//     }
//     bool isEmpty()
//     {
//         return size == 0;
//     }
//     void enqueue(int val)
//     {
//         if (isFull())
//         {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         arr[rear] = val;
//         rear = (rear + 1) % capacity;
//         size++;
//     }
//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is Empty" << endl;
//             return;
//         }
//         front = (front + 1) % capacity;
//         size--;
//     }
//     int peek()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     bool isFull()
//     {
//         return size == capacity  ;
//     }
//     ~CircularQueue()
//     {
//         delete[] arr;
//     }
// };
// int main()
// {
//     CircularQueue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     cout << "Peek: " << q.peek() << endl; // 10

//     q.dequeue(); // remove 10
//     q.enqueue(40);
//     q.enqueue(50);
//     q.enqueue(60); // Queue full now

//     while (!q.isEmpty())
//     {
//         cout << q.peek() << " ";
//         q.dequeue();
//     }
//     return 0;
// }

// Implement queue using Linked Lists

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class Queue
// {
// public:
//     Node *front;
//     Node *rear;

//     Queue()
//     {
//         front = NULL;
//         rear = NULL;
//     }

//     bool isEmpty()
//     {
//         return front == NULL;
//     }
//     int peek()
//     {
//         if (front == NULL) {
//                 return -1;
//             }
//             return front->data;
//     }
//     void enqueue(int val)
//     {
//         Node *newNode = new Node(val);
//         if (front == NULL)
//         {
//             front = rear = newNode;
//         }
//         else
//         {
//             rear->next = newNode;
//             rear = newNode;
//         }
//     }
//     void dequeue()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is Empty" << endl;
//             return;
//         }
//         Node *temp = front;
//         front = front->next;
//         if (front == NULL)
//         {
//             rear = NULL;
//         } // Queue became empty
//         delete temp;
//     }
//     ~Queue()
//     {
//         while (front != NULL)
//         {
//             Node *temp = front;
//             front = front->next;
//             delete temp;
//         }
//     }
// };
// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     cout << "Peek: " << q.peek() << endl; // 10
//     q.dequeue();
//     cout << "Peek: " << q.peek() << endl; // 20

//     return 0;
// }

// Implement Queue using 2 stacks

// #include <iostream>
// #include <stack>
// using namespace std;

// class stack {
//     public :
//     int top ;
//     int *arr ;

//     stack(int size)
//     {
//         top = -1;
//         arr = new int[size];
//     }
// }

// class Queue
// {

// public:
//     stack<int> s1, s2;

//     void enqueue(int val)
//     {
//         s1.push(val);
//     }

//     void dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is Empty" << endl;
//             return;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         s2.pop();
//     }

//     bool isEmpty()
//     {
//         return s1.empty() && s2.empty();
//     }

//     int peek()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         else if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         return s2.top();
//     }
// };

// int main()
// {

//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     cout << "Peek: " << q.peek() << endl; // 10
//     q.dequeue();
//     cout << "Peek: " << q.peek() << endl; // 20

//     // Test empty cases
//     q.dequeue();
//     q.dequeue();
//     q.dequeue();                          // Should print error
//     cout << "Peek: " << q.peek() << endl; // Should print error

//     return 0;
// }

// // Doubly ended queue

// #include <iostream>
// using namespace std;

// class Deque
// {

// public:
//     int front;
//     int rear;
//     int size;
//     int capacity;
//     int *arr;
//     Deque(int cap)
//     {
//         front = -1;
//         rear = -1;
//         size = 0;
//         capacity = cap;
//         arr = new int[cap];
//     }
//     bool isEmpty()
//     {
//         return size == 0;
//     }

//     bool isFull()
//     {
//         return size == capacity;
//     }
//     void push_back(int val)
//     {
//         if (isFull())
//         {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         else if (isEmpty())
//         {
//             front = rear = 0;
//             arr[rear] = val;
//             size++;
//             return;
//         }
//         rear = (rear + 1) % capacity;
//         arr[rear] = val;
//         size++;
//     }

//     void push_front(int val)
//     {
//         if (isFull())
//         {
//             cout << "Queue is full" << endl;
//             return;
//         }
//         else if (isEmpty())
//         {
//             front = rear = 0;
//             arr[front] = val;
//             size++;
//             return;
//         }
//         front = (front - 1 + capacity) % capacity;
//         arr[front] = val;
//         size++;
//     }

//     int pop_front()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         else if (front == rear)
//         {
//             int ans = arr[front];
//             front = rear = -1;
//             size--;
//             return ans;
//         }
//         int ans = arr[front];
//         front = (front + 1) % capacity;
//         size--;
//         return ans;
//     }

//     int pop_back()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         else if (front == rear)
//         {
//             int ans = arr[rear];
//             front = rear = -1;
//             size--;
//             return ans;
//         }
//         int ans = arr[rear];
//         rear = (rear - 1 + capacity) % capacity;
//         size--;
//         return ans;
//     }
//     int getFront()
//     {
//         if (isEmpty())
//             return -1;
//         return arr[front];
//     }

//     int getRear()
//     {
//         if (isEmpty())
//             return -1;
//         return arr[rear];
//     }
//     ~Deque()
//     {
//         delete[] arr;
//     }
// };
// int main()
// {

//     Deque dq(5);
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_front(5);
//     cout << "Front: " << dq.getFront() << endl; // 5
//     cout << "Back: " << dq.getRear() << endl;   // 20

//     dq.pop_back();
//     dq.pop_front();
//     cout << "Front: " << dq.getFront() << endl; // 10

//     return 0;
// }

// Queue reversal

// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// // queue<int> reverseWithStack(queue<int> q)
// // {
// //     stack<int> st;
// //     while (!q.empty())
// //     {
// //         st.push(q.front());
// //         q.pop();
// //     }
// //     while (!st.empty())
// //     {
// //         q.push(st.top());
// //         st.pop();
// //     }
// //     return q;
// // }

// queue<int> revserseWithRecursion(queue<int> q)
// {
//     if (q.empty())
//     {
//         return q;
//     }
//     int val = q.front();
//     q.pop();
//     q = revserseWithRecursion(q);
//     q.push(val);
//     return q;
// }

// int main()
// {
//     queue<int> que;
//     que.push(10);
//     que.push(20);
//     que.push(30);
//     que.push(40);
//     que.push(50);
//     queue<int> aque = que;
//     cout << "Original queue: \n";
//     while (!aque.empty())
//     {
//         cout << aque.front() << " ";
//         aque.pop();
//     }
//     while (!aque.empty())
//     {
//         cout << aque.front() << " ";
//         aque.pop();
//     }
//     // queue<int> rev = reverseWithStack(que);
//     // cout << "\nReversed queue: \n";
//     // while (!rev.empty())
//     // {
//     //     cout << rev.front() << " ";
//     //     rev.pop();
//     // }

//     queue<int> rev = revserseWithRecursion(que);
//     cout << "\nReversed queue: \n";
//     while (!rev.empty())
//     {
//         cout << rev.front() << " ";
//         rev.pop();
//     }

//     return 0;
// }

// first negative integer in k size window

// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;

// // Function to find the first negative integer in every window of size k
// vector<int> firstNegativeInWindow(const vector<int> &arr, int k)
// {
//     deque<int> dq; // Stores indices of negative numbers in the current window
//     vector<int> result;

//     for (int i = 0; i < k; i++)
//     {
//         if (arr[i] < 0)
//         {
//             dq.push_back(i);
//         }
//     }

//     if (!dq.empty())
//     {
//         result.push_back(arr[dq.front()]);
//     }
//     else
//     {
//         result.push_back(0);
//     }

//     for (int i = k; i < arr.size(); i++)
//     {

//         if (!dq.empty() && dq.front() <= i - k)
//         {
//             dq.pop_front();
//         }
//         if (arr[i] < 0)
//         {
//             dq.push_back(i);
//         }

//         if (!dq.empty())
//         {
//             result.push_back(arr[dq.front()]);
//         }
//         else
//         {
//             result.push_back(0);
//         }
//     }
//     return result;
// }

// int main()
// {
//     vector<int> arr = {12, -1, -7, 8, 15, 30, 16, 28};
//     int k = 3;
//     vector<int> res = firstNegativeInWindow(arr, k);

//     cout << "First negative integer in every window of size " << k << ":\n";
//     for (int x : res)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Demonstrate where the condition is applied
//     // At i = 4, k = 3, i - k = 1
//     // If dq.front() <= 1, it will be removed
//     // This ensures that only indices within the current window [2,3,4] remain
// }



// // Sum of Minimum and Maximum in Every Window of Size K
// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;

// // Function to find the first negative integer in every window of size k
// int sumOfMinAndMaxInWindow(const vector<int> &arr, int k)
// {

//     deque<int> max;
//     deque<int> min;
//     int result = 0;

//     //  {2, 5, -1, 7, -3, -1, -2};
//     for (int i = 0; i < k; i++)
//     {
//         while (!max.empty() && arr[i] >= arr[max.back()])
//         {
//             max.pop_back();
//         }
//         while (!min.empty() && arr[i] <= arr[min.back()])
//         {
//             min.pop_back();
//         }

//         max.push_back(i);// 5 index 1 
//         min.push_back(i); // -1 index 2
//     }
//     result += arr[max.front()] + arr[min.front()];

//     for (int i = k; i < arr.size(); i++)
//     {

//         if (!max.empty() && max.front() <= i - k)
//         {
//             max.pop_front();
//         }
//         if (!min.empty() && min.front() <= i - k)
//         {
//             min.pop_front();
//         }
//         while (!max.empty() && arr[i] >= arr[max.back()])
//         {
//             max.pop_back();
//         }
//         while (!min.empty() && arr[i] <= arr[min.back()])
//         {
//             min.pop_back();
//         }

//         max.push_back(i);
//         min.push_back(i);

//         result += arr[max.front()] + arr[min.front()];
//     }
//     return result;
// }

// int main()
// {
//     vector<int> arr = {2, 5, -1, 7, -3, -1, -2};
//     int k = 3;
//     int res = sumOfMinAndMaxInWindow(arr, k);

//     cout << "Sum of Minimum and Maximum in Every Window of Size " << k << " is : - " << res << endl;

//     // Demonstrate where the condition is applied
//     // At i = 4, k = 3, i - k = 1
//     // If dq.front() <= 1, it will be removed
//     // This ensures that only indices within the current window [2,3,4] remain
// }


// 