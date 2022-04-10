print("Hello World")
print("4*5")
print(4*5)
a= int(input())

#changing data type
print(a)

b = 234 

print(a+b)

print(type(a))
working till now
print(a , a ,a )

#estimating floating decimal by changing declaration
l = 12.4567
k = int(l)
print(l)
print(int(12.56))

name1 = "Ayush"
state1 = "UK"
#different ways to use variables
print(name1 , "is from",state1)
print("{} is from {}"  .format(name1, state1))
#fstring
print(f "{name1} is from {state1}") 
k = [[1,2,3], [2,3,4], [2,3,[4,5]]]
#locating arrays
print(k[2][2][1])

l = [ "mango" , "orange" , "lichi"]
print("we have :" , l[0] , l[1] , l[2])

#list
l = [1,2 ,3,['A','B'] , ["ayush" , "supria"]]
print(l[4][0])

#dictionary
dict1 = {"m" :1 , "n":2}
dict2 = {"m" :11 ,"n" :22}
print(dict1["m"] , dict2["m"])

#list 
#[] : list 
#() :tuple
#{} : dictionary
k=[1,2 ,3]
l=[8,5,6]
m = k + l
m.append(10)
m.sort()
Aum = sum(m)
print(Aum)
print(m)
k=[1,2,3,4,5]
k.pop(0)
print(k)

#tuple
k = (1,2,3,4,5,5,5) 
l= list(k)
s = set(k)
print(l,s)

#union of sets

k = {1,2,3}
l = {3,4,5}
m = k.union(l)

print(m);


# union of dictionary

k = {"m":1 , "n":2}
k["o"]=3

print(k)
