# CS121_Project_3

main
---
include stdio.h
declare const for max array length

declare printValues funtion, pass pointer int
declare sort funtion, pass pointer int
declare swap funtion, pass 2 pointer int

main funtion
  decalre array(values) = num 1-9
  notify user 'before'
  pass array values to 'printValues(values)'

  // test swap
  declare int variable1
  declare int varianle2
  print variables
  swap (variable1, variable2) // calling the swap funtion
  print swapped variables

  sort (values) // calling sort funtion
  notify user 'After'
  print array after sorting

  return 0
end main
---

printValues
---
constant MAX is max length of array

funtion printValues(pointer int 'pA')
  declare a variable (v1)

  for i is zero < MAX -1; i + 1
    point pA's address to v1 as a value
    pirnt v1 in array
    print array
  
---

sort
---
constant MAX is max length of array

function sort (array):
  
  create integer variables i and j
    
    for i from zero to MAX - 1:
      for j from zero to MAX - 1:
        if array[j] > array[j+1]:
          swap array[j] with array[j+1]
          printArray(array)
---

swap
---
funtion swap (int* a, int* b);
  declare int temp
  
  set temp = to value of a
  set int a = to value of b
  set int b = to value of temp
---
