class Persona{
	
	private:
		string nombres, apellidos, cedula;
		int fa[3],fn[3], edad[3]; 
		float peso, estatura, imc;
		
	public:
		Persona (){
				
		}
		void ingresar()
		{
			cout<<"\n\ningrese los datos"<<endl<<endl;
			cout<<"degite su numero de cedula: ";cin>>cedula;
			cout<<"escriba sus nombres:  ";getline(cin,nombres);
			cout<<"escriba sus apellidos:  ";getline(cin,apellidos);
			cout<<"digite su peso (kg):  ";cin>>peso;
			cout<<"digite su estatura(m): ";cin>>estatura;
			cout<<"digite su fecha de nacimiento(aa mm dd):  ";cin>>fn[0];cin>>fn[1];cin>>fn[2];
		}
		
		void mostrar()
		{
		cout<<"\n----------------------------Datos-----------------------------\n\n";	
		cout<<"CEDULA"<<"\t";
		cout<<"NOMBRES"<<"\t";
		cout<<"APELLIDOS"<<"\t";
		cout<<"PESO"<<"\t";
		cout<<"ESTATURA"<<"\t";
		cout<<"FECHA DE NACIMIENTO"<<endl;
		
		cout<<cedula<<"\t";
		cout<<nombres<<"\t";
		cout<<apellidos<<"\t";
		cout<<peso<<"\t";
		cout<<estatura<<"\t";
		cout<<fn[0]<<"\t";
		cout<<fn[1]<<"\t";
		cout<<fn[2]<<"\t";
		
		}
	void digitar(int fa[3]){
		fn[3]=0;
	cout<<"digite la fecha actual (aa mm dd):  ";cin>>fa[0];cin>>fa[1];cin>>fa[2];
	cout<<"digite su fecha de nacimiento (aa mm dd):  ";cin>>fn[0];cin>>fn[1];cin>>fn[2];
	
	if(fa[2]>fn[2]){
		edad[2] = fa[2] - fn[2];
	}
	else{
		fa[2]=fa[2]+30;
		fa[1]=fa[1]-1;
		edad[2] = fa[2] - fn[2];
	}
	if(fa[1]>fn[1]){
		edad[1] = fa[1] - fn[1];
	}
	else{
		fa[1]=fa[1]+12;
		fa[0]=fa[0]-1;
		edad[1] = fa[1] - fn[1];
	}
	
	edad[0]= fa[0]-fn[0];
	
	cout<<"su edad es:  "<<edad[0]<<" años con "<<edad[1]<<" meses y "<<edad[2]<<" dias.";
	
}
void set_masa(int peso){
    
    peso=0;
	estatura=0;
	
    cout<<"digite su peso:   ";cin>>peso;
    cout<<"digite su estatura:   ";cin>>estatura;
	imc= peso/(estatura*estatura);
	cout<<"\n\nTu masa corporal es de:  "<<imc<<"\n\n";
	
	if(imc<18.5){
		cout<<"1. necesitas alimentarte bien: sigue una dieta en la que consumas suficientes proteinas\n\n";
		cout<<"2. Realiza rutinas de entrenamiento que aumenten su intensidad progresivamente para ganar masa corporal";
		cout<<"\n\n3. no te olvides de ingerir suplementos y vitaminas, esto te ayudara a adquirir masa corporal en poco tiempo\n\n";
	}
	else{
		if (imc>=18.5 && imc<=24.9){
			cout<<"felicitaciones!!, has sabido cuidar muy bien de tu masa corporal :)\n";
			cout<<"\ntienes que seguir estas recomendaciones para mantener tu masa corporalcomo hasta ahora:\n\n";
			cout<<"1. manten una dietaequilibrada que no implique ingerir demaciadas calorias\n";
			cout<<"2. comer frutas entre comidas te ayudara a mantener tu masa corporal\n";
			cout<<"3. realiza rutinas de ejercicio con intencidad constante para mantener tu fisico\n\n",
			cout<<"                                         sigue asi ;)                                     \n";
		}
		else{
			if (imc>=18.5 && imc<=24.9){
			cout<<"Atencion!! tienes que disminuir masa corporal :(\n";
			cout<<"\n1. Limita el consumo de alimentos que sean ricos en azúcares y grasas\n";
			cout<<"2. Realizar actividad física frecuente: unos 60 min diarios(jóvenes) y 150 min semanales (adultos)\n";
			cout<<"3. Comer varias veces al día fruta y verdura, así como legumbres, cereales integrales y frutos secos\n\n",
			cout<<"                                   combate el sobrepesooo!!                                       \n";	
			}
			else{
			cout<<"estas en riesgoooo!! :(\n";
			cout<<"\n1. rigete a una dieta exclusivamente de alimentos saludables\n";
			cout<<"2. Realizar una rutina de entrenamiento que aumenten su intencidad progresivamente, realiza 15  mindiarios\n";
			cout<<"3. realiza caminatas diarias de 1/2 kilometro\n",
			cout<<"4. Comer varias veces al día fruta y verdura, así como legumbres, cereales integrales y frutos secos\n\n",
			cout<<"                                   combate el sobrepesooo!!                                       \n";	
			}
				
			}
		}
		}
  };
