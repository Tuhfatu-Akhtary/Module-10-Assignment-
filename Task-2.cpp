int findMin(int nums[]) {
    int left = 0;
    int right = nums.length() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index

        // Compare mid element with rightmost element
        if (nums[mid] > nums[right]) {
            // Minimum must be in the right half
            left = mid + 1;
        } else {
            // Minimum could be the mid or in the left half
            right = mid;
        }
    }

    // At the end of the loop, left == right, pointing to the minimum element
    return nums[left];
}


Time Complexity : O(logn)
Space Complexity : O(1)