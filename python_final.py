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
