while True:
    try:
        n = int(input())
        ans = 0
        tmp = 1
        L = 1
        for i in range(n,0,-1):
            ans += tmp * i *L
            tmp *= i
            L+=1
        print(ans)
    except:
        break