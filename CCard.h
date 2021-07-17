///////////////////////////////////////////////////////////
//  CCard.h
//  Implementation of the Class CCard
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: 12850
///////////////////////////////////////////////////////////

#if !defined(EA_E904CC5F_FDD4_43a5_A7D8_68BDDB36F861__INCLUDED_)
#define EA_E904CC5F_FDD4_43a5_A7D8_68BDDB36F861__INCLUDED_

#include "string"
using namespace std;

class CCard
{

public:
	CCard();
	virtual ~CCard();

	bool add(CCard Card);
	bool copy(CCard Card);
	bool Delete(CCard Card);
	bool edit(CCard Card);
	bool Export(CCard Card);
	bool import(CCard Card);
	bool replace(CCard Card);
	bool restore(CCard Card);
	bool share(CCard Card);
	bool view1(CCard Card);

private:
	string m_Address;
	int m_Age;
	string m_ElectronicSocialNumber;
	string m_Email;
	string m_HeadPortrait;
	string m_Name;
	string m_Phone;
	string m_Position;
	string m_Sex;
	string m_title;

};
#endif // !defined(EA_E904CC5F_FDD4_43a5_A7D8_68BDDB36F861__INCLUDED_)
