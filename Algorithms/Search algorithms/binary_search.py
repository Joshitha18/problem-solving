list1=["2","5","8","9"]
length=len(list1)

val=input()

def binarySearch(list1, l, r, x):

 if r >= l: 
 
  mid = l + (r - l) //2

  if list1[mid] == x:
   return mid
  
  elif list1[mid] > x: 
   return binarySearch(list1, l, mid - 1, x) 
  
  return binarySearch(list1, mid + 1, r, x) 
 
 return -1 
   
index=binarySearch(list1,0,length-1,val)   
      
if index ==-1:
 print("not present")
else:
 print("present at index:",index)
