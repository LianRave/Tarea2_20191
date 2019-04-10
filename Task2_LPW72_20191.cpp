/* TAREA 2                                               *
*  CURSO: LENGUAJES DE PROGRAMACIÓN - LPW72 GRUPO 1      *
*  DOCENTE: JUAN CAMILO CORREA CHICA                     *
*  INSTITUTO TECNOLÓGICO METROPOLITANO                   *
*  FECHA MÁXIMA DE ENTREGA: ABRIL 16/2019 - 11:59AM      */

#include<iostream>
#include<string>
#include<cmath>


using namespace std;

/* 1. Un cuadrado magico es un arreglo bidimiensional de NxN que se caracteriza porque la suma de los elementos de sus filas,
	de sus columnas y de sus diagonales (las dos diagonales) es igual, es decir, la suma de los elementos de la fila 1 tiene que
	ser igual a la suma de los elementos de la columna 3 y por ende igual a la suma de los elementos de la diagonal 1 y la diagonal 2
	
	Elabore una funcion que verifique que un arreglo de dimensiones 8x8 (magic_square) es un cuadrado magico, debe verificar la suma de 
	los elementos de cada una de las filas, la suma de los elementos de cada una de las columnas y la suma de los elementos de las dos
	diagonales. La funcion debe retornar un valor entero que es 0 si el arreglo no es magico y 1 si es magico. La funcion debe recibir
	como parametro de entrada un arreglo de tipo entero de dimensiones 8x8. La funcion debe llamarse checkMagicArray y debe declararla
	antes de la funcion main y debe definirla despues de la funcion main*/
		
	int magic_square[8][8] = {{64,2,3,61,60,6,7,57},{9,55,54,12,13,51,50,16},{17,47,46,20,21,43,42,24},{40,26,27,37,36,30,31,33},{32,34,35,29,28,38,39,25},{41,23,22,44,45,19,18,48},{49,15,14,52,53,11,10,56},{8,58,59,5,4,62,63,1}};
	
	int checkMagicArray (int my_array[][8]);

/* 2. Elabore una funcion que verifica que una fecha sea ingresada correctamente. La fecha se ingresa como una variable del tipo de la 
	estructura Calendario (esta estructura es lo que se conoce como un campo de bits ya que cada miembro de la estructura comparte cierto
	numero de bits de una misma variable miembro de la estructura). 
	
	-Se debe verificar que el dato ingresado en el campo "dia" no sea menor a 1 ni mayor a 31
	-Se debe verificar que el dato ingresado en el campo "mes" no sea menor a 1 ni mayor a 12
	-Se debe verificar que los meses de abril, junio, septiembre y noviembre no tengan más de 30 días
	-Se debe verificar que los meses de enero, marzo, mayo, julio, agosto, octubre y diciembre no tengan más de 31 días
	-Se debe verificar que el mes de febrero no tenga mas de 28 dias, a excepcion de cuando el año sea bisiesto y debe tener 29
	-Se debe verificar que el campo "anio" no sea menor a 0 ni mayor 127. Los años se cuentan a partir del año 2000 que corresponde
	al año 0 y así sucesivamente. Por ejemplo para ingresar el año 2019 se debe ingresar un 19 en el campo anio.
	
	Verificar año bisisesto:
	-Debe verificar si el año ingresado es divisible por 4, luego debe verificar si es divisible por 100.
	    -Si es divisible por 100 entonces debe verificar que tambien sea divisible por 400 para que sea bisiesto, sino no es bisiesto
	-Si es divisible por 4 y no es divisible por 100 entonces es bisiesto
	
	La funcion debe retornar un dato booleano que es 1 si la fecha es correcta o 0 en caso contrario
	La funcion debe llamarse checkDate y recibir como parametro de entrada una variable del tipo de la estructura Calendario
	Debe declarar la funcion checkDate antes de la funcion main y debe definirla despues de la funcion main*/
	
struct Calendario{
  unsigned short int dia:5; //5 bits de una variable unsigned short
  unsigned short int mes:4; //4 bits de una variable unsigned short
  unsigned short int anio:7; //7 bits de una variable unsigned short
};

bool checkDate (Calendario struc);

/* 3.Diseñe una funcion que recibe 2 parametros de entrada, el primero es un string que debe imprimirse cierto numero de veces. 
    El numero de veces va estar indicado por el segundo parametro que debe ser de tipo int. La funcion debe contar con parametros
	por defecto, es decir, debe imprimir algun string por lo menos una vez a pesar de que no se le pase ningun parametro string ni ningun
	parametro int. Si la funcion recibe un numero negativo como parametro de entrada entonces se debe detener la ejecución de la funcion
    con un mensaje de despedida. La funcion se debe llamar printHelloMsg y no es necesario que tenga valor de retorno*/

void printHelloMsg (string str="No se ingreso un String", int n=0);
   
