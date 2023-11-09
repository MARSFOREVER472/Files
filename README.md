# Files

### COMPLEJIDAD ALGORÍTMICA

A simple vista parece algo muy simple, pero a medida que un programa crece, se requiere una medición más exacta y apropiada, para esto se realizan ciertas operaciones matemáticas que establecen la eficiencia teórica del programa, al estudio de estos casos se denomina Complejidad Algorítmica.

Para empezar:

¿Cómo se calcula la complejidad de un algoritmo?

- Uno de los más comunes es contar el número de operaciones básicas (como sumas o multiplicaciones) que realiza el algoritmo. 
- Esto se conoce como la complejidad temporal del algoritmo.
- Otra forma de medir la complejidad es contar la cantidad de memoria (en bytes o bits) que requiere el algoritmo.

En la siguiente gráfica se muestra cómo se calcula un algoritmo mediante secuencias numéricas logarítmicas.

![image](https://github.com/MARSFOREVER472/Files/assets/69094327/8fb0e9ab-ad28-4bc9-8959-4200c4b098b6)

En estos casos, se mostrarán algunos ejemplos de cómo se realizaron mediante líneas de código para realizar paso a paso de cómo se calcula un algoritmo mediante secuencias logarítmicas.

procedimiento DeLaBurbuja (a⁰, a¹, a², . . . , a(n-1))

  para i <- 1 hasta n hacer
  
   para j <- 0 hasta n - 2 hacer
   
    si a(j) > a(j + 1) entonces
    
       aux <- a(j)
       
       a(j) <- a(j + 1)
       
       a(j + 1) <- aux
       
     fin si
     
  fin para
  
 fin para
 
fin procedimiento
    
