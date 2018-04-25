import numpy as np

import matplotlib.pyplot as plt


#cargar los datos para la grafica

datos=np.loadtxt('adveccion.txt')


#para separar las columnas n, 

x=datos[:,0]
xinicial=datos[:,1]
xfinal=datos[:,2]


plt.figure()
plt.title("avance")
plt.plot(x,xinicial,color='k')
plt.plot(x,xfinal,color='b', marker='D')
plt.savefig('grafica12.png')


