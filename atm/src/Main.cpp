#include <iostream>

struct Client;
struct VisaCard;
struct BankBook;

int main()
{

}

struct Client
{
	char Name[20];
	char Address[30];
	int Age;
	long int VisaCardNumber;
	long int BankBookNumber;

	Client* Next = nullptr;
	Client* Prev = nullptr;
};

struct VisaCard
{
	long int CreditNumber;
	short Password;

	VisaCard* Next = nullptr;
	VisaCard* Prev = nullptr;
};

struct BankBook
{

};
