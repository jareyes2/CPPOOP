bank: account.o checkingaccount.o savingsaccount.o driver.o
	g++ -o bank driver.o account.o checkingaccount.o savingsaccount.o
driver.o: driver.cpp account.h checkingaccount.h savingsaccount.h 
	g++ -c driver.cpp
account.o: account.cpp account.h
	g++ -c account.cpp
checkingaccount.o: checkingaccount.cpp checkingaccount.h
	g++ -c checkingaccount.cpp
savingsaccount.o: savingsaccount.cpp savingsaccount.h
	g++ -c savingsaccount.cpp
