class Solution {
public:
	vector<int> sortColors(vector<int>& nums) {
		// Your code goes here
		//Dutch national flag algorithm
		int low = 0, mid = 0, high=nums.size()-1;
		while(mid<=high)
		{
			if(nums[mid]==0)
			{
				int temp = nums[low];
				nums[low] = nums[mid];
				nums[mid] = temp;
				low++;
				mid++;
			}
			else if(nums[mid]==1)
			{
				mid++;
			}
			else if(nums[mid]==2){
				int temp = nums[mid];
				nums[mid] = nums[high];
				nums[high] = temp;
				high--;
			}
		}
		return nums;
	}
};
