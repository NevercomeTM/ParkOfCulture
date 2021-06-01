#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;


	class Ticket {
	public:
	int price;
	bool isValid;
	Ticket() {
		price = rand()%100;
		isValid = true;
	}
	};
	class ParkOfCulture;
	class Visitor {
	public:
		string name;
		Ticket ticket;
		Visitor(string newname) {
			name = newname;
			ticket.price = 0;
			ticket.isValid = false;
		}
		void Enter(ParkOfCulture park);
		void Leave();
		void BuyTicket(ParkOfCulture park);
		void Litter(ParkOfCulture park);
		void Pay(ParkOfCulture park, int cortnumber);
		void EnjoyAttractions(ParkOfCulture park);
		void GetFood(ParkOfCulture park);
	};
	class Worker
	{
	public:
		string occupation;
	};
	class ParkOfCulture {
	public:
		  ParkOfCulture() {
		  }
		  class AtrSys {
		  public:
			  class Attraction {
			  private:
				  string name;
			  public:
				  Attraction()
				  {
					  name = "empty";
				  }
				  Attraction(string nameofattraction) {
					  name = nameofattraction;
				  }
				  void RideVisitor(Visitor &visitor) {
					  cout << "You can enjoy your life in " + name +", " + visitor.name<<endl;
				  }
				  
			  };
			  class TicketWindow {
			  private:
				  int id;
			  public:

				  TicketWindow()
				  {
					  id = rand() % 1000;
				  }
				  TicketWindow(int newid) {
					  id = newid;
				  }
				  void SellTicket(Visitor &visitor){
					  visitor.ticket = Ticket();
					  cout << "Here is your ticket\n";

				  }

			  };
			  Attraction attractions[10];
			  TicketWindow ticketwindows[4];
			  AtrSys()
			  {
				  for (int i = 0; i < 10; i++) {
					  attractions[i] = Attraction("Attraction"+to_string(i));
				  }
			  }
			  bool CheckTicket(Ticket* ticket) {
				  if (ticket->isValid) {
					  cout << "Enjoy riding\n";
					  ticket->isValid = false;
					  return true;
				  }
				  else {
					  cout << "Your ticket is not valid\n";
					  return false;
				  }
			  }
		  };
		  class FoodSys {
		  public:
			  class FoodCort {
			  private:
				  int id;
				  int supplies;
				  Worker Seller;
			  public:
				  FoodCort() {
					  id = rand() % 1000;
					  supplies = rand() % 100;
					  Worker Sell;
					  Sell.occupation = "FoodWorker";
					  Seller = Sell;
				  }
				  bool TakePayment() {
					  cout <<Seller.occupation+ " is saying : Thank you for your visis, come again\n";
					  return true;
				  }
				  void SellFood(int numberofsold) {
					  supplies -= numberofsold;
					  ReplenishSupplies();
				  }
				  void ReplenishSupplies() {
					  if (supplies < 10) {
						  supplies += 50;
					  }
				  }
			  };
			  FoodSys() {
				  for (int i = 0; i < 10; i++) {
					  foodcorts[i] = FoodCort();
				  }
			  }
			  FoodCort foodcorts[10];
		  };
		  class RadioSys {
			  string speakers[6];
			  string songs[10];
			  string announsments[5];
			  Worker DJ;
		  public:
			  RadioSys() {
				  speakers[0] = "JBL";
				  speakers[1] = "JBL1";
				  speakers[2] = "JBL2";
				  speakers[3] = "JBL3";
				  speakers[4] = "JBL4";
				  speakers[5] = "JBL5";
				  songs[0] = "song";
				  songs[1] = "song1";
				  songs[2] = "song2";
				  songs[3] = "song3";
				  songs[4] = "song4";
				  songs[5] = "song5";
				  songs[6] = "song6";
				  songs[7] = "song7";
				  songs[8] = "song8";
				  songs[9] = "song9";
				  announsments[0] = "announsment";
				  announsments[1] = "announsment1";
				  announsments[2] = "announsment2";
				  announsments[3] = "announsment3";
				  announsments[4] = "announsment4";
				  Worker dj;
				  dj.occupation = "dj";
				  DJ = dj;

			  }
			  void PlayMusic() {
				  cout << "The song is now playing : " + songs[rand()%10] << endl;
			  }
			  void PlayAnnounsment() {
				  cout << "Everybody, here is announsment : " + announsments[rand()%5] << endl;
			  }
		  };
		  class CleanSys {
		  private:
			  Worker cleaners[5];
		  public:
			  bool isClean;
			  CleanSys() {
				  Worker Cleaner;
				  Cleaner.occupation = "cleaner";
				  cleaners[0] = Cleaner;
				  cleaners[1] = Cleaner;
				  cleaners[2] = Cleaner;
				  cleaners[3] = Cleaner;
				  cleaners[4] = Cleaner;
				  isClean = false;
			  }
			  void CleanPark() {
				  isClean = true;
				  cout << "Cleaning.";
				  Sleep(1000);
				  cout << ".";
				  Sleep(1000);
				  cout << ".";
				  Sleep(1000);
				  cout << "Park has been cleaned\n";
			  }
			  bool IsClean() {
				  if (!isClean) {
					  cout << "Park is dirty\n";
					  return false;
				  }
				  else cout << "Park is clean\n";
				  return true;
			  }
		  };
		  class SecSys {
		  public:
			  class GuardSys {
			  private:
				  Worker guards[5];
			  public:
				  GuardSys() {
					  Worker Guard;
					  Guard.occupation = "Guard";
					  guards[0] = Guard;
					  guards[1] = Guard;
					  guards[2] = Guard;
					  guards[3] = Guard;
					  guards[4] = Guard;
				  }
				  void patrol() {
					  cout << "Guards is on duty\n";
				  }
				  void PunishCriminal() {
					  cout <<guards[rand() %5].occupation +" is saying : Stop right there, criminal ****\n";
				  }

			  };
			  class SurvelianceSys {
				  string cameras[10];
			  public:
				  SurvelianceSys() {
					  cameras[0] = "Nicon";
					  cameras[1] = "Nicon1"; 
					  cameras[2] = "Nicon2"; 
					  cameras[3] = "Nicon3"; 
					  cameras[4] = "Nicon4"; 
					  cameras[5] = "Nicon5"; 
					  cameras[6] = "Nicon6"; 
					  cameras[7] = "Nicon7"; 
					  cameras[8] = "Nicon8"; 
					  cameras[9] = "Nicon9"; 
				  }
				  void Watch() {
					  for (int i = 0; i < 10; i++)
					  {
						  cout << cameras[i] + " is watching\n";
						  Sleep(500);
					  }
				  }
			  };
			  class LockingSys {
			  public:
				  bool isLocked;
				  LockingSys() {
					  isLocked = true;
				  }
				  void lock() {
					  isLocked = true;
					  cout << "Gate is locked\n";
				  }
				  void open() {
					  isLocked = false;
					  cout << "Gate is opened\n";
				  }
			  };
			  GuardSys guardsystem;
			  SurvelianceSys surveliancesystem;
			  LockingSys lockingsystem;
			  SecSys() {
				  guardsystem = GuardSys();
				  surveliancesystem = SurvelianceSys();
				  lockingsystem = LockingSys();
			  }
			  void ActivateCameras() {
				  cout << "Activating";
				  Sleep(1000);
				  cout << ".";
				  Sleep(1000);
				  cout << ".";
				  Sleep(1000);
				  cout << ".\n";
				  cout << "Activated\n";
				  surveliancesystem.Watch();
			  }

		  };

	public:
		SecSys securitysystem;
		AtrSys attractionsystem;
		FoodSys foodsystem;
		RadioSys radiosystem;
		CleanSys cleaningsystem;
	};
	
		
 void	Visitor:: Enter(ParkOfCulture park) {
			if (!(park.securitysystem.lockingsystem.isLocked)) {
				cout << "Visitor " +name+ " entered successfully\n";
			}
			else cout << "It is not working time\n";
		}
		void Visitor :: Leave() {
			cout << "Visitor " + name +" is leaving\n";
		}
		void Visitor :: BuyTicket(ParkOfCulture park) {
			cout << "Visitor " +name +" wants to buy a ticket\n";
			int ticketwindownumber = rand() % 4;
			park.attractionsystem.ticketwindows[ticketwindownumber].SellTicket(*this);
			Pay(park, ticketwindownumber);
		}
		void Visitor :: Pay(ParkOfCulture park, int cortnumber) {
			if (rand() % 2) {
				cout << name + " is saying: Shut up and take my money\n";
				park.foodsystem.foodcorts[cortnumber].TakePayment();
			}
			else if (rand() % 2) {
				park.securitysystem.guardsystem.PunishCriminal();
				cout << name+ " is saying :I will never steal again\n";
			}
			else cout << name + " is saying : Hehehe, easy\n";

		}
		void Visitor:: GetFood(ParkOfCulture park) {
			cout << name + " is saying: I want some food\n";
			int cortnumber = rand() % 10;
			park.foodsystem.foodcorts[cortnumber].SellFood(rand() % 10);
			Pay(park, cortnumber);
		}
		void Visitor :: Litter(ParkOfCulture park) {
			cout << name + " is saying: Meh, nobody will see that\n";
			park.cleaningsystem.isClean = false;
			if (rand() % 2) {
				park.securitysystem.guardsystem.PunishCriminal();
				cout << name + " is saying: I will never litter again\n";
			}

		}
		void Visitor :: EnjoyAttractions(ParkOfCulture park) {
			cout << name + " saying: I want some attractions\n";
			if (park.attractionsystem.CheckTicket(&ticket) == true) park.attractionsystem.attractions[rand() % 10].RideVisitor(*this);
			else  cout << name + " saying: but i dont have a ticket\n";
		}
		