/* 4. Recursion: Es una propiedad que tienen las funciones en diversos lenguajes de programacion, incluido C++ de poder invocarse a si mismas.
	  Es decir, una funcion es recursiva cuando en el bloque de codigo que la compone existe una linea de codigo en la que ejecuta un llamado
	  a si misma. Son comunmente utilizadas para resolver problemas que involucran la descomposicion de un problema en problemas mas simples
	  que se resuelven de manera identica, por ejemplo: el calculo de series, sumatorias, productorias y factoriales, tambien en algoritmos
	  de busqueda y ordenamiento de los elementos de un arreglo (merge search por ejemplo)
	  
	  La siguiente funcion de ejemplo es una funcion que calcula el factorial de un numero entero:
	  
	  int factorial(int n)
	  {
         if ((n==0)||(n==1))
			return 1;
         else
			return n*factorial(n-1);
	  }
	  
	  Codifique una funcion recursiva que calcule la suma de los cuadrados de N numeros, la funcion debe retornar un valor de tipo entero y
	  recibir como parametro de entrada un dato de tipo entero denominado N. La funcion debe llamarse serieCuadrados. La funcion debe calcular
	  la suma de los cuadrados de los N numeros indicados por el parametro de entrada y retornar dicha suma. Ejemplo: si N es 5 entonces la
	  funcion debe calcular 1^2 + 2^2 + 3^2 + 4^2 + 5^2 y retornar el resultado de esa suma. SOLO SE PERMITE HACERLO DE MANERA RECURSIVA. Para
	  hacer la elevacion al cuadrado puede usar la funcion pow(x,y) de la libreria cmath, recuerde incluir la libreria con la directiva del
	  preprocesador #include<nombre_libreria>. Recuerde declarar la funcion antes de la funcion main y de hacer la definicion de la funcion
	  despues del bloque de codigo de la funcion main.
	  */
int serieCuadrados(int serie);	  

int main()
{
	/*NO DEBE MODIFICAR NADA EN EL CODIGO DE LA FUNCION MAIN */
	/*CUALQUIER MODIFICACION SERA PENALIZADA EN LA NOTA */
	
	if(checkMagicArray(magic_square))
		cout<<"El arreglo es un cuadrado magico"<<endl;
	else
		cout<<"Ese arreglo NO es un cuadrado magico"<<endl;
	
	
	Calendario miCalendario;
	miCalendario.dia = 29;
	miCalendario.mes = 2;
	miCalendario.anio = 28;
	
	if(checkDate(miCalendario))
		cout<<"La fecha fue ingresada correctamente"<<endl;
	else
		cout<<"La fecha no es correcta, debes revisarla"<<endl;
	
	miCalendario.dia = 31;
	miCalendario.mes = 11;
	miCalendario.anio = 19;
	
	if(checkDate(miCalendario))
		cout<<"La fecha fue ingresada correctamente"<<endl;
	else
		cout<<"La fecha no es correcta, debes revisarla"<<endl;
	
	miCalendario.dia = 7;
	miCalendario.mes = 10;
	miCalendario.anio = 25;
	
	if(checkDate(miCalendario))
		cout<<"La fecha fue ingresada correctamente"<<endl;
	else
		cout<<"La fecha no es correcta, debes revisarla"<<endl;
		
	
	string msg = "¡Que comience la fiesta!";
	printHelloMsg();
	printHelloMsg(msg);
	printHelloMsg(msg, 4);
	
	if(serieCuadrados(50) == 42925)
		cout<<"Bien calculada la serie de cuadrados :-)"<<endl;
	else
		cout<<"Mal calculada la serie de cuadrados, vuelve a intentar :-("<<endl;
	
	return 0;
}

int checkMagicArray (int my_array[][8]){
    
	int filas;
    int columnas;
    int reslt = 0 , num_fila=0 , num_colum=0 , num_diag1 = 0, num_diag2 = 0, n_aux = 0;
        
    for(filas =0;filas<8;filas++){
    	for(columnas=0;columnas<8;columnas++){
    		num_fila = num_fila + my_array [filas][columnas];
    		num_colum = num_colum + my_array [columnas][filas];
    		
		}
		
		if(num_fila!=num_colum)return 0;
				
		reslt = num_fila;
		
		num_fila=0;
		num_colum=0;
		
		num_diag1 = num_diag1 + my_array [filas][filas]	;
		num_diag2 = num_diag2 + my_array [7-filas][7-filas]	;
	}  
		
		if (num_diag2==num_diag1&&num_diag1==reslt){
			return 1;
		}
		else {
			return 0;
		}  
}

bool checkDate (Calendario struc){

    int anio = 2000 + struc.anio;
    
    int div4 = anio%4;
    int div100 = anio%100;
    int div400 = anio%400;
    int bis;
    
    if(div4==0&&div100==0&&div400==0)
        bis=1;
    else if (div4==0&&div100!=0)
        bis=1;
    else
        bis=0;
    
    if (struc.dia<1||struc.dia>31)
        return false;
    else if (struc.mes<1||struc.mes>12)
        return false;
    else if(struc.anio<0||struc.anio>127)
        return false;
    else if ((struc.mes==4||struc.mes==6||struc.mes==9||struc.mes==11)&&struc.dia>30)
        return false;
    else if (struc.mes==2&&struc.dia>29)
        return false;
    else if (bis==1&&struc.mes==2&&struc.dia!=29)
        return false;
    else if (bis==0&&struc.mes==2&&struc.dia!=28)
        return false;
    else
        return true;
}

void printHelloMsg (string str, int n){
	
	int i=0;
	
	if(n<0){
		cout<<"Bye..."<<endl;
		return;
	}
	
	do{
		cout<<str<<endl;
		i++;
	}while(i<n);
	
	return;
}

int serieCuadrados(int serie){
	if ((serie==0)||(serie==1))
			return 1;
	else
		return serieCuadrados(serie-1) + pow (serie,2);
}

