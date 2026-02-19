int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "1. Register student\n2. View students\n3. Exit\n";
        cin >> choice;
        cin.ignore(); // Handle newline
        if (choice == 1) {
            string idx, name;
            cout << "Enter index number: ";
            cin >> idx;
            cout << "Enter name: ";
            getline(cin, name); // Allow spaces in name
            students.push_back(Student(idx, name));
        } else if (choice == 2) {
            if (students.empty()) {
                cout << "No students registered.\n";
            } else {
                for (auto& s : students) s.display();
            }
        }
    } while (choice != 3);
    return 0;
}

class AttendanceSession {
public:
    string courseCode;
    string date;
    map<string, string> attendance;
    AttendanceSession(string cc, string d);
};
