///////////////////////////////////////////////////////////
//  CAccount.cpp
//  Implementation of the Class CAccount
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: 12850
///////////////////////////////////////////////////////////

#include "CAccount.h"
#include "CCardBook.cpp"
#include"ui_GXNUSEP2101-DWGC-login-20210601-B-Zhy.h"

CAccount::CAccount(){

}



CAccount::~CAccount(){

}





bool CAccount::ChangPassword(string OldPassword, string NewPassword){

	return  NULL;
}


bool CAccount::login(/*string AccountNumber, string Password*/){
	
	CAccount::loginDialog.show();
	return  NULL;
}


bool CAccount::Register(string Accountnumber, string Password, string UserName){

	return  NULL;
}


/* Begin - EA generated code for Activities and Interactions */


void CAccount::CaccountInteraction()
{
	// behavior is a Interaction
	/*this->Register();*/
	this->login();
	/*this->ChangPassword();*/
	/*CCardBook view();*/
}



/* End - EA generated code for Activities and Interactions */