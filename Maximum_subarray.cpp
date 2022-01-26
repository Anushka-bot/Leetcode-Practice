// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
        cout << "max_ending: " << max_ending_here << endl;
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
            cout << "max_so_far: " << max_so_far << endl;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {4,-2,-3,6,2,-1};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}


/*string common;
        int mini=0;
        if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<strs.size();i++){
            if(strs[i].size() == 0){
                common = "";
                break;
            }
            else if(i==0){
                mini = min(strs[0].size(),strs[1].size());
                string s1=strs[0],s2=strs[1];
                for(int j=0;j<mini;j++){
                    if(s1[j] == s2[j]){
                        common.push_back(s1[j]);
}
                    else{
                        break;
                    }
                }
}
            else{
                mini= min(common.size(),strs[i].size());
                string s2=strs[i];
                for(int j=0;j<mini;j++){
                    if(common[j] == s2[j]){
                        continue;
}
                    else{
                        common.pop_back();
                    }
            }
        }
    }
            return common;
             */