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

// Binary Tree (tree)

// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// void inorder(Node *root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(Node *root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(Node *root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main()
// {

//     // Constructing the tree:
//     //        1
//     //       / \
//     //      2   3
//     //     / \
//     //    4   5

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Inorder: ";
//     inorder(root); // 4 2 5 1 3
//     cout << "\nPreorder: ";
//     preorder(root); // 1 2 4 5 3
//     cout << "\nPostorder: ";
//     postorder(root); // 4 5 2 3 1

//     return 0;
// }

// // Binary Tree (Level Order Traversal)

// #include <iostream>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// // BFS (breadth first search)

// void levelOrderTraversal(Node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {

//         Node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << curr->data << "  ";

//             if (curr->left)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main()
// {
//     // Constructing the tree:
//     //       1
//     //      / \
//     //     2   3
//     //    / \
//     //   4   5

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     levelOrderTraversal(root);

//     return 0;
// }

// BST - left most view - partially correct answer

// #include <iostream>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// // BFS (breadth first search)

// void levelOrderTraversal(Node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     cout << q.front()->data <<"  ";

//     while (!q.empty())
//     {

//         Node *curr = q.front();
//         q.pop();
//         if (curr == NULL)
//         {
//             // cout << endl;
//             if (!q.empty())
//             {
//                 cout << q.front()->data << "  ";
//                 q.push(NULL);
//             }
//         }
//         else
//         {

//             if (curr->left)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main()
// {

//     // Constructing the tree:
//     //       1
//     //      / \
//     //     2   3
//     //    / \
//     //   4   5

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     levelOrderTraversal(root);

//     return 0;
// }

// // BST - left most view - correct ans and approach

// #include <iostream>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// // BFS (breadth first search)

// void leftViewTree(Node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);

//     // cout << q.front()->data << "  ";

//     while (!q.empty())
//     {

//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             Node *curr = q.front();
//             q.pop();
//             if (i == 0)
//             {
//                 cout << curr->data << "  ";
//             }
//             if (curr->left)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main()
// {

//     // Constructing the tree:
//     //       1
//     //      / \
//     //     2   3
//     //    / \
//     //   4   5

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     leftViewTree(root);

//     return 0;
// }

// BST - left most view - correct ans and approach

// #include <iostream>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// // BFS (breadth first search)

// void rightViewTree(Node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);

//     // cout << q.front()->data << "  ";

//     while (!q.empty())
//     {

//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             Node *curr = q.front();
//             q.pop();
//             if (i == size - 1)
//             {
//                 cout << curr->data << "  ";
//             }
//             if (curr->left)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right)
//             {
//                 q.push(curr->right);
//             }
//         }
//     }
// }

// int main()
// {

// //     // Constructing the tree:
// //     //       1
// //     //      / \
// //     //     2   3
// //     //    / \
// //     //   4   5

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     rightViewTree(root);

//     return 0;
// }

// Map in C++

// #include <map>
// #include <iostream>
// using namespace std;

// int main() {
//     map<int, int> myMap;

//     // Insert
//     myMap.insert({10, 20});
//     myMap[30] = 40;

//     // Find
//     int key = 10;
//     auto it = myMap.find(key);
//     if (it == myMap.end()) {
//         cout << "Key " << key << " does not exist." << endl;
//     } else {
//         cout << "Key " << key << " exists with value " << it->second << endl;
//     }

//     // Delete
//     int keyToDelete = 30;
//     int numErased = myMap.erase(keyToDelete);
//     if (numErased == 1) {
//         cout << "Key " << keyToDelete << " deleted." << endl;
//     } else {
//         cout << "Key " << keyToDelete << " not found." << endl;
//     }

//     // Print all
//     for (auto& pair : myMap) {
//         cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
//     }

//     // Check if empty
//     if (myMap.empty()) {
//         cout << "Map is empty." << endl;
//     } else {
//         cout << "Map is not empty." << endl;
//     }

//     // Clear
//     myMap.clear();

//     return 0;
// }

// // Top view of tree

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// void topViewTree(Node *root)
// {

//     queue<pair<Node *, int>> q;
//     map<int, int> m;

//     q.push({root , 0});

//     while (!q.empty())
//     {

//         auto it = q.front();
//         q.pop();

//         Node *curr = it.first;
//         int hd = it.second; // here hd is horizontal distance

//         if (m.find(hd) == m.end())
//         {
//             m[hd] = curr->data;
//         }

//         if (curr->left)
//         {
//             q.push({curr->left, hd - 1});
//         }
//         if (curr->right)
//         {
//             q.push({curr->right, hd + 1});
//         }
//     }
//     for (auto it : m)
//     {
//         cout << it.second  << " ";
//     }
// }
// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     topViewTree(root);

//     return 0;
// }

// // Bottom view of tree

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// void topViewTree(Node *root)
// {

//     queue<pair<Node *, int>> q;
//     map<int, int> m;

//     q.push({root, 0});

//     while (!q.empty())
//     {

//         auto it = q.front();
//         q.pop();

//         Node *curr = it.first;
//         int hd = it.second; // here hd is horizontal distance

//         m[hd] = curr->data;

//         if (curr->left)
//         {
//             q.push({curr->left, hd - 1});
//         }
//         if (curr->right)
//         {
//             q.push({curr->right, hd + 1});
//         }
//     }
//     for (auto it : m)
//     {
//         cout << it.second << " ";
//     }
// }
// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     topViewTree(root);

//     return 0;
// }

// // Longest Height of the tree

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// // void topViewTree(Node *root)
// // {

// //     queue<pair<Node *, int>> q;
// //     map<int, int> m;

// //     q.push({root, 0});

// //     while (!q.empty())
// //     {

// //         auto it = q.front();
// //         q.pop();

// //         Node *curr = it.first;
// //         int hd = it.second; // here hd is horizontal distance

// //         m[hd] = curr->data;

// //         if (curr->left)
// //         {
// //             q.push({curr->left, hd - 1});
// //         }
// //         if (curr->right)
// //         {
// //             q.push({curr->right, hd + 1});
// //         }
// //     }
// //     for (auto it : m)
// //     {
// //         cout << it.second << " ";
// //     }
// // }

// int longestheight(Node *root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     int left = longestheight(root->left);
//     int right = longestheight(root->right);

//     return 1 + max(left, right);
// }
// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     int height = longestheight(root);
//     cout << "Height of the tree: " << height << endl;
//     return 0;
// }

// // Total nodes in the tree
// check if tree is balanced

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// int countTotalNodes(Node *root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     // int left = countTotalNodes(root->left);
//     // int right = countTotalNodes(root->right);
//     // // return 1 + right + left ;
//     // return 1 + countTotalNodes(root->left) + countTotalNodes(root->right); // this will also work

//     // return 1 + countTotalNodes(root->left) + countTotalNodes(root->right); // will to work

