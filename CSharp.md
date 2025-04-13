**Fundamentos de .NET y C#**

1.   ¿Qué es .NET?
     .NET es una plataforma de desarrollo de software de Microsoft que proporciona un entorno para construir y ejecutar aplicaciones en diferentes sistemas operativos (a través de .NET Core y .NET 5+). Incluye un Common Language Runtime (CLR) que gestiona la ejecución del código y una extensa biblioteca de clases (Base Class Library - BCL) que proporciona funcionalidades preconstruidas.

2.   ¿Qué es el Common Language Runtime (CLR)?
     El CLR es la máquina virtual de la plataforma .NET. Es responsable de la ejecución del código gestionado (escrito en lenguajes .NET como C# y VB.NET). Sus funciones principales incluyen la gestión de memoria (recolección de basura), la seguridad de tipos, el manejo de excepciones, la compilación Just-In-Time (JIT) y la interoperabilidad con código no gestionado.

3.   ¿Qué es el Common Type System (CTS)?
     El CTS es un estándar que define cómo se declaran y utilizan los tipos de datos en el CLR. Asegura la interoperabilidad entre los diferentes lenguajes .NET, permitiendo que el código escrito en un lenguaje pueda interactuar con el código escrito en otro lenguaje .NET.

4.   ¿Qué es el Framework Class Library (FCL) o Base Class Library (BCL)?
     La BCL es una vasta colección de clases, interfaces, estructuras y tipos de valor que proporcionan funcionalidades preconstruidas para tareas comunes como la manipulación de archivos, la comunicación de red, la gestión de datos, la seguridad y la interfaz de usuario.

5.   ¿Cuáles son las diferencias entre tipos de valor y tipos de referencia en C#?
    
    **Tipos de valor:** Almacenan directamente su valor en la memoria (en la pila). Las asignaciones crean una copia independiente del valor. Ejemplos: `int`, `float`, `bool`, `struct`, `enum`.
    **Tipos de referencia:** Almacenan una referencia (dirección de memoria) al objeto real que se encuentra en el heap. Las asignaciones copian la referencia, por lo que ambas variables apuntan al mismo objeto. Ejemplos: `class`, `string`, `interface`, `delegate`, `array`.

6.   ¿Qué es el boxing y el unboxing en C#?
    
    **Boxing:** Es el proceso de convertir un tipo de valor a un tipo de referencia (`object`) o a un tipo de interfaz implementado por el tipo de valor. Implica la asignación de memoria en el heap y la copia del valor.
    **Unboxing:** Es el proceso de extraer un tipo de valor de un tipo de referencia previamente boxed. Requiere una conversión explícita y una verificación de tipos. El unboxing es más costoso en términos de rendimiento que el boxing.

7.   ¿Qué son las propiedades en C# y por qué son útiles?
     Las propiedades proporcionan un mecanismo flexible para leer, escribir o calcular los valores de los campos de una clase. Permiten controlar el acceso a los campos a través de los accesores `get` y `set`, lo que permite agregar lógica adicional (validación, notificaciones, etc.) durante la lectura o escritura del valor.

8.   ¿Qué son los modificadores de acceso en C# (public, private, protected, internal, protected internal)?
     Los modificadores de acceso controlan la visibilidad de los miembros de una clase:
    * `public`: Accesible desde cualquier lugar.
    * `private`: Accesible solo dentro de la misma clase.
    * `protected`: Accesible dentro de la misma clase o de clases derivadas.
    * `internal`: Accesible dentro del mismo ensamblado.
    * `protected internal`: Accesible dentro del mismo ensamblado o desde clases derivadas en otros ensamblados.

9.   ¿Qué es la herencia en la programación orientada a objetos (POO)?
     La herencia es un mecanismo que permite a una clase (clase derivada o hija) heredar las propiedades y métodos de otra clase (clase base o padre). Promueve la reutilización de código y la creación de jerarquías de clases.

10.  ¿Qué es el polimorfismo en la POO?
     El polimorfismo (muchas formas) permite que los objetos de diferentes clases respondan a la misma invocación de método de manera diferente. En C#, se logra a través de la herencia (métodos virtuales y overrides) y las interfaces.

11.  ¿Qué son las interfaces en C# y cómo se diferencian de las clases abstractas?
    
    **Interfaces:** Definen un contrato que una clase debe implementar. Solo contienen declaraciones de métodos, propiedades, eventos e indexadores (sin implementación). Una clase puede implementar múltiples interfaces.
    **Clases abstractas:** Pueden contener tanto miembros abstractos (sin implementación) como miembros concretos (con implementación). Una clase solo puede heredar de una única clase abstracta. Las clases abstractas se utilizan para proporcionar una base común con cierta funcionalidad compartida para las clases derivadas.

12.  ¿Qué son los delegates y los eventos en C#?
    
    **Delegates:** Son tipos que representan referencias a métodos con una firma particular. Permiten tratar los métodos como objetos y pasarlos como parámetros.
    **Eventos:** Proporcionan una forma de notificar a otros objetos cuando ocurre una acción específica. Se basan en delegates y siguen un patrón de publicación-suscripción. Ayudan a desacoplar objetos.

13.  ¿Qué son los tipos genéricos en C# y cuáles son sus beneficios?
     Los tipos genéricos permiten definir clases, estructuras, interfaces y métodos que operan con tipos de datos sin especificar en tiempo de compilación. Sus beneficios incluyen:
    **Seguridad de tipos:** Detectan errores de tipo en tiempo de compilación en lugar de tiempo de ejecución.
    **Reutilización de código:** Una única definición genérica puede funcionar con múltiples tipos de datos.
    **Rendimiento:** Evitan la necesidad de operaciones de boxing y unboxing para tipos de valor.

14.  ¿Qué es LINQ (Language Integrated Query)?
     LINQ es un conjunto de características en C# que proporciona una sintaxis unificada para consultar datos de diferentes fuentes (colecciones de objetos, bases de datos, XML, etc.). Permite escribir consultas de manera declarativa directamente en el código C#.

15.  ¿Qué son las expresiones lambda en C#?
     Las expresiones lambda son funciones anónimas concisas que se pueden utilizar donde se espera un tipo delegado. Proporcionan una sintaxis abreviada para crear métodos anónimos.

16.  ¿Qué es Async y Await en C# y para qué se utilizan?
     `async` y `await` son palabras clave que facilitan la escritura de código asíncrono no bloqueante.
    * `async`: Se utiliza para marcar un método como asíncrono, lo que permite el uso de la palabra clave `await` dentro de él.
    * `await`: Se utiliza para pausar la ejecución de un método asíncrono hasta que se complete una operación asíncrona (que devuelve un `Task` o `Task<T>`). Esto evita el bloqueo del hilo principal, mejorando la capacidad de respuesta de la aplicación.

**ASP.NET Core**

1.   ¿Qué es ASP.NET Core?
     ASP.NET Core es un framework de código abierto y multiplataforma para construir aplicaciones web modernas, APIs y servicios en la nube con .NET. Es una reescritura significativa de ASP.NET 4.x, ofreciendo mejoras en rendimiento, modularidad y flexibilidad.

2.   ¿Cuáles son las principales diferencias entre ASP.NET Core y ASP.NET Framework?
    
    **Plataforma:** ASP.NET Framework solo funciona en Windows, mientras que ASP.NET Core es multiplataforma (Windows, macOS, Linux).
    **Arquitectura:** ASP.NET Core tiene una arquitectura más modular y basada en middleware.
    **Rendimiento:** ASP.NET Core generalmente ofrece un mejor rendimiento.
    **Dependencias:** ASP.NET Core utiliza NuGet para la gestión de dependencias y tiene un sistema de configuración más flexible.
    **Hosting:** ASP.NET Core puede ser auto-hospedado (self-hosted) o hospedado en IIS, Nginx, Apache, etc.

3.   ¿Qué es el middleware en ASP.NET Core?
     El middleware es un componente de software que se ensambla en una canalización para manejar las solicitudes y respuestas HTTP. Cada componente de middleware en la canalización puede realizar ciertas operaciones en la solicitud antes de pasarla al siguiente middleware, y en la respuesta a medida que regresa.

4.   ¿Qué es el enrutamiento (Routing) en ASP.NET Core?
     El enrutamiento es el proceso de hacer coincidir las solicitudes HTTP entrantes con los controladores y las acciones correspondientes en la aplicación. ASP.NET Core utiliza un sistema de enrutamiento basado en patrones de URL.

5.   ¿Qué es un Controlador (Controller) en MVC (Model-View-Controller)?
     Un controlador es una clase responsable de manejar las solicitudes del usuario, interactuar con el modelo para obtener o manipular datos y seleccionar la vista que se mostrará al usuario. Actúa como un intermediario entre el modelo y la vista.

6.   ¿Qué es un Modelo (Model) en MVC?
     El modelo representa los datos de la aplicación y la lógica de negocio. Es responsable de interactuar con la capa de datos (por ejemplo, una base de datos) y proporcionar los datos al controlador.

7.   ¿Qué es una Vista (View) en MVC?
     Una vista es responsable de presentar los datos al usuario. En ASP.NET Core, las vistas se suelen crear utilizando Razor, una sintaxis de marcado que permite incrustar código C# en el HTML.

8.   ¿Qué son los ViewBags, ViewData y TempData en ASP.NET Core MVC?
     Son formas de pasar datos desde el controlador a la vista:
    **ViewBag:** Es una propiedad dinámica que permite pasar datos de forma flexible (sin necesidad de definir propiedades). Los datos solo están disponibles durante la solicitud actual.
    **ViewData:** Es un diccionario de tipo `ViewDataDictionary` que permite pasar datos utilizando claves de cadena. También está disponible solo durante la solicitud actual.
    **TempData:** Es un diccionario que se utiliza para pasar datos entre redirecciones (una solicitud a la siguiente). Los datos se marcan para su eliminación después de ser leídos.

9.   ¿Qué son los Tag Helpers en ASP.NET Core?
     Los Tag Helpers son atributos del lado del servidor que proporcionan funcionalidad del lado del servidor dentro de las etiquetas HTML en las vistas de Razor. Ofrecen una forma más amigable para HTML de interactuar con la lógica del servidor en comparación con los HTML Helpers tradicionales.

10.  ¿Qué son los View Components en ASP.NET Core?
     Los View Components son similares a los Partial Views, pero son más potentes. Permiten encapsular la lógica de representación y los datos necesarios para mostrar un componente de la interfaz de usuario reutilizable.

11.  ¿Qué es la Inyección de Dependencias (Dependency Injection - DI) en ASP.NET Core?
     La inyección de dependencias es un patrón de diseño donde las dependencias de una clase (otros objetos de los que depende) se proporcionan externamente en lugar de ser creadas dentro de la clase. ASP.NET Core tiene un contenedor de DI integrado que facilita la gestión de dependencias.

12.  ¿Qué son los Servicios (Services) en el contexto de la Inyección de Dependencias en ASP.NET Core?
     Los servicios son clases que encapsulan la lógica de negocio o tareas específicas de la aplicación. Se registran en el contenedor de DI y se pueden inyectar en los controladores, otros servicios, etc.

13.  ¿Cuáles son los diferentes scopes de los servicios en la DI de ASP.NET Core (Transient, Scoped, Singleton)?
    
    **Transient:** Se crea una nueva instancia del servicio cada vez que se solicita.
    **Scoped:** Se crea una instancia del servicio por solicitud web. Esta instancia se comparte entre todos los componentes que solicitan el servicio dentro de la misma solicitud.
    **Singleton:** Se crea una única instancia del servicio durante toda la vida de la aplicación.

14.  ¿Qué es Entity Framework Core (EF Core)?
     EF Core es un Object-Relational Mapper (ORM) ligero, extensible y multiplataforma para .NET. Permite interactuar con bases de datos utilizando objetos .NET en lugar de escribir código SQL directamente.

15.  ¿Qué son las Migraciones en EF Core?
     Las migraciones son una forma de administrar los cambios en el esquema de la base de datos a lo largo del tiempo. EF Core puede generar scripts de migración basados en los cambios realizados en los modelos de datos, lo que facilita la actualización de la base de datos a una nueva versión del modelo.

16.  ¿Qué son las APIs RESTful?
     Las APIs RESTful son un estilo de arquitectura para diseñar aplicaciones de red. Se basan en los principios de REST (Representational State Transfer) y utilizan verbos HTTP (GET, POST, PUT, DELETE, etc.) para realizar operaciones sobre recursos. Las APIs RESTful suelen ser sin estado y utilizan formatos de datos como JSON o XML para la comunicación.

17.  ¿Qué son los códigos de estado HTTP comunes que debes conocer para el desarrollo de APIs?
     Algunos códigos de estado comunes incluyen:
    * `200 OK`: Solicitud exitosa.
    * `201 Created`: Recurso creado exitosamente.
    * `204 No Content`: Solicitud exitosa, pero no hay contenido para devolver.
    * `400 Bad Request`: La solicitud no se pudo entender o procesar debido a un formato incorrecto o datos inválidos.
    * `401 Unauthorized`: Se requiere autenticación.
    * `403 Forbidden`: El servidor entiende la solicitud, pero se niega a autorizarla.
    * `404 Not Found`: El recurso solicitado no se pudo encontrar.
    * `500 Internal Server Error`: Error genérico del servidor.

18.  ¿Qué es la autenticación y la autorización en el contexto de la seguridad de aplicaciones web?
    
    **Autenticación:** Es el proceso de verificar la identidad de un usuario (¿quién eres?).
    **Autorización:** Es el proceso de determinar qué acciones puede realizar un usuario autenticado (¿qué permisos tienes?).

19.  ¿Qué es JWT (JSON Web Token) y cómo se utiliza para la autenticación?
     JWT es un estándar abierto basado en JSON para crear tokens de acceso que afirman alguna cantidad de declaraciones (claims). Se utilizan comúnmente para la autenticación sin estado en aplicaciones web y APIs. Un servidor genera un JWT después de que un usuario se autentica correctamente, y el cliente lo incluye en las solicitudes posteriores para probar su identidad.

20.  ¿Qué son los filtros en ASP.NET Core?
     Los filtros son componentes que se ejecutan antes o después de ciertas etapas en la canalización de procesamiento de solicitudes, como la ejecución de controladores o resultados de acciones. Permiten implementar lógica transversal como la autenticación, autorización, validación y manejo de excepciones.

**Conceptos Adicionales Importantes**

1.   ¿Qué son las pruebas unitarias y por qué son importantes?
     Las pruebas unitarias son pruebas automatizadas que verifican la funcionalidad de unidades individuales de código (por ejemplo, métodos o clases). Son importantes porque ayudan a garantizar la calidad del código, facilitan la refactorización, detectan errores tempranamente y proporcionan documentación viva del comportamiento del código.

2.   ¿Qué son las pruebas de integración?
     Las pruebas de integración verifican la interacción entre diferentes partes o componentes de una aplicación (por ejemplo, la interacción entre un controlador y un servicio, o entre la aplicación y una base de datos). Aseguran que los diferentes módulos trabajen juntos correctamente.

3.   ¿Qué es el patrón de diseño Repository?
     El patrón Repository es un patrón de diseño que abstrae la lógica de acceso a los datos. Proporciona una interfaz para interactuar con la capa de datos (por ejemplo, una base de datos) de una manera independiente de la implementación específica de la persistencia.

4.   ¿Qué es el patrón de diseño Unit of Work?
     El patrón Unit of Work mantiene un registro de todos los cambios realizados en la memoria durante una transacción de negocio. Al final de la transacción, todos los cambios se envían a la base de datos como una sola unidad. Ayuda a garantizar la consistencia de los datos.

5.   ¿Qué es la cultura `IConfiguration` en ASP.NET Core?
     La interfaz `IConfiguration` proporciona un marco para leer la configuración de la aplicación desde diversas fuentes, como archivos JSON (`appsettings.json`), variables de entorno, argumentos de línea
	
¡Claro! Aquí tienes más preguntas y respuestas para tu entrevista técnica de .NET, cubriendo áreas adicionales y profundizando en algunos conceptos:

**Patrones de Diseño y Arquitectura**

1.   Describe el patrón de diseño Model-View-ViewModel (MVVM) y en qué escenarios es útil.
     MVVM es un patrón de diseño arquitectónico utilizado principalmente en aplicaciones con interfaces de usuario ricas (como WPF y Xamarin). Separa la lógica de la interfaz de usuario (View) de la lógica de presentación y los datos (ViewModel). El ViewModel expone datos y comandos que la View puede enlazar (data binding). Es útil para mejorar la capacidad de prueba, la mantenibilidad y la separación de responsabilidades.

2.   ¿Qué es el patrón de diseño Inyección de Dependencias (DI) y cuáles son sus beneficios?
     (Ya se mencionó en ASP.NET Core, pero es un concepto fundamental). DI es un patrón donde las dependencias de una clase se proporcionan externamente en lugar de ser creadas dentro de la clase. Los beneficios incluyen:
    **Bajo acoplamiento:** Las clases dependen de abstracciones (interfaces) en lugar de implementaciones concretas.
    **Mayor capacidad de prueba:** Las dependencias se pueden reemplazar fácilmente con mocks o stubs para las pruebas unitarias.
    **Mayor flexibilidad y mantenibilidad:** Facilita la sustitución de implementaciones.
    **Mejor organización del código:** Promueve la separación de responsabilidades.

3.   ¿Qué son los microservicios y cuáles son sus ventajas y desventajas en comparación con una arquitectura monolítica?
     Los microservicios son un enfoque arquitectónico donde una aplicación se estructura como una colección de servicios pequeños, independientes y débilmente acoplados que se comunican a través de una red.
    **Ventajas:** Mayor escalabilidad, flexibilidad tecnológica, despliegue independiente, mejor tolerancia a fallos, equipos más pequeños y enfocados.
    **Desventajas:** Mayor complejidad en la gestión, comunicación entre servicios, pruebas distribuidas, consistencia de datos distribuida, observabilidad.

4.   ¿Qué es Docker y cómo se relaciona con el desarrollo de aplicaciones .NET Core?
     Docker es una plataforma para construir, enviar y ejecutar aplicaciones en contenedores. Un contenedor es un entorno aislado que incluye todo lo necesario para ejecutar una aplicación (código, dependencias, bibliotecas, etc.). Docker facilita la creación de entornos de desarrollo consistentes, el despliegue de aplicaciones en diferentes entornos y la escalabilidad de las aplicaciones .NET Core al empaquetarlas en contenedores portátiles.

5.   ¿Qué es Kubernetes y cómo se utiliza con aplicaciones .NET Core en contenedores?
     Kubernetes es un sistema de orquestación de contenedores de código abierto que automatiza el despliegue, la escalabilidad y la gestión de aplicaciones en contenedores. Permite gestionar un gran número de contenedores .NET Core, realizar el balanceo de carga, el autoescalado, la recuperación automática en caso de fallos y la gestión de la configuración.

**Rendimiento y Optimización**

1.   ¿Qué técnicas conoces para mejorar el rendimiento de una aplicación .NET?
     Algunas técnicas incluyen:
    **Uso eficiente de colecciones:** Elegir la estructura de datos adecuada para la tarea (List, Dictionary, HashSet, etc.).
    **Evitar el boxing y unboxing innecesarios.**
    **Utilizar operaciones asíncronas para tareas de E/S.**
    **Optimizar las consultas a la base de datos (indexación, evitar consultas N+1).**
    **Implementar caching (en memoria, distribuido).**
    **Minimizar el uso de cadenas dentro de bucles (usar `StringBuilder`).**
    **Utilizar perfiles de rendimiento para identificar cuellos de botella.**
    **Optimizar el uso de recursos (liberar objetos no utilizados, usar `using` para objetos `IDisposable`).**
    **Compilación Ahead-Of-Time (AOT) para .NET Core en ciertos escenarios.**

2.   ¿Qué es la recolección de basura (Garbage Collection - GC) en .NET y cómo funciona?
     El GC es un proceso automático que gestiona la asignación y liberación de memoria para las aplicaciones .NET. Identifica y libera la memoria ocupada por objetos que ya no están en uso. El GC funciona mediante la identificación de objetos "vivos" (aquellos que todavía están referenciados por la aplicación) y la reclamación de la memoria ocupada por los objetos "muertos". .NET utiliza un GC generacional para optimizar este proceso.

3.   ¿Qué son los `IDisposable` y el bloque `using` en C# y cuándo deberían utilizarse?
     La interfaz `IDisposable` debe ser implementada por clases que contienen recursos no gestionados (por ejemplo, conexiones a archivos, sockets, bases de datos). El método `Dispose()` libera estos recursos explícitamente. El bloque `using` proporciona una forma concisa de asegurar que el método `Dispose()` de un objeto `IDisposable` se llame correctamente, incluso si ocurre una excepción dentro del bloque.

**Seguridad**

1.   ¿Qué medidas de seguridad importantes debes considerar al desarrollar aplicaciones web con ASP.NET Core?
     Algunas medidas importantes incluyen:
    **Validación de entrada:** Prevenir ataques de inyección (SQL, XSS).
    **Codificación de salida:** Escapar datos antes de mostrarlos en la vista para prevenir XSS.
    **Protección contra CSRF (Cross-Site Request Forgery):** Utilizar tokens antifalsificación.
    **Implementación de una autenticación y autorización robustas.**
    **Uso de HTTPS para cifrar la comunicación.**
    **Protección de secretos de configuración (usar Azure Key Vault, User Secrets en desarrollo).**
    **Mantener las dependencias actualizadas para evitar vulnerabilidades conocidas.**
    **Implementar políticas de seguridad de contenido (CSP).**
    **Limitar la exposición de información sensible en los mensajes de error.**
    **Auditoría y logging de eventos de seguridad.**

2.   ¿Qué es CORS (Cross-Origin Resource Sharing) y cómo se configura en ASP.NET Core?
     CORS es un mecanismo de seguridad del navegador que restringe las solicitudes HTTP que un script que se ejecuta en un origen puede realizar a un recurso en otro origen (dominio, protocolo o puerto diferente). En ASP.NET Core, CORS se configura mediante middleware. Se pueden definir políticas de CORS para permitir o restringir solicitudes de orígenes específicos, con métodos y encabezados específicos.

**Pruebas**

1.   ¿Qué frameworks de pruebas unitarias conoces para .NET?
     Algunos frameworks populares son:
    **xUnit.net:** Un framework moderno y extensible.
    **NUnit:** Un framework ampliamente utilizado con muchas características.
    **MSTest:** El framework de pruebas unitarias de Microsoft.

2.   ¿Qué son los mocks y los stubs y cuándo se utilizan en las pruebas unitarias?
    
    **Stubs:** Proporcionan respuestas controladas a las llamadas durante una prueba. Se utilizan para reemplazar dependencias y verificar el estado.
    **Mocks:** Son objetos simulados con expectativas preprogramadas sobre cómo se interactúa con ellos. Se utilizan para verificar el comportamiento (que se llamaron los métodos correctos con los argumentos correctos).

**Conceptos Avanzados**

1.   ¿Qué son los atributos en C# y para qué se utilizan?
     Los atributos proporcionan metadatos que se pueden asociar con elementos del código (clases, métodos, propiedades, etc.). Se utilizan para proporcionar información adicional al compilador, al entorno de ejecución o a otras herramientas. Ejemplos incluyen `[Obsolete]`, `[Serializable]`, atributos de validación en ASP.NET Core.

2.   ¿Qué es la reflexión en .NET?
     La reflexión es la capacidad de un programa para examinarse a sí mismo en tiempo de ejecución. Permite inspeccionar y manipular tipos, miembros (campos, métodos, propiedades, eventos), atributos y ensamblados. Se utiliza en escenarios como la serialización, la inyección de dependencias y la creación de frameworks.

3.   ¿Qué son los ensamblados (Assemblies) en .NET?
     Un ensamblado es la unidad de despliegue y versionado para las aplicaciones .NET. Contiene código compilado (en formato IL - Intermediate Language), metadatos de tipos, recursos y el manifiesto del ensamblado (que describe las dependencias y la identidad del ensamblado). Pueden ser ejecutables (`.exe`) o bibliotecas (`.dll`).

4.   ¿Qué es la diferencia entre `Task` y `ValueTask` en C#? ¿Cuándo usar `ValueTask`?
     Ambos representan el resultado de una operación asíncrona. `Task` es un tipo de referencia, mientras que `ValueTask` es un struct (tipo de valor) que puede envolver tanto un `Task` como un resultado sincrónico inmediato. `ValueTask` puede ayudar a reducir las asignaciones de memoria en ciertos escenarios donde las operaciones asíncronas a menudo se completan de forma sincrónica. Sin embargo, su uso requiere precaución, especialmente al realizar múltiples `await` o al acceder a su resultado varias veces.

5.   Explica el concepto de "garbage collection pressure" y cómo puede afectar el rendimiento de una aplicación.
     La "garbage collection pressure" se refiere a la frecuencia e intensidad con la que el recolector de basura necesita ejecutarse. Una alta presión de GC puede ocurrir debido a la creación excesiva de objetos de corta duración, lo que obliga al GC a trabajar más para limpiar la memoria. Esto puede resultar en pausas en la ejecución de la aplicación y un menor rendimiento general. Técnicas como la reutilización de objetos, la reducción de asignaciones innecesarias y la elección de estructuras de datos apropiadas pueden ayudar a reducir la presión del GC.

¡Por supuesto! Aquí tienes aún más preguntas y respuestas para tu entrevista técnica de .NET, cubriendo aspectos más específicos y escenarios comunes:

**Entity Framework Core (Profundización)**

1.   ¿Cuál es la diferencia entre `Include` y `ThenInclude` en EF Core?
     Se utilizan para cargar datos relacionados (eager loading). `Include` carga la primera nivel de entidades relacionadas. `ThenInclude` se utiliza después de un `Include` para cargar un nivel más profundo de entidades relacionadas. Por ejemplo, si tienes `Author -> Book -> Publisher`, usarías `Include(a => a.Books).ThenInclude(b => b.Publisher)`.

2.   ¿Qué es el lazy loading en EF Core y cuáles son sus posibles problemas?
     El lazy loading es una característica que carga las entidades relacionadas automáticamente cuando se accede a la propiedad de navegación por primera vez. Si bien puede parecer conveniente, puede llevar a problemas de rendimiento conocidos como "consulta N+1", donde se ejecuta una consulta inicial para obtener una lista de entidades y luego N consultas adicionales para cargar las entidades relacionadas de cada una.

3.   ¿Qué estrategias de carga de datos existen en EF Core además del lazy loading?
    
    **Eager Loading:** Se utiliza `Include` y `ThenInclude` para cargar todas las entidades relacionadas necesarias en una sola consulta.
    **Explicit Loading:** Se cargan las entidades relacionadas explícitamente utilizando el método `Load()` en la propiedad de navegación o `Context.Entry(entity).Reference(navigationProperty).Load()` o `Context.Entry(entity).Collection(navigationProperty).Load()`.
    **Proyecciones (Select):** Se seleccionan solo las propiedades necesarias, incluyendo las propiedades de las entidades relacionadas, lo que puede reducir la cantidad de datos transferidos.

4.   ¿Qué es el tracking de cambios en EF Core y cómo funciona?
     EF Core realiza un seguimiento de los cambios realizados en las entidades que se consultan desde la base de datos. Cuando llamas a `SaveChanges()`, EF Core genera y ejecuta automáticamente las sentencias SQL necesarias (INSERT, UPDATE, DELETE) para persistir esos cambios en la base de datos. El contexto mantiene una instantánea del estado original de las entidades.

5.   ¿Qué significa el estado de una entidad en EF Core (Added, Modified, Deleted, Unchanged, Detached)?
     Estos estados representan el estado de una entidad en el contexto de EF Core:
    * `Added`: La entidad aún no existe en la base de datos y se insertará al llamar a `SaveChanges()`.
    * `Modified`: Se han realizado cambios en la entidad y se actualizará en la base de datos.
    * `Deleted`: La entidad se marcará para su eliminación de la base de datos.
    * `Unchanged`: La entidad se consultó de la base de datos y no se ha modificado.
    * `Detached`: La entidad no está siendo rastreada por el contexto.

6.   ¿Cómo se manejan las transacciones en EF Core?
     EF Core proporciona mecanismos para trabajar con transacciones a través de `DbContext.Database.BeginTransaction()`, `transaction.Commit()`, y `transaction.Rollback()`. También se puede utilizar `DbContext.Database.ExecuteSqlRaw()` para ejecutar SQL dentro de una transacción. EF Core también admite transacciones implícitas al llamar a `SaveChanges()` (aunque para múltiples operaciones relacionadas, es mejor usar transacciones explícitas).

7.   ¿Qué son los DbContext y DbSet en EF Core?
    
    * `DbContext`: Representa una sesión con la base de datos. Es responsable de rastrear cambios, administrar conexiones y ejecutar comandos. Actúa como un puente entre tus entidades de dominio y la base de datos.
    * `DbSet<TEntity>`: Representa una colección de todas las entidades de un tipo dado en el contexto. Se utiliza para realizar consultas LINQ contra la tabla de la base de datos correspondiente.

**ASP.NET Core (Profundización)**

1.   ¿Qué son los filtros de autorización en ASP.NET Core y cómo se utilizan?
     Los filtros de autorización son un tipo de filtro de ASP.NET Core que se ejecuta antes de la ejecución de los controladores y las acciones para verificar si el usuario actual tiene los permisos necesarios para acceder al recurso solicitado. Se pueden implementar utilizando atributos (`[Authorize]`) o implementando la interfaz `IAuthorizationFilter`.

2.   ¿Qué son las políticas de autorización en ASP.NET Core?
     Las políticas de autorización permiten definir reglas de autorización más complejas que simplemente verificar si un usuario está autenticado. Una política puede incluir múltiples requisitos (claims, roles, etc.) que deben cumplirse para que un usuario esté autorizado. Se registran en la configuración de servicios y se aplican a través del atributo `[Authorize(Policy = "NombreDeLaPolitica")]`.

3.   ¿Cómo funciona la configuración en ASP.NET Core?
     ASP.NET Core utiliza un sistema de configuración flexible que puede cargar datos de múltiples fuentes, como archivos `appsettings.json`, archivos específicos del entorno (`appsettings.Development.json`), variables de entorno, argumentos de línea de comandos y Azure Key Vault. La configuración se accede a través de la interfaz `IConfiguration`.

4.   ¿Qué es la validación de modelos en ASP.NET Core MVC y cómo se implementa?
     La validación de modelos asegura que los datos enviados por el cliente cumplen con ciertas reglas definidas en los modelos (por ejemplo, campos requeridos, longitud máxima, formatos). Se implementa utilizando atributos de validación en las propiedades del modelo (`[Required]`, `[StringLength]`, `[EmailAddress]`, etc.) del espacio de nombres `System.ComponentModel.DataAnnotations`. ASP.NET Core realiza la validación automáticamente al recibir datos y proporciona el objeto `ModelState` para verificar los errores.

5.   ¿Qué son los Razor Pages en ASP.NET Core? ¿En qué se diferencian de MVC?
     Razor Pages son un modelo de programación simplificado para construir interfaces de usuario basadas en páginas con ASP.NET Core. A diferencia de MVC, donde la lógica de la interfaz de usuario se divide entre controladores y vistas, en Razor Pages la lógica de la página (handlers) y la presentación (la página Razor `.cshtml`) están más cohesionadas en un solo archivo. Son ideales para escenarios basados en páginas donde la lógica es específica de esa página.

6.   ¿Qué son los SignalR en ASP.NET Core?
     SignalR es una biblioteca que simplifica la adición de funcionalidad web en tiempo real a las aplicaciones ASP.NET Core. Permite la comunicación bidireccional entre el servidor y los clientes (browsers, aplicaciones móviles, etc.). Es útil para escenarios como chats, notificaciones en tiempo real, tableros de control y juegos colaborativos.

7.   ¿Qué son los servicios Hosted en ASP.NET Core?
     Los servicios Hosted son clases que implementan la interfaz `IHostedService`. Proporcionan una forma de ejecutar tareas en segundo plano dentro de una aplicación ASP.NET Core. Se inician cuando se inicia la aplicación y se detienen cuando la aplicación se cierra. Son útiles para tareas como el procesamiento en segundo plano, la ejecución de trabajos programados o la escucha de eventos.

**C# (Profundización)**

1.   ¿Qué son los records en C# 9.0 y posteriores y cuáles son sus beneficios?
     Los records son un nuevo tipo de referencia en C# diseñados para proporcionar una sintaxis concisa para crear tipos inmutables centrados en los datos. Ofrecen características integradas como igualdad basada en valores, impresión concisa y la capacidad de crear copias con modificaciones no destructivas (`with` expresiones). Son beneficiosos para la inmutabilidad, la concurrencia y la claridad del código cuando se trabaja con datos.

2.   ¿Qué son los patrones en C# (pattern matching)?
     El pattern matching es una característica de C# que permite probar si un valor tiene una cierta "forma" y, si la tiene, extraer información de ese valor. Se utiliza en sentencias `switch`, expresiones `is` y otras construcciones para escribir código más conciso y legible que realiza comprobaciones de tipo y extracción de datos al mismo tiempo.

3.   ¿Qué son los nullable reference types en C# 8.0 y cómo ayudan a prevenir errores `NullReferenceException`?
     Los nullable reference types son una característica que permite a los desarrolladores indicar si una variable de tipo referencia puede contener el valor `null`. De forma predeterminada, los tipos de referencia no son nullable. Para permitir que una variable contenga `null`, se debe declarar utilizando el sufijo `?` (por ejemplo, `string?`). El compilador realiza un análisis estático para advertir sobre posibles desreferencias nulas, lo que ayuda a prevenir `NullReferenceException` en tiempo de ejecución.

4.   ¿Qué son los módulos de código fuente (source generators) en C# 9.0 y posteriores?
     Los source generators son una característica que permite que el código C# que se ejecuta durante la compilación inspeccione el programa del usuario y genere archivos de código fuente adicionales que se compilan junto con el resto del código. Se utilizan para automatizar la generación de código repetitivo, mejorar el rendimiento y proporcionar capacidades similares a la reflexión en tiempo de compilación.

5.   ¿Qué son los operadores `??` (null-coalescing) y `??=` (null-coalescing assignment) en C#?
    
    * `??`: El operador null-coalescing devuelve el operando izquierdo si no es `null`; de lo contrario, devuelve el operando derecho. Ejemplo: `string name = inputName ?? "Default Name";`
    * `??=`: El operador null-coalescing assignment asigna el valor del operando derecho al operando izquierdo solo si el operando izquierdo es `null`. Ejemplo: `string name = null; name ??= "Default Name";` (ahora `name` será "Default Name").

**Preguntas sobre Tecnologías Relacionadas**

1.   ¿Tienes experiencia trabajando con alguna base de datos NoSQL (por ejemplo, MongoDB, Cassandra)? ¿Cuáles son las diferencias clave entre bases de datos SQL y NoSQL?
     (Prepara una respuesta basada en tu experiencia, si la tienes). Las diferencias clave suelen incluir el esquema (fijo vs. dinámico), la estructura de los datos (tablas vs. documentos, clave-valor, grafos, etc.), la escalabilidad (vertical vs. horizontal) y las propiedades ACID vs. BASE.

2.   ¿Estás familiarizado con servicios en la nube como Azure o AWS? ¿Qué servicios de .NET o relacionados con .NET has utilizado?
     (De nuevo, basa tu respuesta en tu experiencia). Menciona servicios como Azure App Service, Azure Functions, Azure SQL Database, Azure Cosmos DB, AWS EC2, AWS Lambda, AWS RDS, etc.

3.   ¿Qué sabes sobre las pruebas de integración continua y la entrega continua (CI/CD)? ¿Qué herramientas has utilizado?
     CI/CD son prácticas para automatizar el proceso de construcción, prueba y despliegue de software. Menciona herramientas como Azure DevOps, Jenkins, GitHub Actions, GitLab CI/CD.
