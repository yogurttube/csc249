#include <iostream>
#include <vector>
using namespace std;

/*
Some "warmup" example code for Module 4 - Lists
We've used arrays as a basic linear ADT, but they
lack some basic functionality such as add and remove.

The vector class in C++ handles some of this for us.
It can be thought of as an "array-list" structure.

We'll then look at singly linked lists using a basic
node and pointer structure.

*/
// forward declarations (method signatures)
void do_array_example();
void do_vector_example();
void do_singly_linked_list_example();

int main() {
  cout << "Various linear ADTs demonstrated" << endl;

  //do_array_example();
  //do_vector_example();
  do_singly_linked_list_example();
  
}

// define the methods we declared earlier
void do_array_example() {
  cout << endl << "Example 1: Array" << endl;
  int key = 4; // item searched for
  int numbers[] = {0, 1, 2, 3, 4};
  int numbers_size = sizeof(numbers) / sizeof(numbers[0]) ; // explain
  // array is size (sizeof(int) * number of items), so divide out sizeof(int)
  // each item is 64 bits (4 bytes)
  cout << "NUMBERS: [";
  for (int i=0; i< numbers_size; i++) {
    cout << numbers[i] << ",";
  }
  cout << "]" << endl;
  cout << "Finding value :" << key << endl;
  for (int i=0; i< numbers_size; i++) {
    if (numbers[i] == key) {
      cout << "Found " << key << " @ numbers[" << i << "]" << endl;
    }
  }
  cout << endl;
}


void do_vector_example() {
  // benefits over "raw" array:
  // can dynamically resize with push_back
  // size() just works, don't have to calculate based on word size
  cout << "Example 2: Vector (from #include <vector>)" << endl;
  vector<int> numbers;
  int temp;
  int sum=0; // for average
  cout << "Enter integers, enter 'done' to finish." << endl;
  while (cin>> temp) {
    numbers.push_back(temp);
  }
  cout << "Vector: [" ;
  for (int i=0; i<numbers.size(); i++) {
    cout << numbers[i] << ",";
    sum += numbers[i];
  }
  cout << "]" << endl;
  cout << "size: " << numbers.size();
  cout << " average: " << sum/numbers.size() << endl;
  
}

//////////////////////////////////////////////////////////////////
// Class declarations for singly linked lists
// TODO: Move to separate header file (.h)
// Node class is the atomic data type for a linked list.
class Node {
public:
   int data;
   Node* next;

   Node(int initialData) {
      data = initialData;
      next = nullptr;
   }
};

// LinkedList consists of:
// node and pointer collection of Node objects
// pointer to head and tail
// methods to access and mutate the list
class LinkedList {
private:
   Node* head;
   Node* tail;
   
public:
   LinkedList() {
      head = nullptr;
      tail = nullptr;
   }
  // print - debug print (replace this later)
  void print() {
    cout << "printing list:" << endl;
    Node* probe = head;
    while (probe != nullptr) {
      // if there are valid nodes left, print this one, and go to next
      cout << "[" << probe->data << ", " << probe->next << "]" << endl;
      probe = probe->next;
    }
    /*
    if (head == nullptr) {
      cout << "empty list" << endl;
    }
    else {
      cout << "head->data=" << head->data << " next=" << head->next << endl;
    }
    */
  }
  // append - add node to the tail of the list
  void Append(Node* newNode) {
     if (head == nullptr) {
        head = newNode;
        tail = newNode;
     }
     else {
        tail->next = newNode;
        tail = newNode;
     }
  }
};

void do_singly_linked_list_example() {
  cout << "Linked List (Singly) Example 1" << endl;
  cout << endl;
  // to reference a value inside an object, use . (dot) notation
  // to reference a value inside a pointer, use -> (arrow) notation
  Node* first = new Node(0); // create new node, contains data = 0  
  Node* second = new Node(1);
  first->next = second;

  // print nodes
  cout << "[" << first->data << "," << first->next << "]" << endl;
  cout << "[" << second->data << "," << second->next << "]" << endl;

  cout << "Example 2: Append" << endl;
  LinkedList numList = LinkedList();
  
  Node* nodeA = new Node(95);
  Node* nodeB = new Node(42);
  numList.print(); // print that it's empty
  numList.Append(nodeA);
  numList.print(); // contains only one node
  numList.Append(nodeB);
  numList.print(); // for now, just print the head
  Node* nodeC = new Node(11);
  numList.Append(nodeC);
  numList.print();
  //cout << "[" << nodeA->data << "," << nodeA->next << "]" << endl;
  //cout << "[" << nodeB->data << "," << nodeB->next << "]" << endl;
  
  // TODO: prepend
}