//     int left = countTotalNodes(root->left);
//     int right = countTotalNodes(root->right);
//     // return 1 + right + left ;
//     return 1 + left + right;
// }

// // bool isTree_Balanced(Node *root)
// // { //wrong does not check for the innerr sub tress checks only the outer left and right trees
// //     if (!root)
// //     {
// //         return false;
// //     }

// //     int left_height = longestheight(root->left); // O(n)
// //     int right_height = longestheight(root->right);// O(n)
// //     //  so O(n) X O(n) = O(n^2)

// //     if (abs(left_height - right_height) > 1)
// //     {
// //         return false;
// //     }
// //     return true;
// // }

// int longestheight(Node *root)
// {
//     if (!root)
//     {
//         return 0;
//     }
//     int left = longestheight(root->left);
//     int right = longestheight(root->right);

//     return 1 + max(left, right);
// }
// // bool isBalanced(Node *root)
// // {
// //     // Time Complexity: O(n^2) which is not good
// //     if (!root)
// //     {
// //         return true;
// //     }
// //     int left_height = longestheight(root->left);   // O(size of left subtree)
// //     int right_height = longestheight(root->right); // O(size of right subtree)
// //     if (abs(left_height - right_height) > 1)
// //     {
// //         return false;
// //     }
// //     // Recursively check ALL subtrees: this is what causes O(n²)
// //     return isBalanced(root->left) && isBalanced(root->right);
// // }

// int checkHeight(Node* root) {
//     if (!root) return 0;
//     int left = checkHeight(root->left);
//     if (left == -1) return -1;
//     int right = checkHeight(root->right);
//     if (right == -1) return -1;
//     if (abs(left - right) > 1) return -1;
//     return 1 + max(left, right);
// }

// bool isBalanced(Node* root) {
//     return checkHeight(root) != -1;
// }

// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     int height = longestheight(root);
//     cout << "Height of the tree: " << height << endl;
//     int totalNodes = countTotalNodes(root);
//     cout << "Total nodes in the tree: " << totalNodes << endl;
//     // bool is_balanced = isTree_Balanced(root);
//     bool is_balanced = isBalanced(root);
//     if (is_balanced)
//     {
//         cout << "Tree is balanced" << endl;
//     }
//     else
//     {
//         cout << "Tree is not balanced" << endl;
//     }

//     return 0;
// }

// // Find the diameter(width) or distance from one node to another node

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };
// int height(Node *root, int &diameter)
// {
//     if (!root)
//     {
//         return 0;
//     }

//     int lh = height(root->left, diameter);
//     int rh = height(root->right, diameter);

//     diameter = max(diameter, lh + rh);

//     return 1 + max(lh, rh);
// }
// int diametere(Node *root)
// {
//     // Your code here
//     int diameter = 0;
//     height(root, diameter);
//     return diameter;
// }

// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     int diameter = diametere(root);
//     cout << "Diameter of the tree: " << diameter << endl;

//     return 0;
// }

// Zig-Zag Tree Traversal

// #include <iostream>
// #include <map>
// #include <queue>

// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;

//     Node(int value)
//     {
//         val = value;
//         left = NULL;
//         right = NULL;
//     }
//     // Node(int val)
//     // {
//     //     this->val = val;
//     //     left = NULL;
//     //     right = NULL;
//     // }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// vector<int> zigZagTraversal(Node *root)
// {
//     // Code here
//     queue<Node *> q;
//     q.push(root);
//     vector<int> ans;
//     bool leftToRight = true;

//     while (!q.empty())
//     {

//         int size = q.size();
//         vector<int> level(size);

//         for (int i = 0; i < size; i++)
//         {
//             Node *curr = q.front();
//             q.pop();

//             int index = leftToRight ? i : size - i - 1;
//             level[index] = curr->val;

//             if (curr->left)
//             {
//                 q.push(curr->left);
//             }
//             if (curr->right)
//             {
//                 q.push(curr->right);
//             }
//         }
//         for (int i = 0; i < size; i++)
//         {
//             ans.push_back(level[i]);
//         }
//         leftToRight = !leftToRight;
//     }

//     return ans;
// }

// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     vector<int> ans = zigZagTraversal(root);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// Vertical order Traversal

// #include <iostream>
// #include <map>
// #include <queue>
// #include <algorithm>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int value)
//     {
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
//     // Node(int val)
//     // {
//     //     this->val = val;
//     //     left = NULL;
//     //     right = NULL;
//     // }
//     ~Node()
//     {
//         delete left;
//         delete right;
//     }
// };

// bool isLeaf(Node *node)
// {
//     return !node->left && !node->right;
// }

// void addLeftBoundary(Node *root, vector<int> &res)
// {
//     Node *curr = root->left;
//     while (curr)
//     {
//         if (!isLeaf(curr))
//             res.push_back(curr->data);
//         if (curr->left)
//             curr = curr->left;
//         else
//             curr = curr->right;
//     }
// }

// void addRightBoundary(Node *root, vector<int> &res)
// {
//     Node *curr = root->right;
//     vector<int> temp;
//     while (curr)
//     {
//         if (!isLeaf(curr))
//             temp.push_back(curr->data);
//         if (curr->right)
//             curr = curr->right;
//         else
//             curr = curr->left;
//     }
//     reverse(temp.begin(), temp.end());
//     for (int val : temp)
//         res.push_back(val);
// }

// void addLeaves(Node *root, vector<int> &res)
// {
//     if (isLeaf(root))
//     {
//         res.push_back(root->data);
//         return;
//     }
//     if (root->left)
//         addLeaves(root->left, res);
//     if (root->right)
//         addLeaves(root->right, res);
// }

// void boundaryTraversal(Node *root)
// {
//     if (!root)
//         return;
//     vector<int> res;
//     if (!isLeaf(root))
//         res.push_back(root->data);
//     addLeftBoundary(root, res);
//     addLeaves(root, res);
//     addRightBoundary(root, res);

//     for (int val : res)
//         cout << val << " ";
// }

// void verticalOrderTraversal(Node* root) {
//     if (!root) return;

//     map<int, vector<int>> m;
//     queue<pair<Node*, int>> q;

//     q.push({root, 0});

//     while (!q.empty()) {
//         auto it = q.front(); q.pop();
//         Node* curr = it.first;
//         int hd = it.second;
//         m[hd].push_back(curr->data);

//         if (curr->left) q.push({curr->left, hd - 1});
//         if (curr->right) q.push({curr->right, hd + 1});
//     }

//     for (auto it : m) {
//         for (int val : it.second) cout << val << " ";
//     }
// }

// int main()
// {

//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
//     root->left->right->right = new Node(7);

//     // Print the tree structure (for verification)
//     // cout << "Tree Structure:" << endl;
//     // cout << "        " << root->data << endl;
//     // cout << "      /   \\" << endl;
//     // cout << "     " << root->left->data << "     " << root->right->data << endl;
//     // cout << "    / \\     \\" << endl;
//     // cout << "   " << root->left->left->data << "   " << root->left->right->data << "     " << root->right->right->data << endl;
//     // cout << "        \\" << endl;
//     // cout << "         " << root->left->right->right->data << endl;

