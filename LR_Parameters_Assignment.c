LR_Parameters_Assignment()
{
	char *sBuff;
	
	int houseno = 12345;
	char *streetname = "Lenin Street";
	float zipcode = 5004.12;
	
	//To convert int to LR parameter
	
	lr_save_int(houseno, "LR_HNO");
	
	//To convert string to LR parameter
	
	lr_save_string(streetname, "LR_Streetname");
	
	//To convert int/string/float to LR parameter
	
	lr_param_sprintf("LR_Address","Mark lives at %d, %s, Texas, %.2f", houseno,streetname,zipcode);
	
	//To convert LR parameter to string
	
	sBuff = lr_eval_string("{LR_Param}");
	
	return 0;
}
