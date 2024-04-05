#include <iostream>
#include <string>

class Pessoa {
public:
    Pessoa(const std::string& nome, int idade) : nome_(nome), idade_(idade) {}

    void ImprimirNome() const {
        std::cout << "O nome é: " << nome_ << std::endl;
    }

private:
    std::string nome_;
    int idade_;
};

class Professor : public Pessoa {
public:
    Professor(const std::string& nome, int idade) : Pessoa(nome, idade) {}

    void ImprimirIdade() const {
        std::cout << "Professor: Idade = " << idade_ << " anos" << std::endl;
    }
};

class Aluno : public Pessoa {
public:
    Aluno(const std::string& nome, int idade, const std::string& matricula)
        : Pessoa(nome, idade), matricula_(matricula) {}

    void ImprimirIdade() const {
        std::cout << "Aluno: Idade = " << idade_ << " anos" << std::endl;
    }

private:
    std::string matricula_;
};

int main() {
    Pessoa pessoa("João", 30);
    Professor professor("Maria", 45);
    Aluno aluno("Pedro", 20, "202104567");

    pessoa.ImprimirNome();
    professor.ImprimirIdade();
    aluno.ImprimirIdade();

    return 0;
}
