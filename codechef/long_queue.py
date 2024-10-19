def func(count, sushil_wealth):
    position = len(count) 

    for i in range(len(count) - 2, -1, -1):
        if count[i] <= sushil_wealth / 2:
            position -= 1 
        else:
            break 
    
    return position

t = int(input())
for _ in range(t):
    n = int(input())
    wealths = list(map(int, input().split()))
    sushil_wealth = wealths[-1]
    
    result = func(wealths, sushil_wealth)
    
    print(result)
