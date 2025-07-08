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



#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string brackets)
{
    stack<char> st;
    for (char ch : brackets)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty()) return false;
            char top = st.top();
            if (top == '(' && ch == ')')
            {
                st.pop();
            }
            else if (top == '[' && ch == ']')
            {
                st.pop();
            }
            else if (top == '{' && ch == '}')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty() ;
}
int main()
{
    string brackets = "{{{[()]}";
    cout << "Brackets :- " << brackets << endl;
    if (isBalanced(brackets))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
    return 0;
}
