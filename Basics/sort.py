arr = [1,4,3,2,4,2,1,5,7]

for i in range(0,len(arr)):
    for j in range (i,0,-1):
       if arr[i]>arr[j]
        arr[i],arr[j] = arr[j],arr[i]
            print(i)
