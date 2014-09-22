#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
	int len_str,key,i;
	char c[100];
	string str;
//PreRequisites Check & Exit
	if (argc!=2)
	{
		printf("Incorrect or no key provided\n");
		return 1;
	}

//Enter string to be encrypted	
	str=GetString();
//character array to hold the encrypted text
	len_str=strlen(str);	
//converting the string type of entered)
	key=atoi(argv[1]);//key=key

	if(key!=0)
	{
		for(i=0;i<len_str;i++)	//Iterate full string
		{
			if( (str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') ) 
			{
				if (key<26)
				{
					if (str[i]+key<='z'||str[i]+key<='Z')
					{
						c[i]=str[i]+key;
					}
					else
					{
						c[i]=(str[i]-26)+(key);
					}
				}
				else
				{
					key=key%26;
					if (str[i]+key<='z'||str[i]+key<='Z')
					{
						c[i]=str[i]+key;
					}
					else
					{
						c[i]=(str[i]-26)+(key);
					}
				}
			}
			else//not an alphabet
			{
				c[i]=str[i];
			}
		}
	}

	for(i=0;i<len_str;i++)
    	printf("%c",c[i]);
    printf("\n");
	return 0;

}