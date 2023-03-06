#include "header.hh"

/* = = HUMAN SECTION = = */

/* Constructor. */

// Empty constructor.
Human::Human()
{
    NIK = "";
    nama = "";
    jenis_kelamin = '-';
}

// Constructor with all attributes.
Human::Human(string NIK, string nama, char jenis_kelamin)
{
    this->NIK = NIK;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

/* Getter and Setter. */

string Human::getNIK()
{
    return NIK;
}

void Human::setNIK(string NIK)
{
    this->NIK = NIK;
}

string Human::getNama()
{
    return nama;
}

void Human::setNama(string nama)
{
    this->nama = nama;
}

char Human::getJenis_kelamin()
{
    return jenis_kelamin;
}

void Human::setJenis_kelamin(char jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

/* Destructor. */

// Leave it blank for now.
Human::~Human()
{

}

/* = = DOSEN SECTION = = */

/* Constructor. */

// Empty constructor.
Dosen::Dosen() : Human()
{

}

// Constructor with base human attribute.
Dosen::Dosen(string NIK, string nama, char jenis_kelamin) : Human(NIK, nama, jenis_kelamin)
{

}

// Constructor with all attributes.
Dosen::Dosen(string NIK, string NIP, string nama, char jenis_kelamin, string fakultas, string pend_terakhir, string keahlian) : Human(NIK, nama, jenis_kelamin)
{
    this->NIP = NIP;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

/* Getter and Setter. */

string Dosen::getNIP()
{
    return NIP;
}

void Dosen::setNIP(string NIP)
{
    this->NIP = NIP;
}

string Dosen::getFakultas()
{
    return fakultas;
}

void Dosen::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::getPend_terakhir()
{
    return pend_terakhir;
}

void Dosen::setPend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

string Dosen::getKeahlian()
{
    return keahlian;
}

void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

/* Destructor. */

// Leave it blank for now.
Dosen::~Dosen()
{

}

/* = = MAHASISWA SECTION = = */

/* Constructor. */

// Empty constructor.
Mahasiswa::Mahasiswa() : Human()
{

}

// Constructor with base human attribute.
Mahasiswa::Mahasiswa(string NIK, string nama, char jenis_kelamin) : Human(NIK, nama, jenis_kelamin)
{

}

// Constructor with all attributes.
Mahasiswa::Mahasiswa(string NIK, string NIM, string nama, char jenis_kelamin, string fakultas) : Human(NIK, nama, jenis_kelamin)
{
    this->NIM = NIM;
    this->fakultas = fakultas;
}

/* Getter and Setter. */

string Mahasiswa::getNIM()
{
    return NIM;
}

void Mahasiswa::setNIM(string NIM)
{
    this->NIM = NIM;
}

string Mahasiswa::getFakultas()
{
    return fakultas;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

/* Destructor. */

// Leave it blank for now.
Mahasiswa::~Mahasiswa()
{

}