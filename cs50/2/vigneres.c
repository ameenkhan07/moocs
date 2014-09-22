
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
	int len_str,len_key,i,counter=0;
	char ch;
	string str;
	string key=argv[1];	//string the keyword to k

//PreRequisites Check & Exit
	if (argc!=2)
	{
		printf("Incorrect or no key provided\n");
		return 1;
	}
	else
	{
		for(i=0;i<strlen(key);i++)
		{
			if(isdigit(key[i]))
			{
				printf("Incorrect key provieded!!!\nERROR:ALPHA-NUMERIC KEY!!!/n");
				return 1;
			}
		}
	}	
	
//Enter string to be encrypted	
	str=GetString();

//character array to hold the encrypted text
	len_str=strlen(str);
	len_key=strlen(key);

//ENCRYPTION (Vigenere's)
	for( i=0 ; i<len_str ; i++ )
	{
		//key-character distance from  a/A
			if( isupper(key[counter]) != 0 )
			{
					ch = key[counter]-'A';
			}
			else
			{
					ch = key[counter]-'a';
			}
		//ENCRYPT  upper and lower case characters and leave out the rest
			if(isupper(str[i]) != 0)
			{
				printf("%c", 'A' + ((str[i] + (ch) - 'A') % 26));
				if(counter < len_key-1)
				{
					counter++;
				}
				else
				{
					counter=0;
				}
			}
			else if( islower(str[i]) != 0)
			{
				printf("%c", 'a' + ((str[i] + (ch) - 'a') % 26));
				if(counter < len_key-1)
				{
					counter++;
				}
				else
				{
					counter=0;
				}
			}
			else
			{
				printf("%c",str[i]);
			}
	}

printf("\n");	
return 0;
}