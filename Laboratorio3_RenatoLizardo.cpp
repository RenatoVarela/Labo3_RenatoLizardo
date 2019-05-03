#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 
#include <sstream>



using namespace std;


int MCD(int , int);
void Ejercicio2(int*,int,int);

int* iniArray(int);
void freeArray(int*);
string Guerras(string);
//void buscar(string, vector<string>);
void MenuGuerra();
void eliminar(vector<string>);
//void listar(vector<string>);



int main(){

	int size = 25;
	bool salir = false;
        int* arreglo = iniArray(size);


while(salir == false){
	int opcion, num1=0 , num2=0, residuo = 0;
	cout<<"ingrese una de las siguientes opciones: " <<endl
	     <<"1) Para el Maximo COmun divisor " <<endl
	     <<"2) Para el Ejercicio 2"<<endl
	     <<"3) Para el Ejercicio 3"<<endl;
	cin>> opcion;



	switch(opcion){

		case 1:

			cout<<"ingrese el primer numero" <<endl;
			cin >> num1;


			cout<<"Ingrese el segundo numero"<<endl;
			cin >> num2;

			residuo = MCD(num1,num2);

			cout<<"EL maximo comun divisor "<< residuo;


			break;

	        case 2:

			 cout<<"ingrese el numero" <<endl;
                        cin >> num1;


			Ejercicio2(arreglo,size,num1);


			freeArray(arreglo);


			break;


	         case 3:

			MenuGuerra();


			break;


		 default:

			salir = true;

			break;



	}

}

	return 0;
}



int MCD(int x, int y){
 
	
    if(y==0){
        return x;
    }
    else{

	//cout<<x%y <<endl;
   
	return MCD(y, x%y);
    } 
}




int* iniArray(int size){
        int* retval = new int[size];

	retval[0] = 2;
	retval[1] = 3;

	retval[2] = 5;
        retval[3] = 7;

	retval[4] = 11;
        retval[5] = 13;

	retval[6] = 17;
        retval[7] = 19;

        retval[8] = 23;
        retval[9] = 29;

        retval[10] = 31;
        retval[11] = 37;
        retval[12] = 41;
        retval[13] = 43;

        retval[14] = 47;
        retval[15] = 53;

        retval[16] = 59;
        retval[17] = 61;

        retval[18] = 67;
        retval[19] = 71;

        retval[20] = 73;
        retval[21] = 79;

        retval[22] = 83;
        retval[23] = 89;

        retval[24] = 97;



        return retval;

}


void Ejercicio2 (int* array,int size,int numero){
	int total = 1;
	int residuo = 0;
	string Final = "";

        
        for(int i = 0; i < size; i++){


		if(numero%array[i]==0){

			total = 1;
			
			numero = numero/array[i];

			//cout<<numero<<endl;
	
	         	cout<<array[i];;
			
			
			
		
		
			while(numero%array[i] == 0){

			         numero = numero/array[i];

			          total++;
				
			}

			

		cout<<"^"<<total<<endl;



		}
                

        }

//	cout<<Final <<endl;

       
}



void freeArray(int* Array){
        delete[] Array;

}



string Guerras(){

//	Una guerra posee código, nombre, año de inicio, año de fin, países participantes y continente.

	
	string codigo;
	string nombre;
	string ano_inicio;
	string ano_final;
	string paises;
	string continente;

	stringstream info1;

	

	cout<<"Ingrese el codigo de la guerra "<<endl;
	cin >> codigo;

	cout<<"INgrese el nombre de la guerra"<<endl;
	cin >> nombre;

	cout<<"INgrese el ano de inicio"<<endl;
	cin>> ano_inicio;

	cout<< "Ingrese el ano del final" <<endl;

	cin>> ano_final;

	cout<<"INgrese los paises involucrados"<<endl;
	cin>>paises;

	cout<<"INgrese el continente"<<endl;
	cin>>continente;


   info1 << codigo<<";"<<nombre<<";"<<ano_inicio<<";"<<ano_final<<";"<<paises<<";"<<continente;

	   string info = info1.str();

//	cout<< info;

	return info;
}


/*
void buscar(string codigo, vector<string> informacion){
 
   for(int j = 0; j < informacion.size() ; j++){   
    vector <string> tokens; 
      
    stringstream info(informacion[j]); 
      
     
      
 
    for(int i = 0; i < tokens.size(); i++){ 
        cout << tokens[i] << '\n'; 

    }

   }


}
*/



/*
void eliminar(vector<string> informacion){
	int posicion = 0;

	cout<<"ingrese la posicion que desea eliminar"<<endl;
	cin >> posicion;

	informacion.erase(informacion.begin()+posicion);

	cout<<"se elimino";



}
*/



/*
void listar(vector<string> informacion){


	for(int j = 0; j < informacion.size() ; j++){
		cout<<informacion[j]<<endl;

	}
}

*/



void MenuGuerra(){

	int posicion = 0;

	vector<string> informacion;
	int opcion = 0;
	string codigo;
	string guerra = "";

	cout<<"Insertar Guerra"<<endl
		<<"Buscar Guerra"<<endl
		<<"ELiminar guerra"<<endl
		<<"Listar guerras"<<endl;
	cin >> opcion;


	switch(opcion){

		case 1:

			guerra = Guerras();
	
			cout <<guerra <<endl;


			informacion.push_back(Guerras());



			break;



	          case 2:


	

			break;




		  case 3:

		

	       		 cout<<"ingrese la posicion que desea eliminar"<<endl;
      		         cin >> posicion;

      	 		 informacion.erase(informacion.begin()+posicion);

       			 cout<<"se elimino";

			break;




		  case 4:
		         
			
			cout<<informacion.size()<<endl;


			for(int j = 0; j < informacion.size() ; j++){
               		 cout<<informacion[j]<<endl;

       			 }

			break;



	}	/*
Insertar guerra
Buscar guerra
Eliminar guerra
Listar guerras
a. Listar todo
b. Listar 
*/
}






