/* Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.
SAMPLE INPUT
LLRDDR
SAMPLE OUTPUT
0 -2 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[200];
	int i=0,a=0,b=0,len;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{

	    if(s[i]=='L')
		a--;
		else if(s[i]=='R')
		a++;
		else if(s[i]=='U')
		b++;
		else if(s[i]=='D')
		b--;


	}
printf("\n%d %d",a,b);
return 0;
}