//     boundaryTraversal(root);

//     return 0;
// }

// // Binary Search Tree (BST)

// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// Node *insert(Node *root, int value)
// {

//     if (root == NULL)
//     {
//         return new Node(value);
//     }

//     if (value < root->data)
//     {
//         root->left = insert(root->left, value);
//     }
//     else if (value > root->data)
//     {
//         root->right = insert(root->right, value);
//     }

//     return root;
// }

// Node *iterativeAdd(Node *root, int val)
// {

//     Node *curr = root;
//     Node *add = new Node(val);
//     if (curr == NULL)
//     {
//         return add;
//     }
//     Node *parent;

//     while (curr != NULL)
//     {
//         parent = curr;
//         if (curr->data < val)
//         {
//             curr = curr->right;
//         }
//         else if (curr->data > val)
//         {
//             curr = curr->left;
//         }
//         else
//         {
//             return root;
//         }
//     }

//     if (parent->data < val)
//     {
//         parent->right = add;
//     }
//     else
//     {
//         parent->left = add;
//     }
//     return root;
// }

// void inorder(Node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left);
//     cout << " " << root->data;
//     inorder(root->right);
// }

// bool search(Node *root, int value)
// {

//     if (root == NULL)
//     {
//         return false;
//     }

//     if (root->data == value)
//     {
//         return true;
//     }
//     if (value < root->data)
//     {
//         return search(root->left, value);
//     }
//     else if (value > root->data)
//     {
//         return search(root->right, value);
//     }
//     // return false; // optional to write
// }

// int maxValueBST(Node *root)
// {
//     if (root == NULL)
//     {
//         return -1;
//     }

//     Node *curr = root;
//     Node *previous;
//     while (curr != NULL)
//     {
//         previous = curr;
//         curr = curr->right;
//     }
//     return previous->data;
// }

// Node *deleteNode(Node *root, int value)
// {

//     if (root == NULL)
//     {
//         return root;
//     }

//     Node *curr = root;
//     Node *previous = NULL;
//     while (curr != NULL && curr->data != value)
//     {
//         previous = curr;
//         if (curr->data > value)
//         {
//             curr = curr->left;
//         }
//         else
//         {
//             curr = curr->right;
//         }
//     }
//     if (curr == NULL)
//     {
//         return root;
//     }
//     // if have no child or one child with the root and the middle node
//     if (curr->left == NULL || curr->right == NULL)
//     {
//         Node *newChild = NULL;
//         if (curr->left == NULL)
//         {
//             newChild = curr->right;
//         }
//         else
//         {
//             newChild = curr->left;
//         }

//         if (previous == NULL)
//         {
//             delete curr;
//             return newChild;
//         }

//         if (previous->left == curr)
//         {
//             previous->left = newChild;
//         }
//         else
//         {
//             previous->right = newChild;
//         }
//         delete curr;
//     }
//     // delete having two child
//     else
//     {
//         //
//         //             50
//         //          /      \
// //        30        70
//         //      /   \      /   \
// //    20    40   60    80
//         //   / \   / \   / \   / \
// // 10  25 35 45 55 65 75   85
//         //
//         Node *nodeToDelete = curr->left;
//         Node *prevNode = curr;
//         while (nodeToDelete->right != NULL)
//         {
//             prevNode = nodeToDelete;
//             nodeToDelete = nodeToDelete->right;
//         }
//         curr->data = nodeToDelete->data;

//         if (prevNode->left == nodeToDelete)
//         {
//             prevNode->left = nodeToDelete->left;
//         }
//         else
//         {
//             prevNode->right = nodeToDelete->left;
//         }
//         delete nodeToDelete;
//     }

//     return root;
// }

// Node *minValueBST(Node *root)
// {
//     if (root == NULL)
//     {
//         return root;
//     }

//     Node *curr = root;
//     Node *previous;
//     while (curr)
//     {
//         previous = curr;
//         curr = curr->left;
//     }
//     return previous;
// }

// //     5
// //    / \
//     //   3   6
// //  / \
//     // 2   7

// bool isValidBST(Node *root, long long minVal = LLONG_MIN, long long maxVal = LLONG_MAX)
// {
//     if (root == NULL)
//     {
//         return true;
//     }

//     if (root->data <= minVal || root->data >= maxVal)
//     {
//         return false;
//     }

//     return isValidBST(root->left, minVal, root->data) &&
//            isValidBST(root->right, root->data, maxVal);
// }

// bool isSubtreeLesser(Node *root, int val)
// {
//     if (root == NULL)
//         return true;
//     if (root->data >= val)
//         return false;
//     return isSubtreeLesser(root->left, val) && isSubtreeLesser(root->right, val);
// }

// bool isSubtreeGreater(Node *root, int val)
// {
//     if (root == NULL)
//         return true;
//     if (root->data <= val)
//         return false;
//     return isSubtreeGreater(root->left, val) && isSubtreeGreater(root->right, val);
// }

// bool isBST(Node *root)
// {
//     if (root == NULL)
//         return true;

//     if (!isSubtreeLesser(root->left, root->data) ||
//         !isSubtreeGreater(root->right, root->data))
//     {
//         return false;
//     }

//     return isBST(root->left) && isBST(root->right);
// }

// Node *deleteNodeRecursive(Node *root, int value)
// {
//     if (root == NULL)
//         return NULL;

//     if (value < root->data)
//     {
//         root->left = deleteNode(root->left, value);
//     }
//     else if (value > root->data)
//     {
//         root->right = deleteNode(root->right, value);
//     }
//     else
//     {
//         // ✅ Case 1 & 2: Node has 0 or 1 child
//         if (root->left == NULL)
//         {
//             Node *temp = root->right;
//             delete root;
//             return temp;
//         }
//         else if (root->right == NULL)
//         {
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }

//         // ✅ Case 3: Node has 2 children
//         Node *minNode = minValueBST(root->right); // Inorder successor
//         root->data = minNode->data;
//         root->right = deleteNode(root->right, minNode->data); // Delete successor
//     }

//     return root;
// }
// int main()
// {
//     Node *root = NULL;

//     // Insert values into the BST
//     root = insert(root, 2);
//     insert(root, 1);
//     insert(root, 27);
//     insert(root, 4);
//     insert(root, 23);
//     insert(root, 3);
//     insert(root, 45);
//     insert(root, 3);
//     insert(root, 9);

//     // Display inorder traversal (should be sorted)
//     cout << "Inorder traversal of BST: ";
//     inorder(root);
//     int key = 3;
//     if (search(root, key))
//     {
//         cout << "\n\nValue " << key << " found in BST." << endl;
//     }
//     else
//     {
//         cout << "\n\nValue " << key << " not found in BST." << endl;
//     }

