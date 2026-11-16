from typing import List

def get_last_three_elements(my_list: List[int]) -> List[int]:
    n = len(my_list)
    return my_list[n-3:]



# do not modify below this line
print(get_last_three_elements([1, 2, 3]))
print(get_last_three_elements([1, 2, 3, 4, 5]))
print(get_last_three_elements([1, 2, 3, 4, 5, 6, 7, 8, 9]))
