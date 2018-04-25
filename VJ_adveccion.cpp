# include <iostream>

using namespace std;

// construir el arreglo de los x

int main(){

	// de esta manera se declara una matriz de 4000*700
	double** u = new double *[4000]; 
	for (int i=0; i<4000; i++){
		u[i]=new double[700];
	}

	double** upasado = new double *[4000]; 
	for (int i=0; i<4000; i++){
		upasado[i]=new double[700];
	}

	double** uinicial = new double *[4000]; 
	for (int i=0; i<4000; i++){
		uinicial[i]=new double[700];
	}

	double c=1.0;
	double dt= 0.001;

	// el dx

	float dx= 0.001;

	// nuevo vector que no va a variar

		for (int i=0; i< 4000; i++){
	
			if (i<=0.5){            

				uinicial[i][0]=0.5;

			}

			if ( i>0.5){

				uinicial[i][0]=0;
			}

			//cout << upasado[i] <<endl;
	 	}

	

	// esta es la condicion inicial para 4000 posiciones de x
		for (int i=0; i< 4000; i++){
	
			if (i<=0.5){            

				upasado[i][0]=0.5;

			}

			if ( i>0.5){

				upasado[i][0]=0;
			}

			//cout << upasado[i] <<endl;
	 	}

	
// no esta funcionando porque imprime ceros
	for (int t=0; t < 700-1; t++){

			u[0][t+1]=u[0][t];
			u[3999][t+1]=u[3999][t];

	    		for (int i=1; i<4000-1; i++){

			u[i][t+1] = upasado[i][t]-c*(dt/dx)*(upasado[i][t]-upasado[i-1][t]);
			upasado[i][t]= u[i][t+1];
			cout << u[i][t+1]<<" " << upasado[i][t] <<" " << uinicial[i][0]<< endl;
			}
		
		
		
	}

	return 0;

}

