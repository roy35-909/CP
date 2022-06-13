class pant:
    def __init__(self,name,size,color,quantity):
        self.name = name
        self.size = size
        self.color = color
        self.quantity = quantity

class shirt:
    def __init__(self,name,size,color,quantity):
        self.name = name
        self.size = size
        self.color = color
        self.quantity = quantity


class Royshop:

    def __init__(self,name):
        self.name = name
        self.item = []
        self.SellShirt = 0
        self.SellPant = 0
        self.__password = "sourav"
    def add(self,password,itemname,size,color,quantity):
        if  password== self.__password:
            if itemname=="pant":
                p = pant(itemname,size,color,quantity)
                self.item.append(p)
            elif itemname=="shirt":
                s = shirt(itemname,size,color,quantity)
                self.item.append(s)
            else:
                print("we don't have this product company !!!")
        else:
            print("sorry wrong password !!!")
    def Buy(self,itemname,color,size,q,):
        for i in self.item:
            if i.name==itemname:
                if i.color == color:
                    if i.size == size:
                        if i.quantity <=0:
                            print("sorry this item not avalablle this time.")
                        else:
                            i.quantity -=q
                            if itemname=="pant":
                                self.SellPant+=q
                            elif itemname=="shirt":
                                self.SellShirt+=q
                            print(f"Enjoy your {itemname}")
                            break
                    else:
                        print(f" sorry we don't have this size")
                        break
                else:
                    print(f" sorry we dont have this color")
                    break
            else:

                print(f" sorry we don't have {itemname}")


    def ShowAdmin(self,password):
        if password == self.__password:
            print(f"Total sell of shirt {self.SellShirt}:::: Total sell of pant {self.SellPant}\n thanks ")





    def showitem(self):
        x = []
        for i in self.item:
            s = f"item:{i.name} size:{i.size} color:{i.color} Avalable:{i.quantity} ---"
            x.append(s)
        return x


