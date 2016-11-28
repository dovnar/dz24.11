#pragma once
class CSteck
{
protected:
	int* steck = nullptr;
	size_t count_elenent = 0;
	size_t idSteck = 0;
public:
	void Push(int a);
	bool pull(int& pull);
	CSteck();

	~CSteck();
};

