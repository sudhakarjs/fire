print("Enter a number to check whether it is palindrome or not :")
a=int(input())
print(a)
n=0
temp=a
rev=0
while(temp>0):
    rem=temp%10
    rev=(rev*10)+rem
    temp=int(temp/10)
if(rev==a):
    print("Yes,it is a palindrome!!!")
print("No,it is not a palindrome!")
