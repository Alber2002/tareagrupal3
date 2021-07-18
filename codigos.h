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
  };
