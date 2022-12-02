// Creado por Tapuyo Lenin

/* pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación. */
# incluir < iostream >

/* sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar */
utilizando el espacio de  nombres  estándar ;

/* sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa */
int  principal ()

{

/* Para definir datos reales se antepone la palabra reservada float al identificador de la variable */
	flotante   LGTT_aa,LGTT_ma,LGTT_da,LGTT_an,LGTT_mn,LGTT_dn,LGTT_a,LGTT_m,LGTT_d;

/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *LGTT_aa: */
	cout<< " Ingrese la fecha actual: " ;


/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos LGTT_an */
	cin>>LGTT_aa>>LGTT_ma>>LGTT_da;



/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *LGTT_an: */
	cout<< " Ingrese la fecha de nacimiento: " ;


/* cin es el flujo de entrada estándar que normalmente es el teclado, donde indicara lo que el usuario debe ingresar, en este caso ingresaremos LGTT_an */
	cin>>LGTT_an>>LGTT_mn>>LGTT_dn;


/* Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples */
	si (LGTT_da>LGTT_dn){


// decimos que la LGTT_d va hacer igual a LGTT_da menos LGTT_dn, para poder calcular la edad de cualquier persona
		LGTT_d=LGTT_da-LGTT_d+ 30 ;
/* Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición. */
	}   más {


// decimos que la LGTT_d va a hacer igual a GOBD_da menos LGTT_dn, para poder calcular la edad de cualquier persona
		LGTT_da=LGTT_da+ 30 ;


// decimos que la LGTT_d va a hacer igual a LGTT_da menos LGTT_dn, para poder calcular la edad de cualquier persona
		LGTT_ma=LGTT_ma- 1 ;


// decimos que la LGTT_d va hacer igual a LGTT_da menos LGTT_dn, para poder calcular la edad de cualquier persona
		LGTT_d=LGTT_da-LGTT_dn;



	}



/* Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples */
	si (LGTT_ma>LGTT_mn){


// decimos que la LGTT_m va a hacer igual a LGTT_ma menos LGTT_mn, para poder calcular la edad de cualquier persona
		LGTT_m=LGTT_ma-LGTT_mn;


/* Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición. */
	} más {LGTT_ma=LGTT_ma+ 12 ;


// decimos que la LGTT_aa va a hacer igual a LGTT_aa, menos 1 para poder calcular la edad de cualquier persona
		LGTT_aa=LGTT_aa- 1 ;


// decimos que la LGTT_m va a hacer igual a LGTT_ma menos LGTT_mn, para poder calcular la edad de cualquier persona
		LGTT_m=LGTT_ma-LGTT_mn;
	
	}

// decimos que la LGTT_a va hacer igual a LGTT_aa menos LGTT_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	LGTT_a=LGTT_aa-LGTT_an;


/* cout nos ayude a imprimir por pantalla todos lo que vamos a escribir dentro de las comilas: */
	cout<< " Usted tiene " <<LGTT_a<< " años, " <<LGTT_m<< " meses, " <<LGTT_d<< " dias " <<endl;


/* Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se sobrepone el control de la función principal). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada */
	devolver  0 ;

}
