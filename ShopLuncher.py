from royStore import Royshop

shop = Royshop("Roy")
while True:

    print("WellCome To Royshop \n Add Product : Add \n Buy Porduct : Buy \n show item : Show \n show admin : Admin")
    inp = input("Tell me what you need: ")
    if inp=="exit":
        break
    elif inp=="Add":
        password = input("Type password : ")
        item = input("Type item name : ")
        size = int(input("what is the size : "))
        color = input("Whats the color : ")
        quantity = int(input("How many : "))
        shop.add(password,item,size,color,quantity)
        print("Add Succesfully ")
    elif inp=="Show":
        x = shop.showitem()
        print(x)
    elif inp=="Buy":
        item = input("Type item name : ")
        size = int(input("what is the size : "))
        color = input("Whats the color : ")
        quantity = int(input("How many : "))
        shop.Buy(item,color,size,quantity)

    elif inp=="Admin":
        password = input("Type Your password : ")
        shop.ShowAdmin(password)






