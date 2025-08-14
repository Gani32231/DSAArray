#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int maxBox = 1;
    for(int x: arr)
    {
        if(maxBox < x)
        {
            maxBox =x;
        }
    }
    cout<<maxBox<<"\n";
}
int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}


// Distinct Colors
// There are 
// N
// N different types of colours numbered from 
// 1
// 1 to 
// N
// N. Chef has 
// A
// i
// A 
// i
// ​
//   balls having colour 
// i
// i, 
// (
// 1
// ≤
// i
// ≤
// N
// )
// (1≤i≤N).

// Chef will arrange some boxes and put each ball in exactly one of those boxes.
// Find the minimum number of boxes Chef needs so that no box contains two balls of same colour.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases. The description of the test cases follows.
// The first line of each test case contains a single integer 
// N
// N, denoting the number of colors.
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
//   — denoting the number of balls having colour 
// i
// i.
// Output Format
// For each test case, output the minimum number of boxes required so that no box contains two balls of same colour.

// Constraints
// 1
// ≤
// T
// ≤
// 1000
// 1≤T≤1000
// 2
// ≤
// N
// ≤
// 100
// 2≤N≤100
// 1
// ≤
// A
// i
// ≤
// 10
// 5
// 1≤A 
// i
// ​
//  ≤10 
// 5
 
// Sample 1:
// Input
// Output
// 3
// 2
// 8 5
// 3
// 5 10 15
// 4
// 4 4 4 4
// 8
// 15
// 4
// Explanation:
// Test case 
// 1
// 1: Chef needs at least 
// 8
// 8 boxes such that no box has two balls of same colour. A possible configuration of the 
// 8
// 8 boxes would be 
// {
// [
// 1
// ,
// 2
// ]
// ,
// [
// 1
// ,
// 2
// ]
// ,
// [
// 1
// ,
// 2
// ]
// ,
// [
// 1
// ,
// 2
// ]
// ,
// [
// 1
// ,
// 2
// ]
// ,
// [
// 1
// ]
// ,
// [
// 1
// ]
// ,
// [
// 1
// ]
// }
// {[1,2],[1,2],[1,2],[1,2],[1,2],[1],[1],[1]} where the 
// i
// t
// h
// i 
// th
//   element of this set denotes the colour of balls in the 
// i
// t
// h
// i 
// th
//   box.

// Test case 
// 2
// 2: Chef needs at least 
// 15
// 15 boxes such that no box has two balls of same colour.

// Test case 
// 3
// 3: Chef needs at least 
// 4
// 4 boxes such that no box has two balls of same colour. A possible configuration of the 
// 4
// 4 boxes would be 
// {
// [
// 1
// ,
// 2
// ,
// 3
// ,
// 4
// ]
// ,
// [
// 1
// ,
// 2
// ,
// 3
// ,
// 4
// ]
// ,
// [
// 1
// ,
// 2
// ,
// 3
// ,
// 4
// ]
// ,
// [
// 1
// ,
// 2
// ,
// 3
// ,
// 4
// ]
// }
// {[1,2,3,4],[1,2,3,4],[1,2,3,4],[1,2,3,4]} where the 
// i
// t
// h
// i 
// th
//   element of this set denotes the colour of balls in the 
// i
// t
// h
// i 
// th
//   box.