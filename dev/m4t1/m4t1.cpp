#include <iostream>
#include "StringNode.h"
#include "SinglyLinkedList.h"
using namespace std;

/*
CSC 249
M4T1 - Singly Linked Lists (cpp)
template from zybooks 4.6
your name
today's date
*/

int main() {
   LinkedList numList;
   /*Node* nodeA = new Node(66);
   Node* nodeB = new Node(99);
   Node* nodeC = new Node(44);
   Node* nodeD = new Node(95);
   Node* nodeE = new Node(42);
   Node* nodeF = new Node(17);
*/
  // note these are from StringNode.h
  Node* nodeA = new Node("A");
  Node* nodeB = new Node("B");
  Node* nodeC = new Node("C");
  Node* nodeD = new Node("D");
  // LL is empty 
  cout << "numList when empty: ";
  numList.PrintList(cout); // print empty list
  // Step 1 - add nodeA (list contains only nodeA)
  numList.Append(nodeA);
  cout << "numList after adding nodeA: ";
  numList.PrintList(cout);
  numList.Append(nodeB);
  cout << "numList after adding a, b: ";
  numList.PrintList(cout);

  numList.Prepend(nodeD);
  cout << "numList of d, a, b: ";
  numList.PrintList(cout);
  
   /*
   numList.Append(nodeB);   // Add 99
   numList.Append(nodeC);   // Add 44, make the tail
   numList.Append(nodeE);   // Add 42, make the tail

   numList.Prepend(nodeA);  // Add 66, make the head

   numList.InsertAfter(nodeC, nodeD);  // Insert 95 after 44
   numList.InsertAfter(nodeE, nodeF);  // Insert 17 after tail (42)

   // Output list
   cout << "List after adding nodes: ";
   numList.PrintList(cout);

   // Remove the tail node, then the head node
   numList.RemoveAfter(nodeE);
   numList.RemoveAfter(nullptr);

   // Output final list
   cout << "List after removing nodes: ";
   numList.PrintList(cout);
   */
   
   // LinkedList destructor frees remaining nodes
}