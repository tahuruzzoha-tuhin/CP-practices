
#include <iostream> 
using namespace std; 

 
int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b%a, a); 
} 


int countPairs(int G, int L) 
{ 
	
	int count = 0; 

	 
	int p = G*L; 


	for (int a=1; a<=L; a++) 
		if (!(p%a) && gcd(a, p/a)==G) {
			count++;
			cout << "(" << a << "," << p/a << ")" << endl;
			
		}
			 

	return count; 
} 


int main() 
{ 
	int G = 2, L = 4; 
	cout << "Total possible pair with GCD " << G; 
	cout << " & LCM " << L; 
	cout <<" = " << countPairs(G, L); 
	return 0; 
} 
