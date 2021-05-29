#include <iostream>
#include <fstream>

using namespace std;

unsigned short AL, BL, CL, DL;
unsigned short AH, BH, CH, DH;
unsigned short AX, BX, CX, DX;
unsigned short SI, DI, BP, SP;


void show_registerOutput() {
	cout  << "AL: " << AL << " ";
	cout << "BL: " << BL << " ";
	cout << "CL: " << CL << " ";
	cout << "DL: " << DL << " ";
	cout << "| " << "AX: " << AX << " ";
	cout << "BX: " << BX << " "; 
	cout << "CX: " << CX << " ";
	cout << "DX: "<< DX <<  " ";
	cout << "| " << "AH: " << AH << " ";
	cout << "BH: " << BH << " "; 
	cout << "CH: " << CH << " ";
	cout << "DH: "<< DH << " ";
	cout << "| " << "SI: " << SI << " ";
	cout << "DI: " << DI << " "; 
	cout << "BP: " << BP << " ";
	cout << "SP: "<< SP << endl;
}

int IP = 0;
unsigned char memory[0x100];

int main() { 
	int size;
	ifstream file;
	file.open("EMULATOR.COM", ios::in | ios::binary| ios::ate);
	if (!file) {
		cout << "The program cannot read the file. Try again..." << endl;
	}
	else {
		size = file.tellg();
		file.seekg(0, ios::beg);
		file.read((char*)memory, size);
		file.close();
		cout << "The program detected the file." << endl;

		cout << "|-------------The following program updates the all the 16 registers as it runs----------------|" << endl;
		while(1) {
			switch (memory[IP++]) {
			
			//Assigning numbers to each registers
			case 0xB0: AL = memory[IP]; IP++; cout << "AL = "<< AL << endl; break;
			case 0xB3: BL = memory[IP]; IP++; cout << "BL = "<< BL << endl; break;
			case 0xB1: CL = memory[IP]; IP++; cout << "CL = "<< CL << endl; break;
			case 0xB2: DL = memory[IP]; IP++; cout << "DL = "<< DL << endl; break;
			
			case 0xB8: AX = memory[IP]; IP++; cout << "AX = " << AX << endl; break;
			case 0xBB: BX = memory[IP]; IP++; cout << "BX = " << BX << endl; break;
			case 0xB9: CX = memory[IP]; IP++; cout << "CX = " << CX << endl; break;
			case 0xBA: DX = memory[IP]; IP++; cout << "DX = " << DX << endl; break;
			
			case 0xB4: AH = memory[IP]; IP++; cout << "AH = " << AH << endl; break;
			case 0xB7: BH = memory[IP]; IP++; cout << "BH = " << BH << endl; break;
			case 0xB5: CH = memory[IP]; IP++; cout << "CH = " << CH << endl; break;
			case 0xB6: DH = memory[IP]; IP++; cout << "DH = " << DH << endl; break;

			case 0xBE: SI = memory[IP]; IP++; cout << "SI = " << SI << endl; break;
			case 0xBF: DI = memory[IP]; IP++; cout << "BF = " << DI << endl; break;
			case 0xBD: BP = memory[IP]; IP++; cout << "BD = " << BP << endl; break;
			case 0xBC: SP = memory[IP]; IP++; cout << "SP = " << SP << endl; break;

			//Cases for updating the registers	
			case 0x02:
				if(memory[IP] == 0xC0) {
					AL = AL + AL; IP++;
					cout << "AL = AL + AL = " << AL << endl;
					break;
				}
				if (memory[IP] == 0xDB) {
					BL = BL + BL; IP++;
					cout << "BL = BL + BL = " << BL << endl;
					break;
				}
				if (memory[IP] == 0xC9) {
					CL = CL + CL; IP++;
					cout << "CL = CL + CL = " << CL << endl;
					break;
				}
				if (memory[IP] == 0xD2) {
					DL = DL + DL;IP++;
					cout << "DL = DL + DL = " << DL << endl;
					cout << "Updating AL, BL, CL, DL..." << endl;
					show_registerOutput();
					break;
				}
				if (memory[IP] == 0xE4) {
					AH = AH + AH; IP++;
					cout << "AH = AH + AH = " << AH << endl;
					break;
				}
				if (memory[IP] == 0xFF) {
					BH = BH + BH; IP++;
					cout << "BH = BH + BH = " << BH << endl;
					break;
				}
				if (memory[IP] == 0xED) {
					CH = CH + CH; IP++;
					cout << "CH = CH + CH = " << CH << endl;
					break;
				}
				if (memory[IP] == 0xF6) {
					DH = DH + DH; IP++;
					cout << "DH = DH + DH = " << DH << endl;
					cout << "Updating AH, BH, CH, DH..." << endl;
					show_registerOutput();
					break;
				}
			case 0x03:
				if (memory[IP] == 0xC0) {
					AX = AX + AX; IP++;
					cout << "AX = AX + AX = " << AX << endl;
					break;
				}
				if (memory[IP] == 0xDB) {
					BX = BX + BX; IP++;
					cout << "BX = BX + BX = " << BX << endl;
					break;
				}
				if (memory[IP] == 0xC9) {
					CX = CX + CX; IP++;
					cout << "CX = CX + CX = " << CX << endl;
					break;	
				}
				if (memory[IP] == 0xD2){
					DX = DX + DX;
					cout << "DX = DX + DX = " << DX << endl;
					cout << "Updating AX, BX, CX, DX..." << endl;
					show_registerOutput();
					break;
				}
				if (memory[IP] == 0xF6) {
					SI = SI + SI; IP++;
					cout << "SI = SI + SI = " << SI <<endl;
					break;
				}
				if (memory[IP] == 0xFF) {
					DI = DI + DI; IP++;
					cout << "DI = DI + DI = " << DI << endl;
					break;
				}
				if (memory[IP] == 0xED) {
					BP = BP + BP; IP++;
					cout << "BP = BP + BP = " << BP << endl;
					break;
				}
				if (memory[IP] == 0xE4) {
					SP = SP + SP; IP++;
					cout << "SP = SP + SP = " << SP << endl;
					cout << "Updating SI, DI, BP, SP..." << endl;
					show_registerOutput();
					break;
				}
			
			//Case for performing substraction on the selected registers. 
			case 0x2C:
				cout << endl; cout << "|---------------Performing Substraction on the updated registers---------------|" << endl; cout << endl;
				show_registerOutput(); 
				BL = BL - AL; IP++;
				cout << "BL = BL - AL = " << BL << endl;
				CL = CL - BL; IP++;
				cout << "CL = CL - BL = " << CL << endl;
				DL = DL - CL; IP++;
				cout << "DL = DL - CL = " << DL << endl;
				BX = BX - BL; IP++;
				cout << "BX = BX - BL = " << BX << endl;
				CX = CX - AH; IP++;
				cout << "CX = CX - AH = " << CX << endl;
				DX = DX - BH; IP++;
				cout << "DX = DX - BH = " << DX << endl;
				CH = CH - DI; IP++;
				cout << "CH = CH - DI = " << CH << endl;
				BP = SP - BP; IP++;
				cout << "BP = SP - BP = " << BP << endl;
				SP = BH - AH;  IP++;
				cout << "SP = BH - AH = " << SP << endl;
				DI = CX - SI;  IP++;
				cout << "DI = CX - SI = " << DI << endl;
				SI = AL - BX;  IP++;
				cout << "SI = AL - BX = " << SI << endl;
				cout << "|--------After performing subtractions above. The new values of the register are:----------|" << endl;
				show_registerOutput(); 
				break;
			case 0x20: exit(0); break;
			}
		}
	}
	return 0;	
}