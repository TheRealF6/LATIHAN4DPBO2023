from header import *

if __name__ == "__main__":
    mahasiswa = Mahasiswa("3250011708030001", "Ardiansyah Syahputra", 'L', "2101000", "FPMIPA")
    dosen = Dosen("3225022512830002", "Yudhayana Argawijaya", 'L', "1501234", "FPMIPA", "S3", "AI")
    sivikMhs = SivitasAkademik("UPI", "ardiansyah@upi.edu")
    sivikDsn = SivitasAkademik("UPI", "yana_yudha@upi.edu")
    prodi = ProgramStudi("Ilmu Komputer", "IK100")
    course = Course("Kecerdasan Buatan")
    course.setNama_matakuliah("Machine Learning")
    course.setNama_matakuliah("Internet of Things")

    # Print.
    print("DATA MAHASISWA")
    print("NIK : ", mahasiswa.getNIK())
    print("Nama : ", mahasiswa.getNama())
    print("NIM : ", mahasiswa.getNIM())
    print("Jenis Kelamin (L/P) : ", mahasiswa.getJenis_kelamin())
    print("Fakultas : ", mahasiswa.getFakultas())
    print("Asal Universitas : ", sivikMhs.getAsal_universitas())
    print("Email (.edu) : ", sivikMhs.getEmail_edu())
    print()

    # Print.
    print("DATA DOSEN")
    print("NIK : ", dosen.getNIK())
    print("Nama : ", dosen.getNama())
    print("NIP : ", dosen.getNIP())
    print("Jenis Kelamin (L/P) : ", dosen.getJenis_kelamin())
    print("Pendidikan Terakhir : ", dosen.getPend_terakhir())
    print("Bidang Keahlian : ", dosen.getKeahlian())
    print("Program Studi : ", prodi.getNama_prodi())
    print("Kode Course : ", prodi.getKode())
    i = 1;
    for course_name in course.getNama_matakuliah():
        print(f"Nama Course ke-{i}: {course_name}")
        i += 1
    print("Fakultas : ", dosen.getFakultas())
    print("Asal Universitas : ", sivikDsn.getAsal_universitas())
    print("Email (.edu) : ", sivikDsn.getEmail_edu())
