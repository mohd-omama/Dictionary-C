#include <stdio.h> 
#include <string.h>





int main()
{
	int i,str_len,flag=-1;
	long count=0;
	char ch,a[20];
	printf ("Enter a string:\n");
	scanf ("%[^\n]%*c",a);
	
	str_len=strlen(a);	
	
	FILE *fp;
	fp = fopen ("Dict.txt","r");
	
	switch (a[0]){
		case 'a':	fseek (fp,0,SEEK_SET);			break;
		case 'b':	fseek (fp,63543,SEEK_SET);		break;
		case 'c':	fseek (fp,119323,SEEK_SET);		break;
		case 'd':	fseek (fp,220027,SEEK_SET);		break;
		case 'e':	fseek (fp,285537,SEEK_SET);		break;
		case 'f':	fseek (fp,331076,SEEK_SET);		break;
		case 'g':	fseek (fp,372468,SEEK_SET);		break;
		case 'h':	fseek (fp,403916,SEEK_SET);		break;
		case 'i':	fseek (fp,440027,SEEK_SET);		break;	
		case 'j':	fseek (fp,488332,SEEK_SET);		break;
		case 'k':	fseek (fp,496969,SEEK_SET);		break;
		case 'l':	fseek (fp,504921,SEEK_SET);		break;
		case 'm':	fseek (fp,533936,SEEK_SET);		break;
		case 'n':	fseek (fp,589755,SEEK_SET);		break;
		case 'o':	fseek (fp,614880,SEEK_SET);		break;
		case 'p':	fseek (fp,644610,SEEK_SET);		break;
		case 'q':	fseek (fp,727977,SEEK_SET);		break;
		case 'r':	fseek (fp,733272,SEEK_SET);		break;
		case 's':	fseek (fp,800198,SEEK_SET);		break;
		case 't':	fseek (fp,913096,SEEK_SET);		break;
		case 'u':	fseek (fp,963706,SEEK_SET);		break;
		case 'v':	fseek (fp,999199,SEEK_SET);		break;
		case 'w':	fseek (fp,1015982,SEEK_SET);	break;
		case 'x':	fseek (fp,1039246,SEEK_SET);	break;
		case 'y':	fseek (fp,1039899,SEEK_SET);	break;
		case 'z':	fseek (fp,1042648,SEEK_SET);	break;
	}
	
	
	
	
	while (1){
		
		for (i=0;i<str_len;i++){
			
			ch = fgetc(fp);
			
	
			if (ch=='\n'){
				flag=2;
			
				break;
			}
				
				
			else{
		
				
				if (ch==EOF){
					printf ("WE reached EOF hence ended\n");
					flag=1;
					break;
					
				
				}
				
				 if (a[i]==ch){
					if ((i==str_len-1)&&(fgetc(fp)=='\n')){
						flag=0;
						break;
					}
				}
				
				
				else if (a[i]>ch){
					flag=3;
					break;	
				}
				
				else if (a[i]<ch){
					flag=1;
					break;
				}
				
				
				
			}
		}
		
		
		if (flag==0){
			printf("This word is present in the dictionary source.\n");
			break;
		}
		
	   if (flag==1){
			printf("This word is not present in the dictionary source.\n");
			break;
		}
		if (flag==2){
		
		}
		
		if (flag==3) {
			
			while (fgetc(fp)!='\n');
		
		
		}	
	}
		
		
	fclose (fp);
	

	return 0;
	
	
}











