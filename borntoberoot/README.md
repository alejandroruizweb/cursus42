# BORN TO BE ROOT
El proyecto Born2beroot del Cursus de 42 explora los fundamentos de la administración de sistemas invitándonos a instalar una máquina virtual con VirtualBox.
El servidor que vamos a crear debe tener el esquema de partición definido en el enunciado del ejercicio así como el sistema operativo Linux de nuestra elección: CentOS o Debian.

## ¿Qué es una Máquina Virtual?
En muchos sentidos, una máquina virtual (VM para abreviar) es prácticamente idéntica a un equipo físico normal.
Ambos tienen una CPU, algo de RAM, un disco duro y una conexión a Internet si es necesario, y se pueden instalar varios sistemas operativos y software en ellos.
La única diferencia es que un equipo física usa su propio hardware, mientras que una máquina virtual toma prestados los recursos físicos de su anfitrión.
Por lo tanto, una máquina virtual es solo código, una computadora virtual dentro de un servidor físico.
El software llamado hipervisor o monitor de máquina virtual (VMM) es responsable de crear y ejecutar máquinas virtuales, así como de administrar recursos, como CPU, memoria y almacenamiento, entre ellos.
### Ventajas de una Máquina 
Hay varios beneficios para una máquina virtual:
* Ejecutar un sistema operativo diferente al del equipo físico sin tener que particionar su disco duro o reiniciarlo.
* Instalar sistemas operativos antiguos como DOS, incluso si el hardware ya no es compatible.
* Llevar un sistema operativo completo en un USB, por ejemplo, o transferir una máquina completa de un equipo a otro fácilmente.
* Desarrollar un programa diseñado para un sistema operativo diferente y usar un software que nunca se diseñó para ejecutarse en el sistema operativo de la máquina física.
* Aislar un programa de dudosa procedencia, o incluso un virus, para usarlo sin riesgo para el equipo físico. De hecho, una máquina virtual y sus discos duros pueden congelarse, reiniciarse, copiarse, transferirse de un equipo a otro y eliminarse fácilmente. Además, es posible capturar una instantánea del estado de la VM para restaurarla como estaba en ese momento.
* Instalar varias máquinas virtuales en un número limitado de equipos físicos, en lugar de tener que multiplicar el número de máquinas físicas. Esto ahorra en gastos, en electricidad y en tiempo de mantenimiento.
### Inconvenientes de una Máqui Virtual
Sin embargo, una máquina virtual tiene sus inconvenientes, especialmente en lo que respecta a la seguridad y el rendimiento:
* El terminal host debe ser capaz de manejar la virtualización: muy poca RAM genera lentitud y latencia.
* Si el terminal host falla, es posible que ya no se pueda acceder a las máquinas virtuales a menos que haya copias de seguridad en otro equipo físico.
* Una equipo físico también es más vulnerable a los ataques si ejecuta varias máquinas virtuales en lugar de un solo sistema operativo.
## CentOS vs Debian para Born2beroot
Para el proyecto Born2beroot, tenemos la opción de elegir entre dos sistemas operativos para nuestra máquina virtual: CentOS o Debian.
Estas dos distribuciones de GNU/Linux son compatibles con la comunidad y de código abierto. Ambos son conocidos por su estabilidad y seguridad.
### Debian
Lanzada en 1993, Debian es la distribución de Linux más antigua y robusta.
Desarrollado y mantenido por una gran comunidad, admite una amplia variedad de arquitecturas y ofrece una gran selección de paquetes.
Este sistema operativo es fácil de actualizar y su instalación mínima ahorra recursos del servidor y aumenta su seguridad.
Debian es un sistema operativo común, ya sea para servidores de red o computadoras personales.
Sin embargo, Debian no es particularmente fácil de usar y requiere interactuar con la terminal. Además, no ofrece una versión Enterprise.
### CentOS
CentOS, por otro lado, está específicamente dirigido a servidores.
Lanzado en 2004, CentOS (Community Enterprise Operating System) es la versión gratuita de código abierto de RHEL (Red Hat Enterprise Linux).
Casi idéntico y 100 % compatible con RHEL Quasiment identique et 100 % compatible con RHEL desde una perspectiva binaria, CentOS se usa ampliamente en el mundo de TI.
De hecho, cumple con los requisitos de seguridad y estabilidad de la empresa y ofrece 10 años de soporte para cada una de sus versiones.
Sin embargo, la actualización de una versión a la siguiente sigue siendo difícil: se recomienda una instalación completa de la nueva versión.

En diciembre de 2020, la comunidad puso fin al desarrollo de CentOS a favor de CentOS Stream.
CentOS Stream es una versión más experimental y menos estable que precede a RHEL, mientras que CentOS solía seguir de cerca los lanzamientos de versiones de RHEL.

Para nuestro proyecto Born2beroot, CentOS es el que nos interesa, no CentOS Stream.
A pesar de que CentOS ya no se está desarrollando, sigue siendo una buena opción a considerar para explorar distribuciones de Linux específicas para empresas, RHEL en particular.
## ¿Qué sistema operativo elegir para Born2beroot?
No existe una opción "mejor" para Born2beroot.
El resto de esta serie de artículos se concentrará en Debian simplemente porque parece que se usa más ampliamente en los servidores de Internet en general.
## Creación de una máquina virtual Born2beroot
Para poder crear nuestra máquina virtual Born2beroot necesitaremos dos cosas:
* Oracle VirtualBox que ya está instalado en los equipos en 42.
* La imagen de disco de Debian, que podemos descargar desde la web oficial.
Una vez instalado VirtualBox, podemos comenzar a configurar nuestra máquina virtual.
