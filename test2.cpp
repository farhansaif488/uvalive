#include <bits/stdc++.h>
using namespace std;




double ts(double start, double end)
{
    double l = start, r = end;

    for(int i=0; i<200; i++) {
      double l1 = (l*2+r)/3;
      double l2 = (l+2*r)/3;
      //cout<<l1<<" "<<l2<<endl;
      if(func[l1] < func[l2]) r = l2; else l = l1; //minimum val
      }

     double x = l;
    return func(x);
}

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        double l,r;
        cin>>l>>r;

        double b = ts(l,r);

        cout<<b<<endl;

    }

}