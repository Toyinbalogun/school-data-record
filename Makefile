a02: Control.o Course.o DynArray.o School.o StatArray.o Student.o Taken.o View.o main.o
	g++ -o a02 Control.o Course.o DynArray.o School.o StatArray.o Student.o Taken.o View.o main.o

main.o:	main.cc Control.h
	g++ -c main.cc

Control.o: Control.cc Control.h School.h View.h
	g++ -c Control.cc

Course.o: Course.cc Course.h
	g++ -c Course.cc

DynArray.o: DynArray.cc DynArray.h
		g++ -c DynArray.cc

School.o: School.cc School.h Course.h Student.h Taken.h DynArray.h StatArray.h
	g++ -c School.cc

StatArray.o: StatArray.cc StatArray.h
	g++ -c StatArray.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Taken.o: Taken.cc Taken.h Course.h Student.h
	g++ -c Taken.cc

View.o: View.cc View.h
	g++ -c View.cc

clean:
	rm -f *.o a02
