arr = [1,4,3,2,4,2,1,5,7]

for i in arr:
    for j in range (i,-1):
       if arr[i]>arr[j]:
            print(i)