//     cout << "\n\nMaximum value in BST: " << maxValueBST(root) << endl;
//     cout << "Minimum value in BST: " << minValueBST(root)->data << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <stdexcept>
// using namespace std;

// class MaxHeap
// {
// private:
//     vector<int> heap;

//     int parent(int i) { return (i - 1) / 2; }
//     int left(int i) { return 2 * i + 1; }
//     int right(int i) { return 2 * i + 2; }

//     void heapifyDown(int i)
//     {
//         int size = heap.size();
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;

//         if (left < size && heap[left] > heap[largest])
//             largest = left;
//         if (right < size && heap[right] > heap[largest])
//             largest = right;
//         if (largest != i)
//         {
//             swap(heap[i], heap[largest]);
//             heapifyDown(largest);
//         }
//     }

//     void heapifyUp(int i)
//     {
//         if (i && heap[(i - 1) / 2] < heap[i])
//         {
//             swap(heap[i], heap[(i - 1) / 2]);
//             heapifyUp((i - 1) / 2);
//         }
//     }

// public:
//     void insert(int key)
//     {
//         heap.push_back(key);
//         heapifyUp(heap.size() - 1);
//     }

// int extractMax()
// {
//     if (heap.empty())
//         throw runtime_error("Heap is empty!");
//     int max = heap[0];
//     heap[0] = heap.back();
//     heap.pop_back();
//     if (!heap.empty())
//         heapifyDown(0);
//     return max;
// }

//     int getMax() const
//     {
//         if (heap.empty())
//             throw runtime_error("Heap is empty!");
//         return heap[0];
//     }

//     bool empty() const { return heap.empty(); }

//     void print()const
//     {
//         for (int num : heap)
//             cout << num << " ";
//         cout << endl;
//     }
// };

// int main()
// {
//     MaxHeap heap;

//     // Insert elements into the heap
//     heap.insert(30);
//     heap.insert(20);
//     heap.insert(15);
//     heap.insert(5);
//     heap.insert(10);
//     heap.insert(25);

//     cout << "Heap elements after inserts: ";
//     heap.print();

//     // Output the maximum element without removing it
//     cout << "Current maximum: " << heap.getMax() << endl;

//     // Remove and print the maximum element
//     cout << "Extracted max: " << heap.extractMax() << endl;
//     cout << "Heap elements after extraction: ";
//     heap.print();

//     // Demonstrate extraction until heap is empty
//     cout << "Extracting all elements: ";
//     while (!heap.empty())
//         cout << heap.extractMax() << " ";
//     cout << endl;

//     return 0;
// }

// // Max Heap
// #include <iostream>
// #include <vector>

// using namespace std;

// class MaxHeap
// {

// public:
//     vector<int> heap;

//     int getParent(int index)
//     {
//         return (index - 1) / 2;
//     }

//     int leftChild(int index)
//     {
//         return 2 * index + 1;
//     }
//     int rightChild(int index)
//     {
//         return 2 * index + 2;
//     }
//     void heapUp(int index)
//     {
//         while (index > 0 && heap[index] > heap[getParent(index)])
//         {
//             swap(heap[index], heap[getParent(index)]);
//             index = getParent(index);
//         }
//     }

//     void heapDown(int index)
//     {
//         int size = heap.size();
//         int left = leftChild(index);
//         int right = rightChild(index);
//         int largest = index;

//         if (left < size && heap[left] > heap[largest])
//         {
//             largest = left;
//         }
//         if (right < size && heap[right] > heap[largest])
//         {
//             largest = right;
//         }
//         if (largest != index)
//         {
//             swap(heap[index], heap[largest]);
//             heapDown(largest);
//         }
//     }
//     bool isEmpty(){
//         return heap.empty();
//      }
//     int removeMax()
//     {
//         if (heap.empty())
//         {
//             throw runtime_error("Heap is empty!");
//         }
//         int max_element = heap[0];
//         heap[0] = heap.back();
//         heap.pop_back();
//         if (!heap.empty())
//         {
//             heapDown(0);
//         }
//         return max_element;
//     }
//     void insert(int value)
//     {
//         heap.push_back(value);
//         heapUp(heap.size() - 1);
//     }
//     int getMax()
//     {
//         if (heap.empty())
//         {
//             return -1;
//         }
//         return heap[0];

//     }
//     void print()
//     {
//         for (int val : heap)
//             cout << val << " ";
//         cout << endl;
//     }
//     // void heapSort(){
//     //     int start = 0 ;
//     //     int end = heap.size() - 1 ;
//     //     while (start <= end)
//     //     {
//     //         swap(heap[start], heap[end]);
//     //         start++;
//     //         end--;
//     //     }
//     // }
// };

// // Helper: heapDown within a portion of the array
// void heapDown(vector<int>& arr, int index, int size) {
//     int left = 2 * index + 1;
//     int right = 2 * index + 2;
//     int largest = index;

//     // If left child is larger than root and within size
//     if (left < size && arr[left] > arr[largest])
//         largest = left;
//     // If right child is even larger
//     if (right < size && arr[right] > arr[largest])
//         largest = right;
//     // If largest is not root, swap and recurse
//     if (largest != index) {
//         swap(arr[index], arr[largest]);
//         heapDown(arr, largest, size);
//     }
// }

// // Main heap sort function
// void heapSort(vector<int>& arr) {
//     int n = arr.size();

//     // Step 1: Build the max heap (rearrange the array)
//     // Start from the last non-leaf node up to root
//     for (int i = n / 2 - 1; i >= 0; --i) {
//         heapDown(arr, i, n);
//     }

//     // Step 2: Extract elements from the heap one by one
//     for (int i = n - 1; i > 0; --i) {
//         // Move current root (maximum) to end
//         swap(arr[0], arr[i]);
//         // Heapify the reduced heap (i.e., arr[0..i-1])
//         heapDown(arr, 0, i);
//     }
// }
// int main()
// {

//     MaxHeap heap;

//     // Insert elements into the heap
//     heap.insert(30);
//     heap.insert(20);
//     heap.insert(15);
//     heap.insert(5);
//     heap.insert(10);
//     heap.insert(25);

//     cout << "Heap elements after inserts: ";
//     heap.print();

//     // Output the maximum element without removing it
//     cout << "Current maximum: " << heap.getMax() << endl;

//     // Remove and print the maximum element
//     cout << "Extracted max: " << heap.removeMax() << endl;
//     cout << "Heap elements after extraction: ";
//     heap.print();
//     cout<<"Heap after Sort :- "<<endl ;
//     // heap.heapSort();
//     heap.print();

//     // Demonstrate extraction until heap is empty
//     cout << "Extracting all elements: ";
//     while (!heap.isEmpty())
//         cout << heap.removeMax() << " ";
//     cout << endl;

//     return 0;
// }

