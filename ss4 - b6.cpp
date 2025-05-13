#include <stdio.h>
int main() {
    int OE, NE;
    scanf("%d%d", &OE, &NE); //Old - New Electricity
    float EP = 0;              //Electricity Price
    int EA = NE - OE;         //Electricity Amount
    if(EA >= 0 && EA < 50){
    	EP = EA * 10;
	}
	else if(EA >= 50 && EA < 100){
		EP = 50*10 + (EA - 50)*15;
	}
	else if(EA >= 100 && EA < 150){
		EP = 50*10 + 50*15 + (EA - 100)*20;
	}
	else if(EA >= 150 && EA < 200){
		EP = 50*10 + 50*15 + 50*20 + (EA - 150)*25;
    }
    else if(EA >= 200){
		EP = 50*10 + 50*15 + 50*20 + 50*25 + (EA - 200)*30;
	}
	printf("Tien dien cua thang nay la %.3f", EP);
    return 0;
}
