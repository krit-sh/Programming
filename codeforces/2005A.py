def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    VOWELS = "aeiou"
    
    t = int(data[0])  
    index = 1
    results = []

    for _ in range(t):
        n = int(data[index]) 
        index += 1
        
        v = [n // 5] * 5 
        for i in range(n % 5):  
            v[i] += 1
            
        result = ''.join(VOWELS[i] * v[i] for i in range(5))  
        results.append(result)

    print("\n".join(results))

if __name__ == "__main__":
    main()
