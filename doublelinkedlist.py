class Node:
    def __init__(self,value):
        self.prev = None
        self.next = None
        self.value = value
class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    def add(self,value):
        node = Node(value)
        if self.tail is None:
            self.head = node
            self.tail = node
            self.size  +=1
        else:
            self.tail.next = node
            node.prev = self.tail
            self.tail = node
            self.size +=1

    def __remove(self,value):
        if value.prev is None:
            self.head = value.next
        else:
            value.prev.next = value.next

        if value.next is None:
            self.tail = value.prev
        else:
            value.next.prev = value.prev
        self.size-=1
    def __update(self,old,new):
        old.value = new.value

    def remove(self,value):
        node = self.head
        while node is not None:
            if node.value == value:
                self.__remove(node)
            node = node.next

    def removefont(self):
        node = self.head
        self.__remove(node)
    def removeback(self):
        node = self.tail
        self.__remove(node)
    def addinhead(self,val):
        node = Node(val)
        self.head.prev = node
        node.next = self.head
        self.head = node
        self.size+=1

    def addinfontof(self,ifo,val):
        newnode = Node(val)
        node = self.head
        if node.value==ifo:
            self.addinhead(val)
        else:

            x = True

            while x is True:
                if node.value == ifo:
                    newnode.next = node
                    node.prev.next = newnode
                    node.prev = newnode

                    x = False
                node = node.next
            self.size+=1
    def update(self,old,new):
        newnode = Node(new)
        x = True
        node = self.head
        while x is True:
            if node.value==old:
                self.__update(node,newnode)
                x = False
            node = node.next


    def __str__(self):
        vals = []
        node = self.head
        while node is not None:
            vals.append(node.value)
            node = node.next
        return f"[{','.join(str(val) for val in vals)}]"







