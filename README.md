SNM_sort -> Stalin aNd Merge

This process of sorting is to just take the number that can be in order from the sequence

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
