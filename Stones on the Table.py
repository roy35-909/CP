class Node:
    def __init__(self,value):
        self.prev = None
        self.next = None
        self.value = value

class Linkdelist:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    def add(self,val):
        node = Node(val)
        if self.tail is None:
            self.head = node
            self.tail = node
            self.size +=1
        else:
            self.tail.next = node
            node.prev = self.tail
            self.tail = node
            self.size +=1
    def count_neighbor_duplicate(self):
        node = self.head
        count = 0
        while node is not None:
            if node.next==None:
                break
            elif node.value==node.next.value:
                count+=1
            node = node.next
        return count
c = input()
x = input()
mylist = Linkdelist()
for i in x:
    mylist.add(i)
print(mylist.count_neighbor_duplicate())