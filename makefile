grafica12.png : adveccion.txt grafica.py

	python grafica.py

try.txt: ./a.out

	./a.out> adveccion.txt

a.out: VJ_adveccion.cpp
c++ VJ_adveccion.cpp
