///////////////////////////////////////////////////////////
//  COperationPrivilege.h
//  Implementation of the Class COperationPrivilege
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: 12850
///////////////////////////////////////////////////////////

#if !defined(EA_9D6C01FD_66B8_4b9f_8B54_72882F20EB84__INCLUDED_)
#define EA_9D6C01FD_66B8_4b9f_8B54_72882F20EB84__INCLUDED_

#include "string"
using namespace std;

class COperationPrivilege
{

public:
	COperationPrivilege();
	virtual ~COperationPrivilege();

private:
	bool m_addPrivilege;
	bool m_deletePrivilege;
	bool m_editPrivilege;
	bool m_findPrivilege;
	bool m_viewPrivilege;

};
#endif // !defined(EA_9D6C01FD_66B8_4b9f_8B54_72882F20EB84__INCLUDED_)
