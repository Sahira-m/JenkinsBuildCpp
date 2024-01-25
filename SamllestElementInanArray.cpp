#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
class sample1
{
private:
   
public:
    int sum(int arr[],int  array_length)
    {
        
        int value = 0;
         bool Exist = false;
       
        for (int i = 1; i < array_length+2; i++)
        {
            
            for (int j = 0; j < array_length+2;j++)
            {
               
                 Exist = false;
                if(i==arr[j])
                {
                   
                    Exist = true;
                    cout << "\n TRUE i=" << i << "arr(j) " << arr[j];
                    break;
                }
                else if(arr[j]<0)
                    return 0;
               
                
            }
            if(Exist==false)
                return i;
            
        }
        return 1;

    }
    
};

int main()
{
    sample1 s;
    int arr[] = {-3,-2,-1,1,2,3,4, 5,  6, 8};
    using namespace std;
    auto array_length = end(arr) - begin(arr);
    int res=s.sum(arr,array_length);
    cout << " smallest element is" << res;
    return 0;
}
