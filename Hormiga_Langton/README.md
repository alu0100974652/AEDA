# Hormiga de Langton

**Notas de implementación** :page_facing_up:

Se pide implementar un programa que simule el comportamiento de la hormiga de Langton
durante un número indefinido de pasos de tiempo, mostrando para cada paso el estado de los
siguientes objetos:

- Objeto Mundo :earth_americas:  , contiene las celdas de colores, blanco y negro, sobre los que se mueve la
hormiga. Inicialmente todas las celdas serán de color blanco. Para evitar trabajar en un
entorno gráfico, la visualización de una celda blanca se hará con el carácter ‘ ‘, y la
visualización de una celda negra con el carácter ‘X’. El objeto Mundo debe ocultar los
detalles de su implementación, esto es, oculta la estructura de datos utilizada internamente
para almacenar las celdas. Y por tanto, debe disponer de las operaciones necesarias para
consultar y cambiar el estado de cualquiera de las celdas.

- Objeto Hormiga :ant: que se mueve sobre las celdas del Mundo siguiendo las reglas
(*)
. La
Hormiga guarda su dirección de movimiento: Izquierda, Derecha, Arriba o aBajo; y la
posición de la celda que ocupa. La Hormiga es responsable de realizar su movimiento,
consultando al objeto Mundo el estado de la celda que ocupa. Para evitar trabajar en un
entorno gráfico, la visualización de la hormiga utilizará los siguientes caracteres que
indican su dirección de movimiento sobre la Rejilla: ‘<’, ‘>’, ‘^’, ‘v’.

**Reglas** :page_facing_up:

Inicialmente, paso de tiempo 0, se ubica arbitrariamente a la «hormiga» sobre una celda del
mundo. La hormiga siempre está mirando en una de las cuatro direcciones cardinales (Izquierda,
Derecha, Arriba, aBajo), y en cada paso de tiempo se mueve una celda de acuerdo con las
siguientes reglas: 

- Si está sobre una celda en estado Blanco :white_circle: entonces cambia la celda a estado Negro :black_circle:, la
hormiga gira noventa grados a la izquierda y avanza una celda.

- Si está sobre una celda en estado Negro :black_circle: entonces cambia la celda a estado Blanco :white_circle:, la
hormiga gira noventa grados a la derecha y avanza una celda.



