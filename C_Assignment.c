C_Assignment()
{
	/* Declared in globals.h 
	int num1,num2,iResult;
	float fnum1,fnum2,fResult; */
	
	num1 = 10;
	num2 = 20;
	iResult = num1*num2;
	
	fnum1 = 15.75;
	fnum2 = 20.55;
	fResult = fnum1*fnum2;

	lr_output_message("Multiplication of the integer numbers %d and %d is : %d", num1,num2,iResult);
	
	lr_output_message("Multiplication of the float numbers %.2f and %.2f is : %.2f", fnum1,fnum2,fResult);
		
	return 0;
}
