from typing import List

def read_integers() -> List[int]:
    s = list(input().split(","))
    ans = []
    for a in s:
        ans.append(int(a))
    return ans

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
