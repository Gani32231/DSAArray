#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int N;
    cin >> N;
    std::vector<int> freq(N + 1,0);
    int max_freq = 0;
    for(int i=0; i< N; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
        if(freq[a] > max_freq )
        {
            max_freq = freq[a];
        }
    }
    
    std::cout << N - max_freq << std::endl;

}
int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--) 
    {
        solve();
    }
    return 0;
}
//Equal Elements
// You are given an array 
// A
// A of size 
// N
// N. In one operation, you can do the following:

// Select indices 
// i
// i and 
// j
// j 
// (
// i
// ≠
// j
// )
// (i=j) and set 
// A
// i
// =
// A
// j
// A 
// i
// ​
//  =A 
// j
// ​
//  .
// Find the minimum number of operations required to make all elements of the array equal.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer 
// N
// N — the size of the array.
// The next line contains 
// N
// N space-separated integers, denoting the array 
// A
// A.
// Output Format
// For each test case, output on a new line, the minimum number of operations required to make all elements of the array equal.

// Constraints
// 1
// ≤
// T
// ≤
// 1000
// 1≤T≤1000
// 1
// ≤
// N
// ≤
// 2
// ⋅
// 10
// 5
// 1≤N≤2⋅10 
// 5
 
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
// The sum of 
// N
// N over all test cases won't exceed 
// 2
// ⋅
// 10
// 5
// 2⋅10 
// 5
//  .
// Sample 1:
// Input
// Output
// 3
// 3
// 1 2 3
// 4
// 2 2 3 1
// 4
// 3 1 2 4
// 2
// 2
// 3
// Explanation:
// Test case 
// 1
// 1: The minimum number of operations required to make all elements of the array equal is 
// 2
// 2. A possible sequence of operations is:

// Select indices 
// 1
// 1 and 
// 2
// 2 and set 
// A
// 1
// =
// A
// 2
// =
// 2
// A 
// 1
// ​
//  =A 
// 2
// ​
//  =2.
// Select indices 
// 3
// 3 and 
// 2
// 2 and set 
// A
// 3
// =
// A
// 2
// =
// 2
// A 
// 3
// ​
//  =A 
// 2
// ​
//  =2.
// Thus, the final array is 
// [
// 2
// ,
// 2
// ,
// 2
// ]
// [2,2,2].

// Test case 
// 2
// 2: The minimum number of operations required to make all elements of the array equal is 
// 2
// 2. A possible sequence of operations is:

// Select indices 
// 3
// 3 and 
// 2
// 2 and set 
// A
// 3
// =
// A
// 2
// =
// 2
// A 
// 3
// ​
//  =A 
// 2
// ​
//  =2.
// Select indices 
// 4
// 4 and 
// 3
// 3 and set 
// A
// 4
// =
// A
// 3
// =
// 2
// A 
// 4
// ​
//  =A 
// 3
// ​
//  =2.
// Thus, the final array is 
// [
// 2
// ,
// 2
// ,
// 2
// ,
// 2
// ]
// [2,2,2,2].

// Test case 
// 3
// 3: The minimum number of operations required to make all elements of the array equal is 
// 3
// 3. A possible sequence of operations is:

// Select indices 
// 2
// 2 and 
// 1
// 1 and set 
// A
// 2
// =
// A
// 1
// =
// 3
// A 
// 2
// ​
//  =A 
// 1
// ​
//  =3.
// Select indices 
// 3
// 3 and 
// 1
// 1 and set 
// A
// 3
// =
// A
// 1
// =
// 3
// A 
// 3
// ​
//  =A 
// 1
// ​
//  =3.
// Select indices 
// 4
// 4 and 
// 1
// 1 and set 
// A
// 4
// =
// A
// 1
// =
// 3
// A 
// 4
// ​
//  =A 
// 1
// ​
//  =3.
// Thus, the final array is 
// [
// 3
// ,
// 3
// ,
// 3
// ,
// 3
// ]
// [3,3,3,3].