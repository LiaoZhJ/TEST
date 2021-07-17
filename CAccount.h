///////////////////////////////////////////////////////////
//  CAccount.h
//  Implementation of the Class CAccount
//  Created on:      09-7ÔÂ-2021 4:04:15
//  Original author: 12850
///////////////////////////////////////////////////////////

#if !defined(EA_3A5E1046_F36D_442f_9B4F_070E38BB44AF__INCLUDED_)
#define EA_3A5E1046_F36D_442f_9B4F_070E38BB44AF__INCLUDED_

#include "COperationPrivilege.h"
#include "CCard.h"
#include "CCardBook.h"
#include "string"
#include "ui_GXNUSEP2101-DWGC-login-20210601-B-Zhy.h"
using namespace std;

class CAccount
{

public:
	CAccount();
	virtual ~CAccount();
	COperationPrivilege *m_COperationPrivilege;
	CCardBook *m_CCardBook;
	Ui_userName loginDialog;


	bool ChangPassword(string OldPassword, string NewPassword);
	bool login(/*string AccountNumber, string Password*/);
	bool Register(string Accountnumber, string Password, string UserName);

	/* Begin - EA generated code for Activities and Interactions */

	void CaccountInteraction();


	/* End - EA generated code for Activities and Interactions */

private:
	string m_AccountNumber;
	string m_Email;
	COperationPrivilege m_OperationPrivilege;
	string m_Password;
	CCard m_PersonalCardInformation;
	string m_UserName;


};
#endif // !defined(EA_3A5E1046_F36D_442f_9B4F_070E38BB44AF__INCLUDED_)
