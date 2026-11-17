from typing import Dict # this adds type hinting for Dict

def count_characters(word: str) -> Dict[str, int]:
    arr = {}
    for w in word:
        if w in arr:
            arr[w] += 1
        else:
            arr[w] = 1
    return arr




# don't modify below this line
print(count_characters("hello"))
print(count_characters("world"))
print(count_characters("hello world"))
print(count_characters("this is a longer sentence"))
