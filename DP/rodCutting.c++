def rod_cutting(price, n):
    dp = [0] * (n + 1)

    for i in range(1, n + 1):
        max_val = float('-inf')
        for j in range(1, i + 1):
            max_val = max(max_val, price[j] + dp[i - j])
        dp[i] = max_val

    return dp[n]