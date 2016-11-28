#include "stdafx.h"
#include "Steck.h"


CSteck::CSteck()
{
}

void CSteck::Push(int push)
{
	if (steck == nullptr || count_elenent >= idSteck)
	{
		count_elenent += 10;
		auto newArr = new int[count_elenent];
		memcpy(newArr, steck, idSteck * sizeof(steck));
		delete[] steck;
		steck = new int[count_elenent];
		memcpy(steck, newArr, idSteck * sizeof(steck));
		delete[] newArr;
	} 
	steck[idSteck++] = push;
}

CSteck::~CSteck()
{
	delete[] steck;
	count_elenent = 0;
	idSteck = 0;
}

bool CSteck::pull(int& pull)
{

	if (idSteck <= 0)
	{
		return false;
	}
	else
	{
		pull = steck[--idSteck];
		return true;
	}
}