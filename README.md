SNM_sort -> Stalin aNd Merge
<br>
This process of sorting is to just take those number that can stay in ordered sequence 
<br>

-take the first number and it is stored in array "ordered"
<br>
    -check whether the next number is greater than the previous number(ordered number)
    <br>
        -if the number is greater then 
        <br>
            -it can be kept in increasing order sequence with the previous number
            <br>
            -store it in ordered array
            <br>
        -if not store it in separate array of disordered number
        <br>
    -repeat until array is finished

<br>
-now do the same for disordered technique

<br>
weakness:
<br>
  -if the first number is large number compared to given array of number
  <br>
      -unnecessary whole array comparision
      <br>
      -but we may be able to mitigate by detecting highest number 
        and compare how high the first number is, if too high send/exchange with last postion number
        (just a theory)

<br>
Example:
    7, 5, 8, 11, 4, 9, 15, 16, 3, 2

<br>
Step 1:<br>
Ordered<br>
        7<br>
        7, 8  -> 5 not taken because it breaks the ascending order<br>
        7, 8, 11  -> 11 taken because it follows the ascending order<br>
        7, 8, 11, 15, 16 -> 4,9 being smaller than 11 breaks the ascending order<br>

number greater than recently added number is added to maintain ascending order<br>

Unordered list<br>
        5, 8, 4, 9, 3, 2<br>

Step 2:<br>
    Ordered 5, 8, 9<br>
    Unorderd 4, 3, 2<br>
Step 3:<br>
    Ordered 4<br>
    Unorderd 3, 2<br>
and so on

<br>
later the ordered are merged one by one to form single sorted array