// // // Min Heap
// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // class MinHeap
// // {

// // public:
// //     vector<int> heap;

// //     int getParent(int index)
// //     {
// //         return (index - 1) / 2;
// //     }

// //     int leftChild(int index)
// //     {
// //         return 2 * index + 1;
// //     }
// //     int rightChild(int index)
// //     {
// //         return 2 * index + 2;
// //     }
// //     void heapUp(int index)
// //     {
// //         while (index > 0 && heap[index] < heap[getParent(index)])
// //         {
// //             swap(heap[index], heap[getParent(index)]);
// //             index = getParent(index);
// //         }
// //     }

// //     void heapDown(int index)
// //     {
// //         int size = heap.size();
// //         int left = leftChild(index);
// //         int right = rightChild(index);
// //         int smallest = index;

// //         if (left < size && heap[left] < heap[smallest])
// //         {
// //             smallest = left;
// //         }
// //         if (right < size && heap[right] < heap[smallest])
// //         {
// //             smallest = right;
// //         }
// //         if (smallest != index)
// //         {
// //             swap(heap[index], heap[smallest]);
// //             heapDown(smallest);
// //         }
// //     }
// //     bool isEmpty(){
// //         return heap.empty();
// //      }
// //     int removeMin()
// //     {
// //         if (heap.empty())
// //         {
// //             throw runtime_error("Heap is empty!");
// //         }
// //         int min_element = heap[0];
// //         heap[0] = heap.back();
// //         heap.pop_back();
// //         if (!heap.empty())
// //         {
// //             heapDown(0);
// //         }
// //         return min_element;
// //     }
// //     void insert(int value)
// //     {
// //         heap.push_back(value);
// //         heapUp(heap.size() - 1);
// //     }
// //     int getMin()
// //     {
// //         if (heap.empty())
// //         {
// //             // return -1;
// //             throw runtime_error("Heap is empty!");
// //         }
// //         return heap[0];

// //     }
// //     void print()
// //     {
// //         for (int val : heap)
// //             cout << val << " ";
// //         cout << endl;
// //     }

// // };

// // int main()
// // {

// //     MinHeap heap;

// //     // Insert some values
// //     heap.insert(7);
// //     heap.insert(2);
// //     heap.insert(5);
// //     heap.insert(12);
// //     heap.insert(1);
// //     heap.insert(10);

// //     cout << "Heap after inserts: ";
// //     heap.print();

// //     cout << "Current minimum: " << heap.getMin() << endl;

// //     cout << "Extract min: " << heap.removeMin() << endl;
// //     cout << "Heap after extraction: ";
// //     heap.print();

// //     cout << "Extract min again: " << heap.removeMin() << endl;
// //     cout << "Heap now: ";
// //     heap.print();

// //     // Extract remaining elements
// //     cout << "Extracting all remaining elements: ";
// //     while (!heap.isEmpty())
// //         cout << heap.removeMin() << ' ';
// //     cout << endl;

// //     // Attempt to getMin() when heap is empty (will throw)
// //     try {
// //         cout << "Attempting to get min from empty heap: ";
// //         cout << heap.getMin() << endl;
// //     } catch (const exception &e) {
// //         cout << "Error: " << e.what() << endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <unordered_map>
// #include <map>

// using namespace std;

// void countFrequency(int arr[], int n)
// {
//     unordered_map<int, int> freq;

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//         // cout << arr[i] << " -> " << freq[arr[i]] << " times" << endl;
//     }

//     for (auto pair : freq)
//     {
//         cout << pair.first << " -> " << pair.second << endl;
//     }
// }

// int countFrequency2(int arr[], int n)
// {
//     unordered_map<int, int> freq;

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//         // cout << arr[i] << " -> " << freq[arr[i]] << " times" << endl;
//     }

//      for (int i = 0; i < n; i++) {
//         if (freq[arr[i]] == 1) {
//             return arr[i];
//         }
//     }

//     return -1; // If no non-repeating element found
// }

// int main()
// {
//     int arr[] = {1, 1, 2, 2, 4, 3, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     countFrequency(arr, n);
//     int first_non_repeating = countFrequency2(arr, n);
//     cout << first_non_repeating;

//     return 0;
// }

// // Trie
// #include <iostream>
// using namespace std;

// class TrieNode
// {

// public:
//     TrieNode *children[26];
//     bool isEnd;

//     TrieNode()
//     {
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isEnd = false;
//     }
// };

// class Trie
// {

// private:
//     TrieNode *root;

//     // Helper for deletion
//     // bool deleteHelper(TrieNode *node, string word, int depth)
//     // {
//     //     if (!node)
//     //         return false;

//     //     if (depth == word.size())
//     //     {
//     //         // Last character of the word
//     //         if (!node->isEnd)
//     //             return false; // word not found

//     //         node->isEnd = false; // unmark the end

//     //         // If this node has no children, it can be deleted
//     //         for (int i = 0; i < 26; i++)
//     //         {
//     //             if (node->children[i])
//     //                 return false; // can't delete this node
//     //         }

//     //         return true; // can delete this node
//     //     }

//     //     int index = word[depth] - 'a';
//     //     if (deleteHelper(node->children[index], word, depth + 1))
//     //     {
//     //         // Delete the child node
//     //         delete node->children[index];
//     //         node->children[index] = NULL;

//     //         // Check if current node can be deleted
//     //         if (!node->isEnd)
//     //         {
//     //             for (int i = 0; i < 26; i++)
//     //             {
//     //                 if (node->children[i])
//     //                     return false;
//     //             }
//     //             return true;
//     //         }
//     //     }

//     //     return false;
//     // }

//     bool deleteHelper(TrieNode *root, string word, int depth)
//     {
//         if (!root)
//         {
//             return false;
//         }
//         if (depth = word.size())
//         {
//             if (!root->isEnd)
//             {
//                 return false;
//             }
//             root->isEnd = false;

//             for (int i = 0; i < 26; i++)
//             {
//                 if (root->children[i])
//                 {
//                     return false;
//                 }
//             }
//             return true; // can delete this node
//         }
//     //     root
//     //      |
//     //      c
//     //      |
//     //      a
//     //    /   \
//     //   t     r -  i - l
//     //         |
//     //         e

//         int index = word[depth] - 'a';
//         if (deleteHelper(root->children[index], word, depth + 1))
//         {
//             delete root->children[index];
//             root->children[index] = NULL;

//             // Check if current node can be deleted
//             if (!root->isEnd)
//             {
//                 for (int i = 0; i < 26; i++)
//                 {
//                     if (root->children[i])
//                         return false;
//                 }
//                 return true;
//             }
//         }

//         return false;
//     }

// public:
//     Trie()
//     {
//         root = new TrieNode();
//     }

//     void insert(string word)
//     {
//         TrieNode *curr = root;

//         for (char ch : word)
//         {
//             int index = ch - 'a'; // 'a' → 0, 'b' → 1, ..., 'z' → 25

