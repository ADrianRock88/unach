# -*- coding: utf-8 -*-
"""
Created on Fri May  6 09:03:33 2022
@author: ADrian Solis
"""


import numpy as np
dtype=[('nombre',(np.str_,40)),('matricula',(np.str_,8)),('semestre',np.int32),('promedio',np.float64)]
strarray=np.array([("ADrian","B221038",1,9.5),("Felipe","B222344",2,8.0),("Fernanda","B201293",4,10.0),("Julieta","B213465",6,8.9),("Ernesto","B208975",5,9.9),("Marta","B191342",3,6.0),("John","B145678",8,7.0),("Linda","B187654",2,6.5),("Francisco","B223412",4,7.8),("Maria","B190047",8,6.7)],dtype=dtype)
arreglado=np.sort(strarray, order=('promedio'))
print("Los regitros son\n",arreglado)
print("Los becado son:")
for i in range(7,10):
    print(arreglado[i])

