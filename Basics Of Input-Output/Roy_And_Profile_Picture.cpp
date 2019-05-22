    //Problem Link:- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
    
    #include <iostream>
    using namespace std;
     
    int main() {
     
    	int l, n, w, h;
    	cin >> l;
    	cin >> n;
    	while ( n-- ) {
    		cin >> w >> h;
    		if ( w < l || h < l ) 
    			cout << "UPLOAD ANOTHER\n";
    		else if ( w == h ) 
    			cout << "ACCEPTED\n";
    		else 
    			cout << "CROP IT\n";
    	}
    	return 0;
    }
