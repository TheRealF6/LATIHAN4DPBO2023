#include "header.hh"

int main()
{
    Mahasiswa mahasiswa("1111222233334444", "2101000", "Ardiansyah", 'L', "FPMIPA");
    Dosen dosen("1111333355557777", "1501234", "Yudhayana", 'L', "FPMIPA", "S3", "AI");
    SivitasAkademik sivikMhs("UPI", "ardiansyah@upi.edu");
    SivitasAkademik sivikDsn("UPI", "yana_yudha@upi.edu");
    ProgramStudi prodi("Ilmu_Komputer", "IK100");
    Course course("Kecerdasan_Buatan");

    // Print.
    cout << "DATA MAHASISWA" << '\n';
    cout << "Nama : " << mahasiswa.getNama() << '\n';
    cout << "NIM : " << mahasiswa.getNIM() << '\n';
    cout << "Jenis Kelamin : " << mahasiswa.getJenis_kelamin() << '\n';
    cout << "Fakultas : " << mahasiswa.getFakultas() << '\n';
    cout << "Asal Universitas : " << sivikMhs.getAsal_universitas() << '\n';
    cout << "Email (.edu) : " << sivikMhs.getEmail_edu() << '\n';
    cout << '\n';

    // Print.
    cout << "DATA DOSEN" << '\n';
    cout << "Nama : " << dosen.getNama() << '\n';
    cout << "NIP : " << dosen.getNIP() << '\n';
    cout << "Jenis Kelamin : " << dosen.getJenis_kelamin() << '\n';
    cout << "Pendidikan Terakhir : " << dosen.getPend_terakhir() << '\n';
    cout << "Bidang Keahlian : " << dosen.getKeahlian() << '\n';
    cout << "Program Studi : " << prodi.getNama_prodi() << '\n';
    cout << "Kode Course : " << prodi.getKode() << '\n';
    cout << "Nama Course : " << course.getNama_matakuliah() << '\n';
    cout << "Fakultas : " << dosen.getFakultas() << '\n';
    cout << "Asal Universitas : " << sivikDsn.getAsal_universitas() << '\n';
    cout << "Email (.edu) : " << sivikDsn.getEmail_edu() << '\n';


    return 0;
}