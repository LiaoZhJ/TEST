///////////////////////////////////////////////////////////
//  CAdmin.h
//  Implementation of the Class CAdmin
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: 12850
///////////////////////////////////////////////////////////

#if !defined(EA_3BE8E214_0354_4897_9841_E984AE0E5D49__INCLUDED_)
#define EA_3BE8E214_0354_4897_9841_E984AE0E5D49__INCLUDED_

#include "COperationPrivilege.h"
#include "CAccount.h"
#include "string"
using namespace std;

class CAdmin
{

public:
	CAdmin();
	virtual ~CAdmin();

	bool addAccount(CAccount Account);
	int alterDefultOfErrorPassword(int NewNumber);
	bool alterPrivilege(CAccount Account);
	bool DeleteAccount(CAccount Account);
	bool lockAccount(CAccount Account);
	bool releaseAccount(CAccount Account);
	int resetAccount(CAccount Account);

private:
	string m_AccountNumber;
	COperationPrivilege m_OperationPrivilege;
	string m_Password;

	/* Begin - EA generated code for Activities and Interactions */

	void CadminInteraction();


	/* End - EA generated code for Activities and Interactions */

};
#endif // !defined(EA_3BE8E214_0354_4897_9841_E984AE0E5D49__INCLUDED_)
