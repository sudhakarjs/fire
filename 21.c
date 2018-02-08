def multiple(n):
    my_list=[]
    for x in range(1,6):
        my_list.append(n*x)
    return my_list
print("Enter a number:")
n=int(input()
print("First five multiples of "+str(n))
print(*multiple(n))