//             if (curr->children[index] == NULL)
//             {
//                 curr->children[index] = new TrieNode();
//             }
//             curr = curr->children[index];
//         }

//         curr->isEnd = true; // Mark end of word
//     }

//     // Search for a complete word
//     bool search(string word)
//     {
//         TrieNode *curr = root;

//         for (char ch : word)
//         {
//             int index = ch - 'a';

//             if (curr->children[index] == NULL)
//                 return false;

//             curr = curr->children[index];
//         }
//         return curr->isEnd;
//     }

//     bool startsWith(string prefix)
//     {
//         TrieNode *curr = root;
//         for (char ch : prefix)
//         {
//             int index = ch - 'a';
//             if (curr->children[index] == NULL)
//             {
//                 return false;
//             }
//             curr = curr->children[index];
//         }
//         return true;
//     }

//     void deleteWord(string word)
//     {
//         deleteHelper(root, word, 0);
//     }
// };

// int main()
// {
//     Trie trie;

//     trie.insert("apple");
//     trie.insert("app");

//     cout << trie.search("apple") << endl; // 1 (true)
//     cout << trie.search("app") << endl;   // 1 (true)
//     cout << trie.search("ap") << endl
//          << endl; // 0 (false - not full word)

//     cout << trie.startsWith("app") << endl;    // 1 (true)
//     cout << trie.startsWith("appl") << endl;   // 1 (true)
//     cout << trie.startsWith("banana") << endl; // 0 (false)

//     return 0;
// }

// // Graph

// #include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <list>

// using namespace std;

// class Graph
// {
// private:
//     unordered_map<int, list<int>> adList;

// public:
//     void addEdge(int u, int v, bool bidirectional = true)
//     {
//         adList[u].push_back(v);
//         if (bidirectional)
//         {
//             adList[v].push_back(u);
//         }
//     }

//     void printGraph()
//     {
//         for (auto i : adList)
//         {
//             cout << i.first << " -> ";
//             for (auto j : i.second)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     // cout << "Graph Implementation" << endl;
//     // // Graph can be implemented using adjacency list or adjacency matrix
//     // // Here we will use adjacency list for simplicity

//     // // Example: Graph with 5 vertices (0 to 4)
//     // int V = 5;                  // Number of vertices
//     // vector<vector<int>> adj(V); // Adjacency list

//     // // Adding edges
//     // adj[0].push_back(1);
//     // adj[0].push_back(4);
//     // adj[1].push_back(0);
//     // adj[1].push_back(2);
//     // adj[1].push_back(3);
//     // adj[2].push_back(1);
//     // adj[3].push_back(1);
//     // adj[3].push_back(4);
//     // adj[4].push_back(0);
//     // adj[4].push_back(3);

//     // // Displaying the graph
//     // for (int i = 0; i < V; i++)
//     // {
//     //     cout << "Vertex " << i << ": ";
//     //     for (int j : adj[i])
//     //     {
//     //         cout << j << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // int a, b;

//     // cin >> a >> b;
//     // cout<<a<<" "<<b<<endl;

//     // int n, m;
//     // cin >> n >> m;

//     // vector<vector<int>> adj(n);

//     // for (int i = 0; i < m; i++)
//     // {
//     //     int u, v;
//     //     cin >> u >> v;

//     //     // Undirected graph
//     //     adj[u].push_back(v);
//     //     adj[v].push_back(u);
//     // }
//     Graph graph;
//     cout << "Graph Implementation using Adjacency List" << endl;
//     int n, m;
//     cout << "Enter number of nodes / vertices : ";
//     cin >> n;
//     cout << "Enter number of edges : ";
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;

//         cout << "Enter edge " << i + 1 << " : ";
//         cin >> u >> v;
//         graph.addEdge(u,v);
//     }

//     cout << "Graph Adjacency List:" << endl;
//     graph.printGraph();

//     return 0;
// }

// // Graph - template for knowing data type by only once

// #include <iostream>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <list>
// using namespace std;

// template <typename T>

// class Graph
// {
// private:
//     unordered_map<T, list<T>> adList;

// public:
//     void addEdge(T u, T v, bool bidirectional = true)
//     {
//         adList[u].push_back(v);
//         if (bidirectional)
//         {
//             adList[v].push_back(u);
//         }
//     }

//     void printGraph()
//     {
//         for (auto i : adList)
//         {
//             cout << i.first << " -> ";
//             for (auto j : i.second)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     // cout << "Graph Implementation" << endl;
//     // // Graph can be implemented using adjacency list or adjacency matrix
//     // // Here we will use adjacency list for simplicity

//     // // Example: Graph with 5 vertices (0 to 4)
//     // int V = 5;                  // Number of vertices
//     // vector<vector<int>> adj(V); // Adjacency list

//     // // Adding edges
//     // adj[0].push_back(1);
//     // adj[0].push_back(4);
//     // adj[1].push_back(0);
//     // adj[1].push_back(2);
//     // adj[1].push_back(3);
//     // adj[2].push_back(1);
//     // adj[3].push_back(1);
//     // adj[3].push_back(4);
//     // adj[4].push_back(0);
//     // adj[4].push_back(3);

//     // // Displaying the graph
//     // for (int i = 0; i < V; i++)
//     // {
//     //     cout << "Vertex " << i << ": ";
//     //     for (int j : adj[i])
//     //     {
//     //         cout << j << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // int a, b;

//     // cin >> a >> b;
//     // cout<<a<<" "<<b<<endl;

//     // int n, m;
//     // cin >> n >> m;

//     // vector<vector<int>> adj(n);

//     // for (int i = 0; i < m; i++)
//     // {
//     //     int u, v;
//     //     cin >> u >> v;

//     //     // Undirected graph
//     //     adj[u].push_back(v);
//     //     adj[v].push_back(u);
//     // }
//     Graph<int> graph;
//     cout << "Graph Implementation using Adjacency List" << endl;
//     int n, m;
//     cout << "Enter number of nodes / vertices : ";
//     cin >> n;
//     cout << "Enter number of edges : ";
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;

//         cout << "Enter edge " << i + 1 << " : ";
//         cin >> u >> v;
//         graph.addEdge(u,v);
//     }

//     cout << "Graph Adjacency List:" << endl;
//     graph.printGraph();

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// #include<pair>

// using namespace std;

// class Solution
// {
// public:
//     bool isCycle(int V, vector<vector<int>> &edges)
//     {
//         // Step 1: Build adjacency list from the edge list
//         vector<vector<int>> adjList(V);
//         for (auto &edge : edges)
//         {
//             int u = edge[0];
//             int v = edge[1];
//             adjList[u].push_back(v);
//             adjList[v].push_back(u);
//         }

//         vector<bool> visited(V, false);

