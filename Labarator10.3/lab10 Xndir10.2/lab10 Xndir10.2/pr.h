#pragma once
// ************************* HEADER FILE ******************
// deklarativ haytararutyunner 
struct Journal
{
	char name[50];
	unsigned val;
	float price;
};

// funci prototipna
float func(Journal jour[]);