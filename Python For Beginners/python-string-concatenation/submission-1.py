def concatenate(s1: str, s2: str) -> str:
    res = s1 + s2
    n = len(res)
    if n > 10:
        return "Too long!"
    return res




# do not modify below this line
print(concatenate("He", "llo"))
print(concatenate("Hello ", "world!"))
print(concatenate("Length", "of10"))
