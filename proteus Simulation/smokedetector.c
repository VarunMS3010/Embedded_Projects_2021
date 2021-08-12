#include<reg51.h>
sbit s1 = P1^0;
sbit s2 = P1^1;
sbit s3 = P1^2;
// sensors is given to port 1 and installed on street
sbit L1 = P2^0;
sbit L2 = P2^1;
sbit L3 = P2^2;
// load is given to port 2 and installed on street
void main()
{
	L1 = L2 = L3 = 0;
	s1 = s2 = s3 = 0;
	while(1)
	{
		if(s1==1)
		{
			L1 = 1;
			L2 = L3 = 0;
		}
		if(s2==1)
		{
			L2 = 1;
			L1 = L3 = 0;
		}
		if(s3==1)
		{
			L3 = 1;
			L2 = L1 = 0;
		}
	}
}


