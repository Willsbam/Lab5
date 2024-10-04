import stringdata,time

def linear_search(container, element: str) -> int:
    for index, thing in enumerate(container):
        if element == thing:
            return index
    return -1

def binary_search(container, element: str):
    low = 0
    high = len(container) - 1
    mid = 0

    while low <= high:
        mid = (high + low) // 2
        new_string=container[mid]
        for i,letter in enumerate(new_string):
            if letter == element[i]:
                if i == 4:
                    return mid
                continue
            if letter<element[i]:
                low=mid+1
                break
            elif letter>element[i]:
                high=mid-1
                break

    return -1



def main():
    data=stringdata.get_data()

    times = time.time()
    print("Index of not_here",linear_search(data, "not_here"))
    print("Linear Search took:", time.time() - times, "Seconds for case not_here")
    times = time.time()
    print("Index of not_here",binary_search(data, "not_here"))
    print("Binary Search took:", time.time() - times, "Seconds for case not_here")

    print("")

    times=time.time()
    print("Index of mzzzz",linear_search(data,"mzzzz"))
    print("Linear Search took:",time.time()-times, "Seconds for case mzzzz")
    times=time.time()
    print("Index of mzzzz",binary_search(data,"mzzzz"))
    print("Binary Search took: %.1f" % (times-time.time()), "Seconds for case mzzzz")

    print("")

    times=time.time()
    print("Index of aaaaa", linear_search(data, "aaaaa"))
    print("Linear Search took:", time.time() - times, "Seconds for case aaaaa")
    times = time.time()
    print("Index of aaaaa",binary_search(data, "aaaaa"))
    print("Binary Search took:", time.time() - times, "Seconds for case aaaaa")




if __name__ == '__main__':
    main()