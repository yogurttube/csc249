"""
CSC 249
M4T1 - simple linked list (singly linked)
norrisa
2/28/23
"""

""" 
LinkedList consists of:
// node and pointer collection of Node objects
// pointer to head and tail
// methods to access and mutate the list
Notes: 
Copilot has gotten stupider -- it was of zero help here.
Examples from  Lambert, Fundamentals of Data Structures in Python
"""

class Node:
    """ Represents a singly linked node"""
    def __init__(self, data=None, next=None):
        """ Instantiates a Node with None as default next """
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        """ Instantiates an empty linkedlist"""
        self.head = None   # pointer to head
        self.tail = None   # pointer to tail
        
def main():
    node1 = None
    node2 = Node("A", None)
    node3 = Node("B", node2)
    
    
# run program
#if __name__ == "__main__":
#    main()

# We've turned off main, so running this .py file
# simply provides a "sandbox" of objects and methods.
# some examples
node1 = None # an empty link
node2 = Node("A", None) # data plus an empty link
node3 = Node("B", node2) # data plus a link to node2
print(node1)
print(node2)
print(node3)