//         // Step 2: Check all components using BFS
//         for (int start = 0; start < V; ++start)
//         {
//             if (!visited[start])
//             {
//                 if (bfsCycleDetect(adjList, visited, start))
//                 {
//                     return true; // Cycle detected
//                 }
//             }
//         }

//         return false; // No cycle detected in any component
//     }

// private:
//     bool bfsCycleDetect(const vector<vector<int>> &adj, vector<bool> &visited, int start)
//     {
//         // Queue stores pairs of (current_vertex, parent_vertex)
//         queue<pair<int, int>> q;
//         visited[start] = true;
//         q.push({start, -1}); // Start node has no parent

//       while(!q.empty()){
//         int vertex = q.front().first;
//         int parent = q.front().first ;
//         q.pop();


//         if(!visited[vertex]){
//             visited[vertex] = true;
//             q.push({vertex, parent});
//         }
//         else if(vertex != parent){
//             return true;
//         }
        
//       }
//       return false ;
//     }

//     return false; // No cycle found in this component
// }
// }
// ;

// int main()
// {
// }
// #include<iostream>
// #include<vector>

// class Solution {
// public:
//     bool isCyclic(int V, vector<vector<int>>& edges) {
//         vector<vector<int>> adj(V);

//         // Directed Graph → only one direction
//         for (auto edge : edges) {
//             int u = edge[0];
//             int v = edge[1];
//             adj[u].push_back(v);
//         }

//         vector<bool> visited(V, false);
//         vector<bool> recStack(V, false);

//         // For disconnected components
//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 if (dfsCycleDirected(adj, visited, recStack, i))
//                     return true;
//             }
//         }

//         return false;
//     }

//     bool dfsCycleDirected(vector<vector<int>>& adj, vector<bool>& visited,
//                           vector<bool>& recStack, int node) {
//         visited[node] = true;
//         recStack[node] = true;

//         for (int neighbour : adj[node]) {
//             if (!visited[neighbour]) {
//                 if (dfsCycleDirected(adj, visited, recStack, neighbour))
//                     return true;
//             }
//             else if (recStack[neighbour]) {
//                 // If node is in recursion stack → cycle
//                 return true;
//             }
//         }

//         recStack[node] = false; // remove from recursion stack
//         return false;
//     }
// };

// int main(){

//     return 0 ;
// }


// // set in C++ 

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> numbers = {4, 2, 5, 1, 2, 3, 4};
//     numbers.insert(6);       // adds 6
//     numbers.insert(2);       // ignored (already present)

//     cout << "Set contains: ";
//     for (int num : numbers)
//         cout << num << " ";
//     cout << endl;

//     // Search
//     int target = 3;
//     if (numbers.find(target) != numbers.end())
//         cout << target << " is present\n";
//     else
//         cout << target << " not found\n";

//     // Remove
//     numbers.erase(4);

//     cout << "After erasing 4: ";
//     for (int num : numbers)
//         cout << num << " ";
//     cout << endl;

//     set<pair<int,int>> s;
//     s.insert({5,7});
//     s.insert({2,8});
//     s.insert({5,7}); // duplicate ignored

//     for (auto &p : s) {
//         cout << "(" << p.first << ", " << p.second << ")\n";
//     }
//     // Output is sorted by .first, then .second


//     return 0;
// }
// // Output:
// // }
// // Set contains: 1 2 3 4 5 6 
// // 3 is present
// // After erasing 4: 1 2 3 5 6 
// // (2, 8)
// // (5, 7)


// #include<iostream> 

// using namespace std ;

// int main(){
// int n ;
//     cin>>n ;
//      int arr[n];
//      arr[0] = 8 ;
//      cout<<*(arr)<<endl ;
  
//     return 0 ;
// }

// // To find the total number of strongly connected components in the directed graph 

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     void TopologicalSort(int node, vector<int> adj[], vector<bool> &visited, stack<int> &st) {
//         visited[node] = true;
//         for (auto neigh : adj[node]) {
//             if (!visited[neigh]) {
//                 TopologicalSort(neigh, adj, visited, st);
//             }
//         }
//         st.push(node); // push after all descendants processed
//     }

//     void dfs(int node, vector<int> transpose[], vector<bool> &visited) {
//         visited[node] = true;
//         for (auto neigh : transpose[node]) {
//             if (!visited[neigh]) {
//                 dfs(neigh, transpose, visited);
//             }
//         }
//     }

//     int kosaraju(int V, vector<int> adj[]) {
//         vector<bool> visited(V, false);
//         stack<int> st;

//         // Step 1: DFS on original graph to fill stack by finish time
//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 TopologicalSort(i, adj, visited, st);
//             }
//         }

//         // Step 2: Create transpose graph
//         vector<int> transpose[V];
//         for (int i = 0; i < V; i++) {
//             for (auto neigh : adj[i]) {
//                 transpose[neigh].push_back(i);
//             }
//         }

//         // Step 3: DFS on transpose graph in order of stack
//         fill(visited.begin(), visited.end(), false);
//         int sccCount = 0;
//         while (!st.empty()) {
//             int node = st.top();
//             st.pop();
//             if (!visited[node]) {
//                 dfs(node, transpose, visited);
//                 sccCount++;
//             }
//         }

//         return sccCount;
//     }
// };

// int main() {
//     int V = 5;
//     vector<int> adj[V];

//     // Example graph edges
//     adj[0].push_back(2);
//     adj[2].push_back(1);
//     adj[1].push_back(0);
//     adj[0].push_back(3);
//     adj[3].push_back(4);

//     Solution sol;
//     cout << "Number of strongly connected components: " << sol.kosaraju(V, adj) << "\n";
//     return 0;
// }


// // Dynamic Programming - DP here used recursion with memoization  from top to bottom

// #include<iostream>
// #include<vector>

// using namespace std ;

// class Solution {
//     vector<int> DP;
// public:
//     Solution(int n) {
//         DP.resize(n + 1, -1);
//     }

//     int nthFibonacci(int n) {
//         if (n == 0 || n == 1)
//             return n;
//         if (DP[n] != -1)
//             return DP[n];
//         DP[n] = nthFibonacci(n - 1) + nthFibonacci(n - 2);
//         return DP[n];
//     }
// };

// // usage
// int main() {
//     int n = 10;
//     Solution sol(n);
//     cout << sol.nthFibonacci(n) << endl;
// }


// // Dynamic Programming - DP here used recursion with memoization from bottom to up (Tabulation)

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
//     vector<int> DP;

// public:
//     Solution(int n) {
//         DP.resize(n + 1, 0);
//     }

//     int nthFibonacci(int n) {
//         if (n == 0 || n == 1)
//             return n;

//         DP[0] = 0;
//         DP[1] = 1;

//         for (int i = 2; i <= n; i++) {
//             DP[i] = DP[i - 1] + DP[i - 2];
//         }

//         return DP[n];
//     }
// };

// int main() {
//     int n = 10;
//     Solution sol(n);
//     cout << sol.nthFibonacci(n) << endl;  // Output: 55
//     return 0;
// }

// #include<iostream>

// using namespace std ;

// int main(){

//     int a = 4 , b = 3 ;
//     cout<<"Before the swapping a - "<<a<<" and b - "<<b<<endl ;
   
//     // Not works well 
//     //  b = a + b - b;
//     //  a = b + a ;

//     // a = a + b ;
//     // b = a - b ;
//     // a = a - b ;

//     b = a + b;
//     a = b - a ;
//     b = b - a ;
//     cout<<"After the swapping a - "<<a<<" and b - "<<b<<endl ;
//     return 0 ;
// }

// int solve(vector<int>& coins, int amount) {
//     if (amount == 0) return 0; // base case
//     if (amount < 0) return INT_MAX; // not possible

//     int mini = INT_MAX;

//     for (int coin : coins) {
//         int ans = solve(coins, amount - coin);
//         if (ans != INT_MAX) {
//             mini = min(mini, 1 + ans); // 1 coin used + remaining answer
//         }
//     }

//     return mini;
// }


// #include <iostream>
// #include <vector>
// #include <climits> // For INT_MAX
// using namespace std;

// // Recursive function with memoization to find minimum coins
// int solve(const vector<int>& coins, int amount, vector<int>& dp) {
//     if (amount == 0) return 0; // base case
//     if (amount < 0) return INT_MAX; // not possible
  
//     if(dp[amount] != -1) return dp[amount] ;

//     int mini = INT_MAX ;

//     for(int coin : coins){
//         int ans = solve(coins,amount-coin , dp);
//         if(ans != INT_MAX){
//             mini = min(mini,1+ans) ;
//         }
//     }

//     dp[amount] = mini ;
//     return mini ;

// }

// int rob(vector<int>& nums) {
//     int prev1 = 0, prev2 = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         int pick = nums[i] + prev2;
//         int notPick = prev1;
//         int curr = max(pick, notPick);
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }


