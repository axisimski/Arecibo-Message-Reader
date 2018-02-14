//A.sim
//August 8 2017
//Read Arecibo Message

#include<stdio.h>
#include<math.h> 
#include<cstdio>
#include<iostream>
#include <iomanip>  
#include<fstream>

using namespace std;

void read () {
	
	ofstream file;
	file.open ("AreciboOutPut.txt");
	


	char c;
	int i=1;
	FILE *fpointer;
	fpointer= fopen("AreciboMsg.txt", "rb");
	char message [1680];

	while (fscanf(fpointer, "%c", &c) != EOF) {  
		
		
			if (c=='0'||c=='1'){
				
				message [i]=c;
				
				i++;
			}			    
		}
		
	for (int j=1;j<1680;j++){
		
		if (message[j]=='1'){
			printf("%c", 219);
			
			file <<("#");

		}
		
		if (message[j]=='0'){
			printf("%c",177);
				file <<(" ");
		}
		
		if (j%23==0){
			printf("\n");
				file <<("\n");
					
			}
				
	}
	
	file.close();
 	system("pause");
	

}


int main(){
	
	read();
	
	
}
