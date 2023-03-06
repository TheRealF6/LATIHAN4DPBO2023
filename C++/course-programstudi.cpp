#include "header.hh"

/* = = COURSE SECTION = = */

/* Constructor. */

// Empty constructor.
Course::Course()
{
    nama_matakuliah = "";
}

// Constructor with all attributes.
Course::Course(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

/* Getter and Setter. */

string Course::getNama_matakuliah()
{
    return nama_matakuliah;
}

void Course::setNama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

/* Destructor. */

// Leave it blank for now.
Course::~Course()
{

}

/* = = PROGRAMSTUDI SECTION = = */

/* Constructor. */

// Empty constructor.
ProgramStudi::ProgramStudi()
{

}

// Constructor with standard attributes.
ProgramStudi::ProgramStudi(string nama_prodi, string kode)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;   
}

// Constructor with all attributes.
ProgramStudi::ProgramStudi(string nama_prodi, string kode, Course course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
}

/* Getter and Setter. */

string ProgramStudi::getNama_prodi()
{
    return nama_prodi;
}

void ProgramStudi::setNama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

string ProgramStudi::getKode()
{
    return kode;
}

void ProgramStudi::setKode(string laptkodeop)
{
    this->kode = kode;
}

Course ProgramStudi::getCourse()
{
    return course;
}

void ProgramStudi::setCourse(Course course)
{
    this->course = course;
}

/* Destructor. */

// Leave it blank for now.
ProgramStudi::~ProgramStudi()
{

}