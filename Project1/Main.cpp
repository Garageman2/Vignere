#include <iostream>
#include <string>

void AdvanceLetter(char& Letter)
{
	if (Letter > 96)
	{
		if (Letter == 122)
		{
			Letter = 97;
		}
		else
		{
			Letter++;
		}
	}
	else
	{
		if (Letter == 90)
		{
			Letter = 65;
		}
		else
		{
			Letter++;
		}
	}
}





int main()
{
	std::string Input;
	std::string Output;
	std::string Cipher;

	std::cout << "Enter a string to encode!" << std::endl;
	std::cin >> Input;
	std::cout << "Enter A Code Phrase!" << std::endl;
	std::cin >> Cipher;


	int CipherLetter = 0;
	for (int i = 0; i < Input.length(); i++)
	{
		//this is for each letter in input
		char Letter = Input[i];
	
		if(Letter == 32)
		{
			Output += Letter;
			
		}
		else
		{
			
			for (int j = 0; j < (toupper(Cipher[CipherLetter]) - 65); j++)
			{
				AdvanceLetter(Letter);
			}

			if (CipherLetter == Cipher.length()-1)
			{
				CipherLetter = 0;
			}
			else
			{
				CipherLetter += 1;
			}
		}

		Output+=Letter;

	}

	std::cout << Output << std::endl;

	return 0;
}