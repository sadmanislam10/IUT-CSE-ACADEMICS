-- task 01
INSERT INTO students (student_id, name, major, gpa) VALUES(10, 'Messi', 3.99);
INSERT INTO courses (course_id, course_name, credits) VALUES (4,'Machine Learning', 3);



-- task 02
SELECT * FROM students;
SELECT * FROM courses;
SELECT name, gpa FROM students WHERE major = 'CSE';
SELECT course_name FROM courses WHERE credits = 3;
SELECT * FROM students ORDER BY gpa DESC;


-- task 03
UPDATE students SET gpa = 3.55 WHERE name = 'Sayem';
UPDATE courses SET credits = 4 WHERE course_name = 'OOP';

-- Task 4
DELETE FROM students WHERE name = 'Messi';
DELETE FROM courses WHERE course_name = 'EEE lab';

-- Task 5
SELECT * FROM students;
SELECT * FROM courses;
