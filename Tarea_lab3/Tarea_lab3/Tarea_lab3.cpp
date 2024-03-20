

#include <iostream>
using namespace std;
bool Anio(string anio) {
	bool ANio =0;
	if (anio == "0") {
		bool biciesto = 0;
	}
	else if (anio == "1") {
		bool biciesto = 1;
	}
	else {
		bool biciesto = 0;
	}
	return ANio;
}
//void mas(int** mes, int semana, int dia ) {
//	int n = 1;
//	for (int i = 0;i < semana;i++) {
//		for (int j = 0; j < dia;j++) {
//			mes[i][j] = n;
//			cout << mes[i][j] << " ";
//			n++;
//			if (n >= 30) {
//				cout << "febrero\n";
//				/*nu = 1;*/
//				break;
//			}
//
//		}
//	}
//}

string nombre(int ames) {
	switch (ames)
	{
	case 1:
		 return "Enero";
	case 2:
		return"E1nero";
	case 3:
		return	"Enerow";
	case 4:
		return"Eneroda";
	case 5:
		"Enerod";
	case 6:
		return"Ensseros";
	case 7:
		return"Enerco";
	case 8:
		return"Enerox";
	case 9:
		return"Enerov";
	case 10:
		return"Enerof";
	case 11:
		return"Eneros";
	case 12:
		return"Eneroa";
	default:
		break;
	}
	
}
int contar(int num) {
	switch (num)
	{
	case 1: return num = 31;
	case 2: return num = 31;
	case 3: return num = 31;
	case 4: return num = 31;
	case 5: return num = 31;
	case 6: return num = 31;
	case 7: return num = 31;
	case 8: return num = 31;
	case 9: return num = 31;
	case 10: return num = 31;
	case 11: return num = 31;
	case 12: return num = 31;
	
		
	default:
		break;
	}
}
void matrizM(int** mes, int semana, int dia) {
	int nu = 1;
	
	
	
	
		for (int i = 0; i < semana;i++) {
			for (int j = 0; j < dia;j++) {
				
				cout << mes[i][j] << nombre(**mes) << " ";
				
				/*if (nu == 32) {
					if (mes[i][j] > 33) {


					}
					nu = 1;
					cout << "Enero\n";
					break;

				}
				 else if (mes[i][j] == 29) {
					cout << "febrero\n";
				}*/

				/*nu = 1;*/

			/*else if (nu >= 29 && ver == 1) {

				break;
				ver++;
				mes[i + 1][j] = nu;
				cout << mes[i + 1][j];
			}*/

			}
		}
	}




int main()
{
	int dia, Semanas = 7, Mister = 5;
	int** Mes;
	
	/*int*** Anio;
	Anio = new int**; Mes[12];*/
	Mes = new int* [Semanas];
	cout << "de un dia\n";
	cin >>dia ;
	bool biciesto;
	cout << "El anio es biciesto.(0 no, 1 si)\n";
	string anio;
	cin >> anio;
	//bool(Anio);
	for (int i = 0; i < Semanas;i++) {
		Mes[i] = new int[Mister];
	}
	for (int i = 0; i < Semanas;i++) {
		for (int j = 0; j < Mister; j++) {
			
		}
	}
	matrizM(Mes, Semanas, Mister);
	return 0;
}
