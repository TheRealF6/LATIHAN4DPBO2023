// Declare library
#include <iostream>
#include <string>

using namespace std;

class SivitasAkademik
{
    private:
        string asal_universitas;
        string email_edu;

    public:
        // Constructor.
        SivitasAkademik();
        SivitasAkademik(string asal_universitas, string email_edu);

        // Getter and Setter.
        string getAsal_universitas();
        void setAsal_universitas(string asal_universitas);
        string getEmail_edu();
        void setEmail_edu(string email_edu);

        // Destructor.
        ~SivitasAkademik();
};

class Course
{
    private:
        string nama_matakuliah;

    public:
        // Constructor.
        Course();
        Course(string nama_matakuliah);

        // Getter and Setter.
        string getNama_matakuliah();
        void setNama_matakuliah(string nama_matakuliah);

        // Destructor.
        ~Course();
};

class ProgramStudi
{
    private:
        string nama_prodi;
        string kode;
        Course course;

    public:
        // Constructor.
        ProgramStudi();
        ProgramStudi(string nama_prodi, string kode);
        ProgramStudi(string nama_prodi, string kode, Course course);

        // Getter and Setter.
        string getNama_prodi();
        void setNama_prodi(string nama_prodi);
        string getKode();
        void setKode(string kode);
        Course getCourse();
        void setCourse(Course course);

        // Destructor.
        ~ProgramStudi();
};

class Human
{
    private:
        string NIK;
        string nama;
        char jenis_kelamin;

    public:
        // Constructor.
        Human();
        Human(string NIK, string nama, char jenis_kelamin);

        // Getter and Setter.
        string getNIK();
        void setNIK(string NIK);
        string getNama();
        void setNama(string nama);
        char getJenis_kelamin();
        void setJenis_kelamin(char jenis_kelamin);

        // Destructor.
        ~Human();
};

class Dosen : public Human, public SivitasAkademik, public ProgramStudi, public Course
{
    private:
        string NIP;
        string fakultas;
        string pend_terakhir;
        string keahlian;

    public:
        // Constructor.
        Dosen();
        Dosen(string NIK, string nama, char jenis_kelamin);
        Dosen(string NIK, string NIP, string nama, char jenis_kelamin, string fakultas, string pend_terakhir, string keahlian);

        // Getter and Setter.
        string getNIP();
        void setNIP(string NIP);
        string getFakultas();
        void setFakultas(string fakultas);
        string getPend_terakhir();
        void setPend_terakhir(string pend_terakhir);
        string getKeahlian();
        void setKeahlian(string keahlian);

        // Destructor.
        ~Dosen();
};

class Mahasiswa : public Human, public SivitasAkademik
{
    private:
        string NIM;
        string fakultas;

    public:
        // Constructor.
        Mahasiswa();
        Mahasiswa(string NIK, string nama, char jenis_kelamin);
        Mahasiswa(string NIK, string NIM, string nama, char jenis_kelamin, string fakultas);

        // Getter and Setter.
        string getNIM();
        void setNIM(string NIM);
        string getFakultas();
        void setFakultas(string fakultas);

        // Destructor.
        ~Mahasiswa();
};