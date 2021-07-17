///////////////////////////////////////////////////////////
//  CCardcase.h
//  Implementation of the Class CCardcase
//  Created on:      09-7ÔÂ-2021 4:04:17
//  Original author: JackLeo
///////////////////////////////////////////////////////////

#if !defined(EA_EB99C659_BAFB_4bf9_9AB5_28220F1C7D46__INCLUDED_)
#define EA_EB99C659_BAFB_4bf9_9AB5_28220F1C7D46__INCLUDED_

#include "CCard.h"
#include "string"
using namespace std;

class CCardcase
{

public:
	CCardcase();
	virtual ~CCardcase();
	CCard *m_CCard;

	bool add(CCardcase Cardcase);
	bool backup(CCardcase Cardcase);
	bool copy(CCardcase Cardcase);
	bool Delete(CCardcase Cardcase);
	void edit(CCardcase Cardcase);
	bool Export(CCardcase Cardcase);
	bool find(CCardcase Cardcase);
	bool import(CCardcase Cardcase);
	bool print(CCardcase Cardcase);
	bool restore(CCardcase Cardcase);
	bool share(CCardcase Cardcase);
	void view(CCardcase Cardcase);

private:
	CCard m_Card;
	string m_Name;

};
#endif // !defined(EA_EB99C659_BAFB_4bf9_9AB5_28220F1C7D46__INCLUDED_)