int main() {
	ParkOfCulture Mariyin;
	Visitor Oleg("Oleg");
	Visitor Vova("Vova");
	Visitor Dima("Dima");
	bool isContinue = true;
	while (isContinue) {
		cout << "Day is starting\n";
		Mariyin.securitysystem.guardsystem.patrol();
		Mariyin.securitysystem.ActivateCameras();
		Mariyin.securitysystem.lockingsystem.open();
		Oleg.Enter(Mariyin);
		Sleep(500);
		Vova.Enter(Mariyin);
		Sleep(500);
		Dima.Enter(Mariyin);
		Sleep(500);
		for (int i = 0; i < 16; i ++)
		{
			int event = rand() % 5;
			int guest = rand() % 3;
			if (event == 0) Mariyin.radiosystem.PlayAnnounsment();
			else if (event == 1) {
				if (guest == 0) {
					Oleg.BuyTicket(Mariyin);
				}
				else if (guest == 1) {
					Vova.BuyTicket(Mariyin);
				}
				else Dima.BuyTicket(Mariyin);
			}
			else if (event == 2) {
				if (guest == 0) {
					Oleg.GetFood(Mariyin);
				}
				else if (guest == 1) {
					Vova.GetFood(Mariyin);
				}
				else Dima.GetFood(Mariyin);
			}
			else if (event == 3) {
				if (guest == 0) {
					Oleg.Litter(Mariyin);
				}
				else if (guest == 1) {
					Vova.Litter(Mariyin);
				}
				else Dima.Litter(Mariyin);
			}
			else {
				if (guest == 0) {
					Oleg.EnjoyAttractions(Mariyin);
				}
				else if (guest == 1) {
					Vova.EnjoyAttractions(Mariyin);
				}
				else Dima.EnjoyAttractions(Mariyin);
			}
			Sleep(500);
			Mariyin.radiosystem.PlayMusic();
			Sleep(500);
			if (i % 4 == 0) {
				if ((!Mariyin.cleaningsystem.IsClean())) Mariyin.cleaningsystem.CleanPark();
			}
		}
		Oleg.Leave();
		Vova.Leave();
		Dima.Leave();
		Mariyin.securitysystem.lockingsystem.lock();
		cout << "Day is over\n";
		cout << " If you want to see another day, press 1, else 0\n";
		int ischoice = 0;
		cin >> ischoice;
		if (ischoice == 0) {
			isContinue = false;
		}
	}
	
	return 0;
}