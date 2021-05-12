#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

#include <iostream>
using namespace std;

class Veiculo {
protected:
	string nome;
public:

	Veiculo(string nome) {
		this->nome = nome;
		cout << "Novo objeto Veículo " << this->nome << " construído" << endl;
	}

	virtual ~Veiculo() {
		cout << "objeto veículo " << this->nome << " destruído" << endl;
	}

	void virtual mover()= 0;
};

class Terrestre: public virtual Veiculo {

private:
	int cap_max = 5;

protected:
	Terrestre() : Veiculo(nome) {
		cout << "Novo objeto veiculo terrestre " << this->nome << " construído" << endl;
	}

public:
	Terrestre(const char *nome) : Veiculo(nome) {
		cout<<"Novo objeto veiculo terrestre " << this->nome<<" construido"<<endl;
	}

	virtual ~Terrestre() {
	cout<<"o veiculo terrestre " << this->nome<<" foi destruido"<<endl;
	}

	void setCapMax(int cap_max_);
	int getCapMax();
	void mover();

};

class Aquatico: public virtual Veiculo {

private:
	float carga_max = 10;

protected:
	Aquatico() :Veiculo(nome) {
		cout<<"Novo objeto veiculo aquatico " << this->nome<<" foi construido"<<endl;
	}

public:
	Aquatico(const char *nome) :Veiculo(nome) {
		this->nome=nome;
		cout<<"Novo objeto veiculo aquatico " << this->nome<<" foi construido"<<endl;
	}

	virtual ~Aquatico() {
		cout << "o objeto veículo aquatico " << this->nome << " destruído" << endl;
	}

	void setCargaMax(float carga_max_);
	float getCargaMax();
	void mover();
};

class Aereo: public Veiculo {

private:
	float vel_max = 100;

public:
	Aereo(const char *nome) : Veiculo(nome) {
		this->nome = nome;
		cout<<"Novo objeto veiculo aereo " << this->nome<<" foi construido"<<endl;
	}

	virtual ~Aereo() {
		cout << "objeto veículo aereo " << this->nome << " destruído" << endl;
	}

	void setVelMax(float vel_max_);
	float getVelMax();
	void mover();
};

class Anfibio: public Terrestre, Aquatico {

public:
	Anfibio(const char *nome) :
			Veiculo(nome), Terrestre(), Aquatico() {
	}

	void mover() {
		Terrestre::mover();
		Aquatico::mover();
	}
};

#endif // VEICULO_H_INCLUDED
