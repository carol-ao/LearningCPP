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
		cout << "Novo objeto Ve�culo " << this->nome << " constru�do" << endl;
	}

	virtual ~Veiculo() {
		cout << "objeto ve�culo " << this->nome << " destru�do" << endl;
	}

	void virtual mover()= 0;
};

class Terrestre: public virtual Veiculo {

private:
	int cap_max = 5;

protected:
	Terrestre() : Veiculo(nome) {
		cout << "Novo objeto veiculo terrestre " << this->nome << " constru�do" << endl;
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
		cout << "o objeto ve�culo aquatico " << this->nome << " destru�do" << endl;
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
		cout << "objeto ve�culo aereo " << this->nome << " destru�do" << endl;
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
