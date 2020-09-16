//Box It
#include<bits/stdc++.h>

using namespace std;

class Box//Implement the class Box  
{
    private: 
        int l,b,h;//l,b,h are integers representing the dimensions of the box

    public:
        // The class should have the following functions :
        // Constructors:
        Box()// Box();
        {
            l = 0;
            b = 0;
            h = 0;
        }   

        Box(int length, int breadth, int height)// Box(int,int,int);
        {
            l = length;
            b = breadth;
            h = height;
        }

        Box( const Box &B )// Box(Box);
        {
            //Box B;
            l = B.l;
            b = B.b;
            h = B.h; 
        }

        int getLength()// int getLength(); // Return box's length

        {
            return l;
        }

        int getBreadth()// int getBreadth (); // Return box's breadth
        {
            return b;
        }

        int getHeight() // int getHeight ();  //Return box's height
        {
            return h;
        }

        // long long CalculateVolume(); // Return the volume of the box
        long long CalculateVolume()
        {
            return l*b*h;
        }
        //bool operator<(Box& b)
        //Overload operator < as specified
        friend bool operator < ( Box&A,Box& B)//Overload operator << as specified
        {
            if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) )
            {
            return true;
            }
            else
            {
                return false;
            }
         };
        //ostream& operator<<(ostream& out, Box& B)
        friend ostream& operator<< (ostream& output, const Box& B)
        {
        output << B.l << " " << B.b << " " << B.h;
        return output;
        }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}