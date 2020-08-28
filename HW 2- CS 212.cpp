//SANJIDA NISHA

#include <vector>
#include <iostream>

using namespace std;

int main() 
{
    int n,l,q;		// l(length)=l-element array located at a[i]
    cout<<"Enter number of subsequent lines: ";
    while(cin>>n)
    {
    	if(n>=1 && n<=10)
    	{
    		cout<<"";
    		break;
		}
		else
		{
			cout<<"Invalid\n";
			return 0;
		}
	}
    cout<<"Enter number of queries:";
    while(cin>>q)
    {
     	if(q>=1 && q<=10)
    	{
    		
    		cout<<"";
    		break;
		}
		else
		{
			cout<<"Invalid\n";
			return 0;
		}
	}
    vector<int> a[n];
    for(int i = 0; i < n; i++)
    {
    cout<<"Enter length of Array: ";
    cin>>l;
        for(int j = 0; j < l; j++)
        {
             int element;
             cout<<"Enter a["<<j<<"] element:" ; 
             cin >> element;
              a[i].push_back(element);
        }
        
    }
    
    int i, j;

    for(int k = 1; k <= q; k++){
    	cout<<"Enter the indexes of "<< k <<" query: ";
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}




