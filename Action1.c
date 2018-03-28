Action1()
{
	int ivalue;
	float fvalue;
	char *sbuff;
	
	char *string1 = "This is comparing two strings in Load Runner";
	char *string2 = "This is comparing 2 strings in Load Runner";
	int iresult;
	
	int num1=100;
	int num2= 100;
	
	float fnum1 = 25.5599;
	float fnum2 = 25.5599;
	
	ivalue=100;
	fvalue= 20.99;
	sbuff="Test";
	
	//printing out integer,float and string values in output log.
	
	lr_output_message("Value of integer i is: %d", ivalue);
	lr_output_message("Value of Float f is: %.2f", fvalue);
	lr_output_message("This is %s of C Functions", sbuff);
	
	// Comparing integer values
	
	if(num1==num2)
	{
		lr_output_message("Values %d and %d are same",num1,num2);
	}
	else
	{
		lr_output_message("Values %d and %d are not same",num1,num2);
	}
	
	//Comparing float values
	
	if(fnum1==fnum2)
	{
		lr_output_message("Values %.4f and %.4f are same", fnum1,fnum2);
	}
	else
	{
		lr_output_message("Values %.4f and %.4f are not same",fnum1,fnum2);
	}
		
	//Comparing strings
	
	iresult = strcmp(string1,string2);
	
	if(iresult == 0)
	{
		lr_output_message("%s and %s are same strings.", string1,string2);
	}
	else
	{
		lr_output_message("%s and %s are not same strings.", string1,string2);
	}
	
	lr_output_message(" Nikhil is a champ in LR. Yaeeee!!!");
	
	return 0;
}
