
#!/usr/bin/python3

def minWindow(s: str, t: str) -> str:
        count = len(t)
        r = 0
        l = 0
        m_start = 0
        m_length = len(s) + 1
        t_map = {}
        
        for el in t:
            t_map[el] = t_map.get(el, 0) + 1
            
        while r < len(s):
            if t_map.get(s[r], 0) > 0:
                count -= 1
            t_map[s[r]] = t_map.get(s[r], 0) - 1

            r += 1
            
            while count == 0:
                if r - l < m_length:
                    m_start = l
                    m_length = r - l
                t_map[s[l]] = t_map.get(s[l], 0) + 1
                if t_map[s[l]] > 0:
                    count += 1
                l += 1
        
        return "" if m_length == len(s) + 1 else s[m_start:m_start + m_length]

if __name__ == '__main__':
    res = minWindow("ADOBECODEBANC", "ABC")
    print(res)