#include<stdio.h>

int main(void)
{

	printf("Enter the choice for string operation:- \n 1. With using pointer \t\t\t 2. Without using pointer");
	scanf("%d",&w);
	while(1)
	{
		switch(w);
		{
			case 1: printf("With using pointers \n");
									printf("Enter the string operation:- \n 1. Find the length of the string \n 2. Copy the string \n 3. Compare the string \n 4. Reverse the string \n 5. Find the substring \n 6. Find the palandrome");

					scanf("%d",&a);

									{
										switch(a)
												case 1:		printf("Enter the string");
																	scanf("%s",k);
																	ptr=&k
																	len_wt(*ptr);
																	break;
												case 2:

																	copy_wt();
																	break;
												case 3:		comp_wt();
																	break;
							          case 4:		rev_wt();
												        	break;
												case 5:		subs_wt();
																	break;
												case 6:		pal_wt();
																	break;
												default:	printf("Enter the valid choice");
																	break;
									}
			case 2: printf("Without using pointers \n");
									printf("Enter the string operation:- \n 1. Find the length of the string \n 2. Copy the string \n 3. Compare the string \n 4. Reverse the string \n 5. Find the substring \n 6. Find the palandrome");

									scanf("%d",&b);

									switch(b)
									{
												case 1:		printf("Enter the string");
																		scanf("%c",&q);
																			len_wot(q);
																	break;
												case 2:		printf("Enter the first string");
																		scanf("%s",c1);
																			copy_wot(c1);
																	break;
												case 3:		printf("Enter two strings to compare");
																		gets(s1);
																		gets(s2);
																			comp_wot(s1,s2);
																	break;
												case 4:		printf("Enter the string");
																		scanf("%s",&r);
																			rev_wot(r);
																	break;
												case 5:		printf("Enter the string");
																		scanf("%s",str);
																	printf("Enter the substring");
																		scanf("%s",sub);
																			subs_wot();
																	break;
												case 6:		printf("Enter the string");
																		scanf("%s",&o);
																			pal_wot();
																	break;
												default:	printf("Enter valid choice");
																	break;
									}
				default: printf("Enter valid choice");
									break;
			}
		}

int len_wot(int q)
{
	int i;
	for(i = 0; q[i] != '\0'; ++i);

	printf("Length of string: %d", i);

return x;
}
int rev_wot(int r)
{
	int y,i;
	p=sizeof(r);
		for(i=p;i>=p;i--)
		{
			cout<<r[i];
		}
return 0;
}
int pal_wot(o)
{
	int i=0,j,len;
		len=strlen(o);
			j=len-1;

			while(i<j)
			{
				if(o[i] != o[j])
				{
					printf("String:%s is not a palindrome\n",o);
					return 0;
				}
		i++;
		j--;
}
	printf("String:%s is palindrome\n",o);
return 0;
}
int comp_wot(s1,s2)
{
	if(s1==s2)
	{
		printf("Strings are same");
	}
	else
	{
		prinrf("Strings are not same");
	}
return 0;
}
int copy_wot(c1);
{
	char i,c2[100];
	for(i = 0; c1[i] != '\0'; ++i)
    {
        c2[i] = c1[i];
    }

    c2[i] = '\0';
    printf("String c2: %s", c2);
return 0;
}
int subs_wot(str,sub)
{
	int i, j=0, k;
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;
       if(!sub[j])
			 {
        printf("Substring");
        return 0;
			}
    }
  }
  printf("Not a substring");
}





return 0;
}

