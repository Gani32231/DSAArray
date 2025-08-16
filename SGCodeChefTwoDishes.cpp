#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int N,A,B,C;
    cin>>N;
    cin>>A;
    cin>>B;
    cin>>C;
    int size = N;
    for(int i=0;i<size;i++)
    {
        if(N==0)
        {
            break;
        }
        
            if( A > 0 && B > 0)
            {
                A--;
                B--;
                N--;
            }
            else if(B > 0 && C > 0 )
            {
                B--;
                C--;
                N--;
            }
            else 
            {
                break;
            }
        
    }
    
    if(N==0)
    {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
    }
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
//Two Dishes
// Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
// Chef will have 
// N
// N guests in his house today. He wants to serve at least one dish to each of the 
// N
// N guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has 
// A
// A fruits, 
// B
// B vegetables, and 
// C
// C fishes in his house. Can he prepare at least 
// N
// N dishes in total?

// Input Format
// First line will contain 
// T
// T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, four integers 
// N
// ,
// A
// ,
// B
// ,
// C
// N,A,B,C.
// Output Format
// For each test case, print "YES" if Chef can prepare at least 
// N
// N dishes, otherwise print "NO". Print the output without quotes.

// Constraints
// 1
// ≤
// T
// ≤
// 100
// 1≤T≤100
// 1
// ≤
// N
// ,
// A
// ,
// B
// ,
// C
// ≤
// 100
// 1≤N,A,B,C≤100
// Subtasks
// Subtask 1 (100 points): Original constraints
// Sample 1:
// Input
// Output
// 4
// 2 1 2 1
// 3 2 2 2
// 4 2 6 3
// 3 1 3 1
// YES
// NO
// YES
// NO
// Explanation:
// Test case 
// 1
// 1: Chef prepares one dish of the first type using one fruit and one vegetable and another dish of the second type using one vegetable and one fish.

// Test case 
// 2
// 2: Chef prepares two dishes of the first type using two fruit and two vegetable. Now all the vegetables are exhausted, hence he can't prepare any other dishes.

// Test case 
// 3
// 3: Chef can prepare a total of 
// 5
// 5 dishes, two dishes of the first type and three dishes of the second type.