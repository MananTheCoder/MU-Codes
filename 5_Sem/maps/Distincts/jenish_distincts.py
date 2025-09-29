def distinct(arr):
    n = len(arr)
    count = 0
    i = 0
    arr.sort()
    for _ in range(0,n-1):
        if (arr[i] == arr[i+1]):
            count+=1
            for j in range(i,n-1):
                arr[j] = arr[j+1]
            n -= 1
        else:
            i += 1
        
    arr = arr[:n]
    return arr

arr = [1,1,2,2]
print(distinct(arr))