// Main.cpp

#include <iostream>

void setPotion(int count, int* p_HPPotion, int* p_MPPotion);

int main()
{
	int Status[4] = { 0, };
	int& HP = Status[0];
	int& MP = Status[1];
	int& AD = Status[2];
	int& AR = Status[3];

	int Level = 0;

	std::cout << "Set your HP and MP." << std::endl;
	std::cin >> HP >> MP;

	while (HP <= 50 || MP <= 50)
	{
		std::cout << "HP and MP must be over 50. Please try again." << std::endl;

		std::cin >> HP >> MP;
	}

	std::cout << "Set your AD and AR." << std::endl;
	std::cin >> AD >> AR;

	while (AD <= 0 || AR <= 0)
	{
		std::cout << "AD and AR must be over 0. Please try again." << std::endl;

		std::cin >> AD >> AR;
	}

	std::cout << "Upgrade your status." << std::endl;
	std::cout << "1.HP UP / 2. MP UP / 3. AD UP / 4. AR UP / 5. Current Stat / 6. Level UP / 0. Exit" << std::endl;

	int UserSelect;
	std::cin >> UserSelect;

	while (1)
	{
		switch (UserSelect)
		{
		case 1:
			HP += 5;
			std::cout << "Your HP has been increased." << std::endl;
			break;

		case 2:
			MP += 5;
			std::cout << "Your MP has been increased." << std::endl;
			break;

		case 3:
			AD += 1;
			std::cout << "Your AD has been increased." << std::endl;
			break;

		case 4:
			AR += 1;
			std::cout << "Your AR has been increased." << std::endl;
			break;

		case 5:
			std::cout << "HP: " << HP << "  " << "MP: " << MP << "  " << "AD: " << AD << "  " << "AR: " << AR << "  " << "Level: " << Level << std::endl;
			break;

		case 6:
			Level += 1;
			std::cout << "Your Level has been increased." << std::endl;
			break;

		case 0:
			break;

		default:
			std::cout << "You should choose among 0~6." << std::endl;
			break;
		}


		if (UserSelect != 0)
		{
			std::cin >> UserSelect;
		}

		else
		{
			break;
		}
	}

	std::cout << "You have been spawned." << std::endl;

	int Potion[4] = { 0, };
	int& HPPotion = Potion[0];
	int& MPPotion = Potion[1];
	int& ADPotion = Potion[2];
	int& ARPotion = Potion[3];

	int* p_HPPotion = &Potion[0];
	int* p_MPPotion = &Potion[1];

	setPotion(5, p_HPPotion, p_MPPotion);

	std::cout << "You can drink potions now." << std::endl;
	std::cout << "1.HP Potion / 2. MP Potion / 3. AD Potion / 4. AR Potion / 5. Current Stat / 6. Level UP / 0. Exit" << std::endl;

	int PotionSelect;
	std::cin >> PotionSelect;

	while (1)
	{
		switch (PotionSelect)
		{
		case 1:
			if (HPPotion > 0)
			{
				HP += 20;
				HPPotion--;
				std::cout << "You used a HP Potion." << std::endl;
				break;
			}
			else
			{
				std::cout << "You don't have enough potion." << std::endl;
				break;
			}
		case 2:
			if (MPPotion > 0)
			{
				MP += 20;
				MPPotion--;
				std::cout << "You used a MP Potion." << std::endl;
				break;
			}
			else
			{
				std::cout << "You don't have enough potion." << std::endl;
				break;
			}
		case 3:
			if (ADPotion > 0)
			{
				AD *= 2;
				ADPotion--;
				std::cout << "You used a AD Potion." << std::endl;
				break;
			}
			else
			{
				std::cout << "You don't have enough potion." << std::endl;
				break;
			}
		case 4:
			if (ARPotion > 0)
			{
				AR *= 2;
				ARPotion--;
				std::cout << "You used a AR Potion." << std::endl;
				break;
			}
			else
			{
				std::cout << "You don't have enough potion." << std::endl;
				break;
			}

		case 5:
			std::cout << "HP: " << HP << "  " << "MP: " << MP << "  " << "AD: " << AD << "  " << "AR: " << AR << std::endl;
			break;

		case 6:
			Level++;
			ADPotion++;
			MPPotion++;
			ADPotion++;
			ARPotion++;
			std::cout << "Level UP! You'll get a one potion each." << std::endl;
			break;

		case 0:
			break;

		default:
			std::cout << "You should choose among 0~6." << std::endl;
			break;
		}

		if (PotionSelect != 0)
		{
			std::cin >> PotionSelect;
		}
		else
		{
			return 0;
		}
	}


	return 0;
}

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	std::cout << "Potion has been given." << std::endl;

	*p_HPPotion = count;
	*p_MPPotion = count;

	std::cout << "HPPotion: " << *p_HPPotion << std::endl;
	std::cout << "MPPotion: " << *p_MPPotion << std::endl;
	std::cout << "ADPotion: 0" << std::endl;
	std::cout << "ARPotion: 0" << std::endl;


	return;
}