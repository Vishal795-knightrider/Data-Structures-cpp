def rabin_karp(text, pattern):
    n, m = len(text), len(pattern)

    if m > n:
        return -1

    d = 256      # number of characters
    q = 101      # prime modulus

    h = pow(d, m - 1, q)

    p_hash = 0
    t_hash = 0

    # Initial hashes
    for i in range(m):
        p_hash = (d * p_hash + ord(pattern[i])) % q
        t_hash = (d * t_hash + ord(text[i])) % q

    for i in range(n - m + 1):
        if p_hash == t_hash:
            if text[i:i + m] == pattern:
                return i

        if i < n - m:
            t_hash = (d * (t_hash - ord(text[i]) * h) +
                      ord(text[i + m])) % q

            if t_hash < 0:
                t_hash += q

    return -1

# Example
print(rabin_karp("ABCCDDAEFG", "CDD")) 