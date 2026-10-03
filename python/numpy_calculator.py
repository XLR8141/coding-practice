import numpy as np

def create_matrix():
    print("enter number of rows")
    rows = int(input())
    print("enter number of columns")
    cols = int(input())
    
    matrix_list = []
    print("enter elements one by one")
    for r in range(rows):
        row = []
        for c in range(cols):
            print("enter element")
            val = float(input())
            row.append(val)
        matrix_list.append(row)
        
    return np.array(matrix_list)

def transpose_matrix():
    print("transpose matrix")
    my_matrix = create_matrix()
    print("original matrix")
    print(my_matrix)
    print("transposed matrix")
    print(my_matrix.T)

def add_matrices():
    print("add two matrices")
    print("create matrix 1")
    m1 = create_matrix()
    print("create matrix 2")
    m2 = create_matrix()
    result = m1 + m2
    print("result of addition")
    print(result)

def subtract_matrices():
    print("subtract two matrices")
    print("create matrix 1")
    m1 = create_matrix()
    print("create matrix 2")
    m2 = create_matrix()
    result = m1 - m2
    print("result of subtraction")
    print(result)

def show_matrix():
    print("show matrix")
    m = create_matrix()
    print("result")
    print(m)

while True:
    print()
    print("menu")
    print("1 create matrix")
    print("2 transpose matrix")
    print("3 add two matrix")
    print("4 subtract two matrix")
    print("5 show matrix")
    print("6 exit")
    print()
    
    print("choose an option")
    choice = input()
    
    if choice == "1":
        print("matrix")
        print(create_matrix())
    elif choice == "2":
        transpose_matrix()
    elif choice == "3":
        add_matrices()
    elif choice == "4":
        subtract_matrices()
    elif choice == "5":
        show_matrix()
    elif choice == "6":
        print("exit")
        break
    else:
        print("invalid choice try again")