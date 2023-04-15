#include"header.h"



void xuatThongTinLop(fstream &f) {
	f.open("student.csv");
	if (f.fail()) {
		cout << "Khong the mo duoc file" << endl;
		return;
	}
	string lop;
	cout << "Nhap lop can tim: ";
	cin >> lop;
	string maLop, No, MSSV, Ten, Ho, Gioitinh, Ngaysinh, ID;
	while (f.peek() != EOF) {
		getline(f, maLop, '\n');
		if (maLop == lop) {
			while (f.peek() != EOF) {
				getline(f, No, ',');
				size_t tim = No.find("\n");
				if (tim != string::npos)
					break;
				getline(f, MSSV, ',');
				getline(f, Ten, ',');
				getline(f, Ho, ',');
				getline(f, Gioitinh, ',');
				getline(f, Ngaysinh, ',');
				getline(f, ID, '\n');
				string hoTen = Ho + " " + Ten;
				cout << "No: " << No << endl;
				cout << "MSSV: " << MSSV << endl;
				cout << "Ho ten: " << hoTen << endl;
				cout << "Gioi tinh: " << Gioitinh << endl;
				cout << "Ngay sinh: " << Ngaysinh << endl;
				cout << "Social ID: " << ID << endl;
			}
		}
	}
	f.close();
}