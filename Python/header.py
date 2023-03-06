class SivitasAkademik:
    def __init__(self, asal_universitas="", email_edu=""):
        self.asal_universitas = asal_universitas
        self.email_edu = email_edu

    def getAsal_universitas(self):
        return self.asal_universitas

    def setAsal_universitas(self, asal_universitas):
        self.asal_universitas = asal_universitas

    def getEmail_edu(self):
        return self.email_edu

    def setEmail_edu(self, email_edu):
        self.email_edu = email_edu

    def __del__(self):
        pass


class Course:
    def __init__(self, nama_matakuliah=""):
        self.nama_matakuliah = nama_matakuliah

    def getNama_matakuliah(self):
        return self.nama_matakuliah

    def setNama_matakuliah(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah

    def __del__(self):
        pass


class ProgramStudi:
    def __init__(self, nama_prodi="", kode="", course=None):
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.course = course or Course()

    def getNama_prodi(self):
        return self.nama_prodi

    def setNama_prodi(self, nama_prodi):
        self.nama_prodi = nama_prodi

    def getKode(self):
        return self.kode

    def setKode(self, kode):
        self.kode = kode

    def getCourse(self):
        return self.course

    def setCourse(self, course):
        self.course = course

    def __del__(self):
        pass

class Human:
    def __init__(self, NIK="", nama="", jenis_kelamin=""):
        self.NIK = NIK
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

    def getNIK(self):
        return self.NIK

    def setNIK(self, NIK):
        self.NIK = NIK

    def getNama(self):
        return self.nama

    def setNama(self, nama):
        self.nama = nama

    def getJenis_kelamin(self):
        return self.jenis_kelamin

    def setJenis_kelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

    def __del__(self):
        pass

class Dosen(Human):
    def __init__(self, NIK="", nama="", jenis_kelamin="", NIP="", fakultas="", pend_terakhir="", keahlian=""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.NIP = NIP
        self.fakultas = fakultas
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian
    
    def getNIP(self):
        return self.NIP

    def setNIP(self, NIP):
        self.NIP = NIP

    def getFakultas(self):
        return self.fakultas

    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    def getPend_terakhir(self):
        return self.pend_terakhir

    def setPend_terakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir

    def getKeahlian(self):
        return self.keahlian

    def setKeahlian(self, keahlian):
        self.keahlian = keahlian

    def __del__(self):
        pass

class Mahasiswa(Human):
    def __init__(self, NIK="", nama="", jenis_kelamin="", NIM="", fakultas=""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.NIM = NIM
        self.fakultas = fakultas

    def getNIM(self):
        return self.NIM

    def setNIM(self, NIM):
        self.NIM = NIM

    def getFakultas(self):
        return self.fakultas

    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    def __del__(self):
        pass
