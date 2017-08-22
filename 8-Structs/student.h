#pragma once

struct Student
{
	int id;
	int course;
	int lastScore;

};

void printStudentInfo(Student stu);
float medianStudentTestScore(Student a[], int length);