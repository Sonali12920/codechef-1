# cook your dish here
n = int(input())
for _ in range(n):
    arr = list(map(int, input().split()))
    if(arr[0]==arr[2]):
        if(arr[1]<arr[3]):
            print("up")
        elif(arr[1]>arr[3]):
            print("down")
    elif(arr[1]==arr[3]):
        if(arr[0]<arr[2]):
            print("right")
        elif(arr[0]>arr[2]):
            print("left")
    else:
        print("sad")
