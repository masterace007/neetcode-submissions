def concatenate(s1: str, s2: str) -> str:
    st1 = s1+s2
    if(len(st1) > 10):
        return "Too long!"
    return st1



# do not modify below this line
print(concatenate("He", "llo"))
print(concatenate("Hello ", "world!"))
print(concatenate("Length", "of10"))
