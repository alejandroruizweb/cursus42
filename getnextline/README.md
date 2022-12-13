# Get_next_line

_El objetivo de este proyecto es simple: programar una función que devuelva
una línea leída de un file descriptor._

## Comenzando 🚀

_¿Qué es un file descriptor?, ¿qué es una variable estática?. Estas son las primeras cuestiones que tienes que aprender. Ya sabemos, buscamos un par de vídeos._

Los archivos a entregar son get_next_line.c, get_next_line.h y get_next_line_utils y los mismos archivos añadiendo _bonus para el caso del bonus.
get_next_line.c --> Aquí irán las funciones principales.
get_next_line.h --> Nuestra librería.
get_next_line_utils --> Funciones que ya tenemos de otros proyectos y que usaremos, ft_strlen, ft_strjoin, ft_strchr por ejemplo.


### Vamos a por el pseudocódigo 📋

_¿Qué necesitamos realmente para que esto funcione?, una función que lea el archivo (hasta que encuentre un '\n', otra que nos devuelva una linea completa (incluido en '\n')
y otra que elimine del \n para atrás y actualice._

```
Hola que tal \n
estás tú \n
amigo \n
Suponiendo que el BUFFER_SIZE que suministre la Moulinette sea 5 hará lo siguiente: Lee 5 caracteres: "Hola_", 
como no encuentra \n continua con otros 5 "que_t" y los suma a lo que ya había "Hola que t". 
Lee otros 5 "al_\ne". Aquí ya encuentra un \n y nos devolvería "Hola que tal \n". 
Actualizaría nuestra variable estática eliminando hasta el \n, recordemos que ya tenemos leído 
"Hola que tal \n e", puies habría que actualizar para quedarnos con "e" y seguimos leyendo 5 más "stás_" 
y se lo sumamos a lo que ya tenemos "estás_". Otros 5 "tú \n am" y devolvemos línea así hasta que ya no nos quede más que leer.  
```

### ¿Y cómo probamos que esto funciona? 🔧

_Pues supongo que ya sabrás de nuestro amigo PACO, más conocido formalmente como [Francinette](https://github.com/xicodomingues/francinette).
Pero como nos gusta hacer las cosas manualmente veamos un Main._

_main.c_

```
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int fd;
	char *str;

	fd = open("prueba.txt", O_RDONLY);

	str = get_next_line(fd);

	while (str != NULL)
	{
		printf("cadena leida: %s", str);
		str = get_next_line(fd);
	}
	return (0);
}
```

_prueba.txt_

```
hola que tal
estás tú
amigo
```

_Y compliando y ejecutando nos devolvería:_

```
Cadena leida: hola que tal
Cadena leida: estás tú
Cadena leida: amigo
```


## ¡Mil gracias! 🎁

* Pues muchas gracias a Jo´se Estrada Cordero, más conocido en estos lares de 42 Málaga por joestrad. 
* Sin su ayuda le podría estar dando vueltas todavía al fallo que me daba ft_strjoin 📢



---
