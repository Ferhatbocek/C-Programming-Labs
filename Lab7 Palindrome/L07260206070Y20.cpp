#include<stdio.h>
#include<string.h> 
int len(char name[],int index);
void Palindrome(char str[]);

int main(){
	char name[40];
	printf("Enter a Word: ");
	gets(name);
	Palindrome(name);
	return 0;
}
int len(char name[], int index) {
	static int i = 0;
    printf("%c  ",name[i]);
	if (name[index] == '\0')
		return i;
	else
		i ++;
 
	len(name, index + 1);
}

void Palindrome(char name[]){
	
	int left = 0;
	int right = len(name,0) - 1;
	printf("\nThe length of the given string is: %d\n",right +1);
	while(right > left){
		
		if(name[left++] != name[right--]){
			
			printf("%s is NOT a palindrome \n", name);
			return;
		}
		
	}
	
	printf("%s is a palindrome\n", name);
	
}
