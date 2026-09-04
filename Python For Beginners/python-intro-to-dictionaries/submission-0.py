from typing import List, Dict

def create_dict(name: str, age: int) -> Dict[str, int]:
    mp = {}
    mp[name] = age
    return mp


def list_to_dict(words: List[str]) -> Dict[str, int]:
    mp = {}
    for i in range(len(words)):
        mp[words[i]] = i
    return mp



# don't modify code below this line
print(create_dict("Alice", 25))
print(create_dict("Jane", 35))
print(create_dict("Joe", 45))

print(list_to_dict(["Alice", "Jane", "Joe"]))
print(list_to_dict(["Apple", "Banana", "Watermelon", "Pineapple"]))
