from typing import List

def read_integers() -> List[int]:
    user_input = input()
    arr = user_input.split(',')
    ans = list()
    for num in arr:
        ans.append(int(num))
    return ans

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
