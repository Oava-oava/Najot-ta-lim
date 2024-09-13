mylist = [[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]

i = 0
while i < len(mylist):
    t = mylist[i]
    j = i + 1
    while j < len(mylist):
        if mylist[j] == t:
            mylist.pop(j)
        else:
            j += 1
    i += 1

print(mylist)
