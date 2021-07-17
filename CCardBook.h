///////////////////////////////////////////////////////////
//  CCardBook.h
//  Implementation of the Class CCardBook
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: JackLeo
///////////////////////////////////////////////////////////

#if !defined(EA_01789144_FDD1_4520_9D39_CBC309B551FA__INCLUDED_)
#define EA_01789144_FDD1_4520_9D39_CBC309B551FA__INCLUDED_

#include "CCardcase.h"
#include "string"
using namespace std;

class CCardBook
{

public:
	CCardBook();
	virtual ~CCardBook();
	CCardcase *m_CCardcase;

	void View();

private:
	/*CAccount m_Belong;*/
	CCardcase m_Cardcase;
	string m_Name;

};
#endif // !defined(EA_01789144_FDD1_4520_9D39_CBC309B551FA__INCLUDED_)
