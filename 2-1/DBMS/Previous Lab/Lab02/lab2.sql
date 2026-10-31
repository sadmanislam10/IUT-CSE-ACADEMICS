DROP TABLE IF EXISTS students;
DROP TABLE IF EXISTS courses;

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    major VARCHAR(20),
    gpa NUMERIC(3,2)
);

CREATE TABLE courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(50),
    credits INT
);

INSERT INTO students VALUES(101, 'Mustakim', 'CSE', 3.90);
INSERT INTO students VALUES(103, 'Sayem', 'CSE', 4.00);
INSERT INTO students VALUES(118, 'Sakeef', 'EEE', 3.95);

INSERT INTO courses VALUES(1,'Data Base Management System', 3);
INSERT INTO courses VALUES(2,'OOP', 3);
INSERT INTO courses VALUES(3,'EEE lab', 1);
