from header import *

if __name__ == "__main__":
    mahasiswa = Mahasiswa("1111222233334444", "Ardiansyah", 'L', "2101000", "FPMIPA")
    dosen = Dosen("1111333355557777", "Yudhayana", 'L', "1501234", "FPMIPA", "S3", "AI")
    sivikMhs = SivitasAkademik("UPI", "ardiansyah@upi.edu")
    sivikDsn = SivitasAkademik("UPI", "yana_yudha@upi.edu")
    prodi = ProgramStudi("Ilmu_Komputer", "IK100")
    course = Course("Kecerdasan_Buatan")

    # Print.
    print("DATA MAHASISWA")
    print("Nama : ", mahasiswa.getNama())
    print("NIM : ", mahasiswa.getNIM())
    print("Jenis Kelamin : ", mahasiswa.getJenis_kelamin())
    print("Fakultas : ", mahasiswa.getFakultas())
    print("Asal Universitas : ", sivikMhs.getAsal_universitas())
    print("Email (.edu) : ", sivikMhs.getEmail_edu())
    print()

    # Print.
    print("DATA DOSEN")
    print("Nama : ", dosen.getNama())
    print("NIP : ", dosen.getNIP())
    print("Jenis Kelamin : ", dosen.getJenis_kelamin())
    print("Pendidikan Terakhir : ", dosen.getPend_terakhir())
    print("Bidang Keahlian : ", dosen.getKeahlian())
    print("Program Studi : ", prodi.getNama_prodi())
    print("Kode Course : ", prodi.getKode())
    print("Nama Course : ", course.getNama_matakuliah())
    print("Fakultas : ", dosen.getFakultas())
    print("Asal Universitas : ", sivikDsn.getAsal_universitas())
    print("Email (.edu) : ", sivikDsn.getEmail_edu())
