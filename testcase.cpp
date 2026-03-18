#include <iostream>
#include <string>
#include <vector>

class Test {
private:
    std::string subject;
    int marks;

public:
    Test(const std::string& subj, int m) : subject(subj), marks(m) {}

    int getMarks() const {
        return marks;
    }

    const std::string& getSubject() const {
        return subject;
    }
};

class Course {
private:
    std::vector<Test> assessments;

public:
    void addAssessment(const Test& test) {
        assessments.push_back(test);
    }

    int calculateTotalMarks(const std::string& subject) {
        int totalMarks = 0;
        for (const Test& test : assessments) {
            if (test.getSubject() == subject) {
                totalMarks += test.getMarks();
            }
        }
        return totalMarks;
    }
};

int main() {
    Course course;

    std::string subject;
    int marks;

    for (int i = 0; i < 6; i++) {
        std::cin >> subject >> marks;
        Test test(subject, marks);
        course.addAssessment(test);
    }

    // Set the value for "Computer" to 50
    Test computerTest("Computer", 50);
    course.addAssessment(computerTest);

    std::cout << "Maths: " << course.calculateTotalMarks("Maths") << std::endl;
    std::cout << "Science: " << course.calculateTotalMarks("Science") << std::endl;
    std::cout << "Computer: " << course.calculateTotalMarks("Computer") << std::endl;

    return 0;
}
