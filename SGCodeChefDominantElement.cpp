#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int N;
    cin>>N;
    int countwithmax = 0;
    std::vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int maxCount = 1;
    vector<int> maxFreq(N+1,0);
    for(int i=0;i<N;i++)
    {
        maxFreq[arr[i]]++;
        if(maxCount < maxFreq[arr[i]])
        {
            maxCount = maxFreq[arr[i]];
        }
    }
    
      for(int x: maxFreq)
      {
          if(x == maxCount) countwithmax++;
      }
       
    
    if(maxCount > 1 && countwithmax == 1)
    {
        std::cout << "YES" << std::endl;
    }
    else 
    {
        std::cout << "NO" << std::endl;
    }
}
int main() {
	// your code goes here
	int T;
	cin>> T;
	while(T--) {
	    solve();
	}

}


// Dominant Element
// You are given an array 
// A
// A of length 
// N
// N. An element 
// X
// X is said to be dominant if the frequency of 
// X
// X in 
// A
// A is strictly greater than the frequency of any other element in the 
// A
// A.

// For example, if 
// A
// =
// [
// 2
// ,
// 1
// ,
// 4
// ,
// 4
// ,
// 4
// ]
// A=[2,1,4,4,4] then 
// 4
// 4 is a dominant element since its frequency is higher than the frequency of any other element in 
// A
// A.

// Find if there exists any dominant element in 
// A
// A.

// Input Format
// The first line of input contains a single integer 
// T
// T — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer 
// N
// N — the size of the array 
// A
// A.
// The second line of each test case contains 
// N
// N space-separated integers 
// A
// 1
// ,
// A
// 2
// ,
// …
// ,
// A
// N
// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   denoting the array 
// A
// A.
// Output Format
// For each test case, output YES if there exists any dominant element in 
// A
// A. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

// Constraints
// 1
// ≤
// T
// ≤
// 500
// 1≤T≤500
// 1
// ≤
// N
// ≤
// 1000
// 1≤N≤1000
// 1
// ≤
// A
// i
// ≤
// N
// 1≤A 
// i
// ​
//  ≤N
// Sample 1:
// Input
// Output
// 4
// 5
// 2 2 2 2 2
// 4
// 1 2 3 4
// 4
// 3 3 2 1
// 6
// 1 1 2 2 3 4
// YES
// NO
// YES
// NO
// Explanation:
// Test case 
// 1
// 1: 
// 2
// 2 is the dominant element.

// Test case 
// 2
// 2: There does not exist any dominant element.

// Test case 
// 3
// 3: 
// 3
// 3 is the dominant element.