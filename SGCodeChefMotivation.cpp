#include<iostream>
#include<vector>
using namespace std;
void solve()
{
    int N,X;
    cin>>N;
    cin>>X;
    std::vector<int> size(N);
    std::vector<int> rating(N);
    for(int i=0;i<N;i++)
    {
        cin>>size[i];
        cin>>rating[i];
    }
    int maxRating = 0;
    for(int i=0;i<N;i++)
    {
        if(size[i] <= X)
        {
            if(maxRating < rating[i])
            {
                maxRating= rating[i];
            }
        }
    }
    
    cout<<maxRating<<"\n";
}

int main() {
	// your code goes here
	int T;
	cin>> T;
    while(T--) solve();
}

//Motivation
// Read problem statements in Russian
// Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has 
// X
// X GB of space remaining. His friend has 
// N
// N movies represented with 
// (
// S
// i
// ,
// R
// i
// )
// (S 
// i
// ​
//  ,R 
// i
// ​
//  ) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

// Input
// The first line of the input contains a single integer 
// T
// T denoting the number of test cases. The description of 
// T
// T test cases follows.
// The first line of each test case contains two space-separated integers 
// N
// N and 
// X
// X.
// N
// N lines follow. For each valid 
// i
// i, the 
// i
// i-th of these lines contains two space-separated integers 
// S
// i
// S 
// i
// ​
//   and 
// R
// i
// R 
// i
// ​
//  .
// Output
// For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.

// Constraints
// 1
// ≤
// T
// ≤
// 10
// 1≤T≤10
// 1
// ≤
// N
// ≤
// 5
// ⋅
// 10
// 4
// 1≤N≤5⋅10 
// 4
 
// 1
// ≤
// X
// ≤
// 10
// 9
// 1≤X≤10 
// 9
 
// 1
// ≤
// S
// i
// ,
// R
// i
// ≤
// 10
// 9
// 1≤S 
// i
// ​
//  ,R 
// i
// ​
//  ≤10 
// 9
//   for each valid 
// i
// i
// X
// ≥
// S
// i
// X≥S 
// i
// ​
//   for atleast one valid 
// i
// i
// Subtasks
// Subtask #1 (100 points): original constraints

// Sample 1:
// Input
// Output
// 3
// 1 1
// 1 1
// 2 2
// 1 50
// 2 100
// 3 2
// 1 51
// 3 100
// 2 50
// 1
// 100 
// 51
// Explanation:
// Example case 1: Since there is only 
// 1
// 1 movie available and requires space equivalent to the empty space in the hard disk, Chef can only obtain maximum IMDB rating of 
// 1
// 1.

// Example case 2: Since out of the 
// 2
// 2 available movies, both can fit in the free memory, we only care to take the one with higher rating, i.e, rating of 
// m
// a
// x
// (
// 50
// ,
// 100
// )
// =
// 100
// max(50,100)=100.

// Example case 3: Since out of the 
// 3
// 3 available movies, only the first and the last movies fit in the free memory, we only care to take the one with higher rating amongst these 
// 2
// 2, i.e, rating of 
// max
// ⁡
// (
// 51
// ,
// 50
// )
// =
// 51
// max(51,50)=51.