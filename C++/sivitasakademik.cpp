#include "header.hh"

/* Constructor. */

// Empty constructor.
SivitasAkademik::SivitasAkademik()
{
    asal_universitas = "";
    email_edu = "";
}

// Constructor with all attributes.
SivitasAkademik::SivitasAkademik(string asal_universitas, string email_edu)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

/* Getter and Setter. */

string SivitasAkademik::getAsal_universitas()
{
    return asal_universitas;
}

void SivitasAkademik::setAsal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

string SivitasAkademik::getEmail_edu()
{
    return email_edu;
}

void SivitasAkademik::setEmail_edu(string email_edu)
{
    this->email_edu = email_edu;
}

/* Destructor. */

// Leave it blank for now.
SivitasAkademik::~SivitasAkademik()
{

}