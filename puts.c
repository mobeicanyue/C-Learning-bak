//#include<stdio.h>
//int main()
//{
//	char str[]="China Beijing";
//	puts(str);
//}
#include<stdio.h>
//using namespace std;
#include<string.h>


int main()
{
	char str1[30] = { "I'm Iron" };
	char str2[] = { " Man" };
	//cout << strcat_s(str1, str2);
	printf("%s", strcat(str1, str2));
}

