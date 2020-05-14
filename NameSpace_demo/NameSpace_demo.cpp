#include "pch.h"
#include "Audience.h"
#include "Manager.h"
#include "Schedule.h"
#include "Student.h"
#include "Subject.h"
#include "Teacher.h"

int main()
{
    // 1 -> create objects
	Person::Student *s = new Person::Student();
	Person::Teacher *t = new Person::Teacher();
	Person::Manager *m = new Person::Manager();

	Support::Subject *sb = new Support::Subject();
	Support::Schedule *sc = new Support::Schedule();
	Support::Audience *au = new Support::Audience();

	// 2 -> actions...
	std::cout << "\n> Objects working..." << std::endl;

	// 3 -> memory free
	delete s;
	delete t;
	delete m;
	delete sb;
	delete sc;
	delete au;
	std::cout << "\n> Memory free completed ..." << std::endl;

	// 4 -> finish
	std::cout << "\n\nProgram finished" << std::endl;

}
