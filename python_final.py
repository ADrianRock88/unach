alumno=[]
arralum=[]

"""sknnom=input("Insertar el nombre del alumno: ")
sknmatri=input("Inserte la matricula del alumno: ")
sknsem=input("Inserte el semestre del alumno: ")
sknsem = int (sknsem)
sknprom=input("Inserte el promedio del alumno: ")
sknprom= float(sknprom)

alumno.append(sknnom)
alumno.append(sknmatri)
alumno.append(sknsem)
alumno.append(sknprom)"""

for index in range (0,2,1):
    
    sknnom=input("Insertar el nombre del alumno: ")
    sknmatri=input("Inserte la matricula del alumno: ")
    sknsem=input("Inserte el semestre del alumno: ")
    sknsem = int (sknsem)
    sknprom=input("Inserte el promedio del alumno: ")
    sknprom= float(sknprom)
    alumno.append(sknnom)
    alumno.append(sknmatri)
    alumno.append(sknsem)
    alumno.append(sknprom)
    print("---", index)
    print("llegada")
    arralum.append(alumno)    
    print("¡¡¡¡¡¡¡¡",arralum,"!!!!!!!")
    
    
    
    
for i in arralum:
    for ii in i:
        print(ii)
# -*- coding: utf-8 -*-
"""
Created on Fri May  6 09:03:33 2022

@author: ADrian Solis
"""

from numpy import array 
import numpy as np

dtype=[('nombre',(np.str_,40)),('matricula',(np.str_,8)),('semestre',np.int32),('promedio',np.float64)]

scnom=input("Inserte el nombre ")
scnom=str(scnom)
scmat=input("Inserte la matricula ")
scmat=str(scmat)
scsem=input("Inserte el semestre")
scsem=int(scsem)
scpro=input("Inserte el promedio")
scpro= float(scpro)



stru=np.array([scnom,scmat,scsem,scpro],dtype=dtype)
