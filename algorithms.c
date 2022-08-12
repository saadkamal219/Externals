/*
No: 01
Lenear Search
Recommendation: Sorted or Unsorted
Time complexity: O(n)
*/
int lenear_search (int array[], int element, int target) {

    for (int i = 0; i < element; i++) 
    {
        if (array[i] == target)
        {
            return i;
        }
        
    }
    
    return -1;
}

/*
No: 02
Binary Search
Recommendation: Must be sorted according to respective order
Process: Firstly how many elements are there and either the array is sorted or not. Then we have to calculate that how many times we can devide the number
         by 2. Then we have to do logarithm logic to execute the complexity. Such as, an array with 1024 elements. pow(2, 10) is equal to 1024. 
         So, log(2, 1024) is equal to 10. Then the time complexity is O(log(2, 1024)).
Time complexity: O(log(2,n)) 
*/
int binary_search (int array[], int element, int target){
   
   int left, mid, right; // three variable declared as we are to divide the array

   left = 0; // the very first element of the array is the leftmost element means 0
   right = element - 1; // the very last element of the array is the rightmost element means n - 1, where n is the number of elements
 
   while (left <= right) // the loop will continue untill the left is greater than right
   {
        mid = (left + right) / 2; // defining the middle position

        if (array[mid] == target) // if the taget is equal to the element of the mid position then it will return the position
        {
            return mid;
        }
        else  
        {
            if (array[mid] < target) // if it doesn't, then we will check if the value in the mid position is smaller than the target. If it is, we will update
            {                        // the value of the "left" variable to the next position of the mid position means left = mid + 1. And if it not, we will 
                left = mid + 1;      // update the "right" variable to the previous position of the mid position means right = mid - 1.
            }
            else
            {
                right = mid - 1; 
            }
        }
   }

    return -1; // if we didn't find the target, return -1.

}

/*
No: 03

Recommendation: 
Time complexity: 
*/
