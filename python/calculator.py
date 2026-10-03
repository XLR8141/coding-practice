def sum(a,b):
    print( a + b )
def sub(a,b):
    print( a - b )
def div(a,b):
    print( a / b )
def mul(a,b):
    print( a * b )


def main():
    
    print(" press 1 to add")
    print(" press 2 to subtract")
    print(" press 3 to divide")
    print(" press 4 to multiply")
    print(" press 0 to go back")
    inp = int(input())

    print("  Select two numbers calulate  ")
    a = int(input())
    b = int(input())
  
    if inp == 1:
        sum(a,b)
    elif inp == 2:
        sub(a,b)
    elif inp == 3:
        div(a,b)
    elif inp == 4:
        mul(a,b)
    elif inp == 0:
        main()
    else:
        print("  Wrong input try again!  ")
        main()
     
    main()


main()