// int fib(int n) {
//     if (n <= 1) return n;
//     return fib(n-1) + fib(n-2);
// }

// int fibTab(int n) {
//     vector<int> dp(n+1, 0);
//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++) {
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n];
// }


// int fibOptimized(int n) {
//     int prev2 = 0, prev1 = 1;
//     for (int i = 2; i <= n; i++) {
//         int curr = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }


// int fibMemo(int n, vector<int> &dp) {
//     if (n <= 1) return n;

//     if (dp[n] != -1) return dp[n]; // already solved

//     dp[n] = fibMemo(n-1, dp) + fibMemo(n-2, dp);
//     return dp[n];
// }

// class Solution {
// public:
//     int numWays(int n, int k) { // n = 3 k = 2 
//         if (n == 0) return 0;
//         if (n == 1) return k;

//         int same = 0;           // ways to paint post 1 same as previous (none)
//         int diff = k;           // ways to paint post 1 differently (any of k colors)

//         for (int i = 2; i <= n; i++) {
                        
//             int tempDiff = (k - 1) * (same + diff);// 1 = 4 , 2 = 12
//             same = diff;// 1 = 2 , 2 = 4
//             diff = tempDiff;// 2 = 4 , 2 = 12

//         }

//         return same + diff;
//     }
// };



// int main() {
//     // vector<int> coins = {1, 3, 4};
//     // int amount = 6;
//     vector<int> coins = {1, 2};
//     int amount = 2  ;

//     // Initialize DP array with -1 (uncomputed)
//     vector<int> dp(amount + 1, -1);
    
//     int minCoins = solve(coins, amount, dp);
//     if (minCoins == INT_MAX) {
//         cout << "No solution possible to make amount " << amount << endl;
//     } else {
//         cout << "Minimum coins required to make amount " << amount << " is: " << minCoins << endl;
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// 1. Pure Recursion (Exponential time)
// Only use for very small `n` due to exponential complexity
int paintFenceRec(int n, int k) {
    if (n == 0) return 0;
    if (n == 1) return k;
    if (n == 2) return k * k;

    int same = paintFenceRec(n - 2, k) * (k - 1);
    int diff = paintFenceRec(n - 1, k) * (k - 1);

    return same + diff;
}

// 2. Memoization (Top-Down DP)
int paintFenceMemoHelper(int n, int k, vector<int>& dp) {
    if (n == 0) return 0;
    if (n == 1) return k;
    if (n == 2) return k * k;

    if (dp[n] != -1) return dp[n];

    int same = paintFenceMemoHelper(n - 2, k, dp) * (k - 1);
    int diff = paintFenceMemoHelper(n - 1, k, dp) * (k - 1);

    dp[n] = same + diff;
    return dp[n];
}

int paintFenceMemo(int n, int k) {
    vector<int> dp(n + 1, -1);
    return paintFenceMemoHelper(n, k, dp);
}

// 3. Tabulation (Bottom-Up DP)
int paintFenceTab(int n, int k) {
    if (n == 0) return 0;
    if (n == 1) return k;

    vector<int> dp(n + 1);
    dp[1] = k;
    dp[2] = k * k;

    for (int i = 3; i <= n; i++) {
        int same = dp[i - 2] * (k - 1);
        int diff = dp[i - 1] * (k - 1);
        dp[i] = same + diff;
    }
    return dp[n];
}

// 4. Space Optimized DP (Optional)
// Just for completeness, not requested to combine but shown below.
int paintFenceSpaceOptimized(int n, int k) {
    if (n == 0) return 0;
    if (n == 1) return k;

    int twoBack = k;
    int oneBack = k * k;

    for (int i = 3; i <= n; i++) {
        int same = twoBack * (k - 1);
        int diff = oneBack * (k - 1);
        int curr = same + diff;

        twoBack = oneBack;
        oneBack = curr;
    }
    return oneBack;
}


int solveTabSpaceOptimized(int capacity, vector<int> &val, vector<int> &weight, int n) {
    vector<int> dp(capacity + 1, 0);

    // Base case: initialize dp for the first item
    for (int w = weight[0]; w <= capacity; w++) {
        dp[w] = val[0];
    }

    // Process rest of the items
    for (int index = 1; index < n; index++) {
        // Iterate capacity backwards to not override values of this iteration
        for (int w = capacity; w >= 0; w--) {
            int incl = 0;
            if (weight[index] <= w) {
                incl = val[index] + dp[w - weight[index]];
            }
            int excl = dp[w];

            dp[w] = max(incl, excl);
        }
    }

    return dp[capacity];
}

int main() {
    int n = 3, k = 2;

    cout << "Recursion result: " << paintFenceRec(n, k) << endl;
    cout << "Memoization result: " << paintFenceMemo(n, k) << endl;
    cout << "Tabulation result: " << paintFenceTab(n, k) << endl;
    cout << "Space Optimized DP result: " << paintFenceSpaceOptimized(n, k) << endl;

    return 0;
}


