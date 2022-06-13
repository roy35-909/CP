def printing(val):
    print(val)
class Node:
    def __init__(self,val):
        self.prev = None
        self.next = None
        self.value = val
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    def add(self,val):
        node = Node(val)
        if self.tail is None:
            self.head = node
            self.tail = node
        else:
            self.tail.next=node
            node.prev = self.tail
            self.tail = node
    def __sweep(self,node):
        x = node.next.value
        node.next.value=node.value
        node.value=x

    def sort(self):
        vals = []
        node = self.head
        while node is not None:
            if node!=self.tail:
                if (node.value=="B")&(node.next.value=="G"):
                    self.__sweep(node)
                    node = node.next
            node = node.next
    def __str__(self):
        vals=[]
        node = self.head
        while node is not None:
            vals.append(node.value)
            node = node.next
        return f"{''.join(str(val) for val in vals)}"

mylist = LinkedList()
i = input().split()
times= int(i[1])
strr = input()
for i in strr:
    mylist.add(i)
for i in range(0,times):
    mylist.sort()
print(mylist)


