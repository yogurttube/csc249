#ifndef STRINGNODE_H
#define STRINGNODE_H

#include <string>
using namespace std;
// Node redefined as containing strings
// (must comment out the old Node class!)
// Note that this is a hack and we should:
// - template the Node class, or
// - use inheritance

class Node {
public:
   string data;
   Node* next;

   Node(string initialData) {
      data = initialData;
      next = nullptr;
   }
};


#endif // STRINGNODE_H