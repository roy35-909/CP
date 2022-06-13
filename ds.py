



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
    def __remove(self,node):
        if node.prev is None:
            self.head = node.next
        else:
            node.prev.next = node.next
        if node.next is None:
            self.tail = node.prev
        else:

        self.size -= 1

    def remove(self,value):
        node = self.head
        while node is not None:
            if node.value==value:
                self.__remove(node)
            node = node.next

    def removefont(self):
        node = self.head
        self.__remove(node)
    def removeend(self):
        node = self.tail
        self.__remove(node)






    def __str__(self):
        vals=[]
        node = self.head
        while node is not None:
            vals.append(node.value)
            node = node.next
        return f"[{','.join(str(val) for val in vals)}]"


my_list = Linkdelist()
my_list.add("amadar")
my_list.add("pant")
my_list.add("Dhila")
my_list.add("kano")
my_list.add("Korthipokho")
my_list.add("jobab")
my_list.add("Chai")
my_list.removefont()
print(my_list)

a=my_list.size
print(a)
