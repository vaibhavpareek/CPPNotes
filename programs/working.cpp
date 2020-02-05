char search[40],name[80];
	int i=0;
	fstream file;
    file.open("admin.txt",ios::in);
    l:system("cls");
		cout<<"\n\n\n\t\t=============================================IPL CRICKET TOURNAMENT CONTROLLER=====================================================";	
	cout<<"\n\n\t\t\t\t\t\t\tNAME=";
	cin.getline(name,80);
	cout<<"\n\n\t\t\t\t\t\t\tPASSWORD=";
	while(i<40)
	{
		search[i]=getch();
		cout<<"*";
		i++;
	}
	file.getline(passwd,40);
	cout<<"\n\t\t\t\t\t\t\tWAIT..........AUTHENTICATING DATABASES................................";
		sleep(7);
	if(!strcmp(passwd,search))
	{
		cout<<"\n\t\t\t================================= YOU HAVE SUCCESSFULLY LOGGED IN ====================================\n";
	   cout<<"\n\t\t\t\t\t=====================PRESS ANY KEY TO CONTINUE========================\n";
	   file.close();
	   getch();
	   
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t==========================ACCESS DENIED=======================";
		cout<<"\n\t\t\t\t\t\t=============PASSWD IN WRONG PLEASE TRY AGAIN=============";
		file.close();
		goto l;
	}
