main: main.o  obras.o pintura.o  literatura.o escultura.o disenosArquitectonicos.o
	g++  main.o  obras.o pintura.o  literatura.o escultura.o disenosArquitectonicos.o -o lab8
	
main.o:	main.cpp  obras.h   pintura.h  literatura.h  escultura.h  disenosArquitectonicos.h
	g++ -c main.cpp 

obras.o:	obras.cpp  obras.h
	g++ -c obras.cpp

pintura.o:	pintura.cpp pintura.h obras.h
	g++ -c pintura.cpp

literatura.o:	literatura.cpp literatura.h obras.h
	g++ -c literatura.cpp

esculturas.o:	escultura.cpp  escultura.h  obras.h
	g++ -c esculturas.cpp

disenosArquitectonicos.o:	disenosArquitectonicos.cpp disenosArquitectonicos.h obras.h
	g++ -c disenosArquitectonicos.cpp