SNM_sort -> Stalin aNd Merge

This process of sorting is to just take those number that can stay in ordered sequence 

-take the first number and it is stored in array "ordered"
    -check whether the next number is greater than the previous number(ordered number)
        -if the number is greater then 
            -it can be kept in increasing order sequence with the previous number
            -store it in ordered array
        -if not store it in separate array of disordered number
    -repeat until array is finished

-now do the same for disordered technique

weakness:
  -if the first number is large number compared to given array of number
      -unnecessary whole array comparision
      -but we may be able to mitigate by detecting highest number 
        and compare how high the first number is, if too high send/exchange with last postion number
        (just a theory)


Example:
    7, 5, 8, 11, 4, 9, 15, 16, 3, 2

Step 1:
Ordered
        7
        7, 8  -> 5 not taken because it breaks the ascending order
        7, 8, 11  -> 11 taken because it follows the ascending order
        7, 8, 11, 15, 16 -> 4,9 being smaller than 11 breaks the ascending order

number greater than recently added number is added to maintain ascending order

Unordered list
        5, 8, 4, 9, 3, 2

Step 2:
    Ordered 5, 8, 9
    Unorderd 4, 3, 2
Step 3:
    Ordered 4
    Unorderd 3, 2
and so on

later the ordered are merged one by one to form single sorted array

