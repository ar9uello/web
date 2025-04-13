**Fundamentos de React**

1.  ¿Qué es React?
     React es una biblioteca de JavaScript de código abierto para construir interfaces de usuario (UI) o componentes de UI. Es mantenida por Facebook (ahora Meta) y una gran comunidad de desarrolladores. Se enfoca en la capa de la vista en aplicaciones web y móviles, permitiendo crear interfaces interactivas y dinámicas de manera eficiente.

2.  ¿Cuáles son las principales características de React?
     Las principales características incluyen:
    * **JSX (JavaScript XML):** Una extensión de sintaxis que permite escribir código similar a HTML dentro de JavaScript.
    * **Componentes:** Bloques de construcción reutilizables de la interfaz de usuario. Pueden ser funcionales o de clase.
    * **Virtual DOM:** Una representación en memoria del DOM real, que permite optimizar las actualizaciones de la interfaz al realizar solo los cambios necesarios.
    * **Flujo de datos unidireccional:** Los datos fluyen en una sola dirección (generalmente de padre a hijo), lo que facilita el seguimiento de los cambios y la gestión del estado.
    * **Declarativo:** Se describe cómo debería ser la interfaz de usuario para un estado dado, y React se encarga de realizar las manipulaciones del DOM necesarias.
    * **Gran ecosistema:** Una amplia variedad de bibliotecas y herramientas complementarias disponibles.

3.  ¿Qué es JSX y por qué es útil en React?
     JSX (JavaScript XML) es una extensión de sintaxis que permite escribir código similar a HTML dentro de archivos JavaScript. Aunque no es estrictamente necesario usar JSX con React, facilita la descripción de la estructura de la interfaz de usuario de manera más intuitiva y visualmente similar al HTML. Luego, JSX se transpila a llamadas a `React.createElement()` que crean los elementos del Virtual DOM.

4.  ¿Cuál es la diferencia entre un componente funcional y un componente de clase en React?
    
    * **Componentes Funcionales:** Son funciones de JavaScript que aceptan `props` como argumento y devuelven elementos de React (JSX). Son más simples y concisos, y eran la forma principal de escribir componentes antes de la introducción de los Hooks.
    * **Componentes de Clase:** Son clases de JavaScript que extienden `React.Component` y deben implementar un método `render()` que devuelve elementos de React. Tenían características como estado local (`this.state`) y métodos de ciclo de vida antes de la llegada de los Hooks.

    Con la introducción de los Hooks, los componentes funcionales pueden acceder a las mismas funcionalidades que antes solo estaban disponibles en los componentes de clase (como estado y ciclo de vida). Por lo tanto, los componentes funcionales con Hooks son la forma predominante de escribir componentes en React moderno.

4.1 En React, **un "hook"** (o gancho en español) es una **función especial que te permite “engancharte” a las características de React**, como el estado (`state`), el ciclo de vida (`lifecycle`) y el contexto, **sin necesidad de escribir una clase**.

### 🧠 ¿Por qué existen los hooks?
Antes de React 16.8, si querías usar estado o ciclos de vida, tenías que usar componentes de clase. Los hooks trajeron esa funcionalidad a los componentes funcionales, haciendo el código más limpio y reutilizable.

---

### 🧩 Ejemplos comunes de hooks

| Hook            | ¿Qué hace? |
|------------------|------------|
| `useState`       | Agrega estado local a un componente funcional. |
| `useEffect`      | Ejecuta código cuando el componente se monta, actualiza o desmonta. |
| `useContext`     | Permite usar valores del contexto (como un global state). |
| `useRef`         | Mantiene una referencia mutable entre renders. |
| `useMemo`        | Memoriza valores calculados para evitar cálculos innecesarios. |
| `useCallback`    | Memoriza funciones para evitar recrearlas en cada render. |

---

### ✅ Ejemplo simple con `useState`

```jsx
import { useState } from 'react';

function Contador() {
  const [contador, setContador] = useState(0);

  return (
    <div>
      <p>Contador: {contador}</p>
      <button onClick={() => setContador(contador + 1)}>
        Incrementar
      </button>
    </div>
  );
}
```

---

Si querés te puedo mostrar cómo usar más hooks o crear uno personalizado. ¿Estás trabajando en algo específico con React?

**Componentes y Props**

5.  ¿Qué son las `props` en React?
     Las `props` (abreviatura de "properties") son objetos que se utilizan para pasar datos de un componente padre a sus componentes hijos. Son inmutables desde la perspectiva del componente hijo (solo el componente padre puede modificarlas). Las `props` permiten personalizar y configurar los componentes hijos.

6.  ¿Cómo se pasan datos de un componente padre a un componente hijo?
     Los datos se pasan como atributos HTML personalizados en el componente hijo cuando se renderiza dentro del componente padre. Estos atributos se recogen como un objeto `props` dentro del componente hijo.

    ```jsx
    // Componente Padre
    function Padre() {
      const mensaje = "Hola desde el padre!";
      return <Hijo texto={mensaje} numero={123} />;
    }

    // Componente Hijo
    function Hijo(props) {
      return (
        <div>
          <p>{props.texto}</p>
          <p>{props.numero}</p>
        </div>
      );
    }
    ```

7.  ¿Qué es la desestructuración de `props`? ¿Por qué es útil?
     La desestructuración de `props` es una característica de JavaScript (ES6) que permite extraer propiedades específicas de un objeto (en este caso, el objeto `props`) directamente en la definición del componente o dentro de su cuerpo. Es útil porque hace que el código sea más legible y conciso al evitar tener que escribir `props.nombreDeLaPropiedad` repetidamente.

    ```jsx
    // Sin desestructuración
    function Saludo(props) {
      return <p>Hola, {props.nombre}!</p>;
    }

    // Con desestructuración en la definición del componente
    function Saludo({ nombre }) {
      return <p>Hola, {nombre}!</p>;
    }

    // Con desestructuración dentro del cuerpo del componente
    function Info(props) {
      const { edad, ciudad } = props;
      return (
        <div>
          <p>Edad: {edad}</p>
          <p>Ciudad: {ciudad}</p>
        </div>
      );
    }
    ```

**Estado (State)**

8.  ¿Qué es el estado (`state`) en React?
     El estado (`state`) es un objeto que contiene datos privados y controlados por un componente. A diferencia de las `props`, el estado puede cambiar con el tiempo dentro del componente en respuesta a interacciones del usuario u otros eventos. Cuando el estado de un componente cambia, React re-renderiza el componente y sus hijos.

9.  ¿Cómo se gestiona el estado en componentes funcionales?
     En componentes funcionales, el estado se gestiona utilizando el Hook `useState`. Este Hook permite declarar una variable de estado y una función para actualizarla dentro del componente funcional.

    ```jsx
    import React, { useState } from 'react';

    function Contador() {
      const [count, setCount] = useState(0);

      const incrementar = () => {
        setCount(count + 1);
      };

      return (
        <div>
          <p>Contador: {count}</p>
          <button onClick={incrementar}>Incrementar</button>
        </div>
      );
    }
    ```

10. ¿Cuál es la diferencia entre `useState` y `setState` (en componentes de clase)?
    
    * `useState` es un Hook utilizado en componentes funcionales para declarar y gestionar el estado. Retorna un par: la variable de estado actual y una función para actualizarla.
    * `setState` es un método utilizado en componentes de clase para actualizar el estado del componente. Cuando se llama a `setState`, React programa una re-renderización del componente. Es importante recordar que `setState` puede ser asíncrono y puede recibir un objeto o una función como argumento.

11. ¿Por qué el estado no se debe modificar directamente (`this.state.algo = nuevoValor`)?
     El estado en React debe modificarse utilizando la función de actualización proporcionada por `useState` (en componentes funcionales) o el método `setState` (en componentes de clase). La modificación directa del estado no activa el proceso de re-renderización de React, lo que significa que la interfaz de usuario no se actualizará para reflejar el nuevo estado. Además, React puede optimizar las actualizaciones de estado cuando se utiliza la función de actualización correcta.

**Ciclo de Vida (Lifecycle) y Hooks**

12. Describe brevemente el ciclo de vida de un componente de clase en React.
     El ciclo de vida de un componente de clase tiene varias fases:
    * **Montaje (Mounting):** Cuando el componente se está creando e insertando en el DOM (`constructor`, `static getDerivedStateFromProps`, `render`, `componentDidMount`).
    * **Actualización (Updating):** Cuando el componente se re-renderiza debido a cambios en las `props` o el `state` (`static getDerivedStateFromProps`, `shouldComponentUpdate`, `render`, `getSnapshotBeforeUpdate`, `componentDidUpdate`).
    * **Desmontaje (Unmounting):** Cuando el componente se está eliminando del DOM (`componentWillUnmount`).

13. ¿Qué son los Hooks en React? ¿Cuáles son algunos Hooks comunes?
     Los Hooks son funciones que permiten a los componentes funcionales acceder a características de React que antes solo estaban disponibles en los componentes de clase, como el estado y los efectos secundarios. Los Hooks no funcionan dentro de clases.

    Algunos Hooks comunes incluyen:
    * `useState`: Para gestionar el estado local.
    * `useEffect`: Para manejar efectos secundarios (como suscripciones, timers, llamadas a APIs).
    * `useContext`: Para acceder al valor de un Context.
    * `useRef`: Para crear referencias a elementos del DOM o mantener valores mutables que no causan re-renderizaciones.
    * `useCallback`: Para memorizar funciones y evitar re-creaciones innecesarias.
    * `useMemo`: Para memorizar valores computados y evitar re-cálculos innecesarios.

14. ¿Cuál es el propósito del Hook `useEffect`? ¿Cómo se utiliza?
     El Hook `useEffect` se utiliza para realizar efectos secundarios en componentes funcionales. Los efectos secundarios pueden incluir la obtención de datos de una API, la configuración de suscripciones, la manipulación directa del DOM o cualquier otra operación que no esté directamente relacionada con la renderización de la interfaz de usuario.

    Se utiliza pasando una función como primer argumento. Esta función se ejecutará después de cada renderización (o después de la primera renderización, dependiendo del segundo argumento opcional).

    ```jsx
    import React, { useState, useEffect } from 'react';

    function EjemploEfecto() {
      const [count, setCount] = useState(0);

      useEffect(() => {
        document.title = `Contador: ${count}`; // Efecto secundario: actualizar el título del documento

        // Función de limpieza (opcional)
        return () => {
          document.title = 'React App'; // Se ejecuta al desmontar el componente o antes del próximo efecto
        };
      }, [count]); // El efecto se ejecuta solo si 'count' cambia

      return (
        <div>
          <p>Contador: {count}</p>
          <button onClick={() => setCount(count + 1)}>Incrementar</button>
        </div>
      );
    }
    ```

    El segundo argumento (un array de dependencias) controla cuándo se vuelve a ejecutar el efecto. Si se omite, el efecto se ejecuta después de cada renderización. Si se pasa un array vacío (`[]`), el efecto se ejecuta solo una vez después de la renderización inicial y la función de limpieza se ejecuta al desmontar el componente.

**Gestión de Eventos**

15. ¿Cómo se manejan los eventos en React?
     En React, los eventos se manejan de manera similar al HTML, pero con algunas diferencias sintácticas. Los nombres de los eventos se escriben en camelCase (por ejemplo, `onClick` en lugar de `onclick`), y se pasan funciones como controladores de eventos en lugar de strings.

    ```jsx
    function Boton() {
      const handleClick = () => {
        console.log('¡Botón clickeado!');
      };

      return <button onClick={handleClick}>Haz clic aquí</button>;
    }
    ```

16. ¿Cuál es la diferencia entre los manejadores de eventos inline y los definidos como métodos de clase/funciones?
    
    * **Manejadores de eventos inline:** Se definen directamente dentro del atributo del evento en el JSX. Pueden ser convenientes para controladores simples, pero pueden generar nuevas funciones en cada renderización, lo que podría afectar el rendimiento en componentes más complejos.

        ```jsx
        <button onClick={() => console.log('Inline handler')}>Botón Inline</button>
        ```

    * **Manejadores de eventos definidos como métodos de clase/funciones:** Se definen como métodos dentro de un componente de clase o como funciones separadas en componentes funcionales. Esta es generalmente la mejor práctica, ya que la función del controlador se crea solo una vez y se reutiliza en cada renderización.

        ```jsx
        // Componente de Clase
        class MiComponente extends React.Component {
          handleClick() {
            console.log('Manejador como método de clase');
          }
          render() {
            return <button onClick={this.handleClick}>Botón de Clase</button>;
          }
        }

        // Componente Funcional
        function MiComponenteFuncional() {
          const handleClick = () => {
            console.log('Manejador como función');
          };
          return <button onClick={handleClick}>Botón Funcional</button>;
        }
        ```

17. ¿Cómo se previene el comportamiento predeterminado de un evento en React?
     Se utiliza el método `preventDefault()` en el objeto de evento. Este método se llama dentro del controlador del evento para evitar la acción predeterminada que el navegador realizaría para ese evento (por ejemplo, la navegación al hacer clic en un enlace dentro de un formulario).

    ```jsx
    function MiFormulario() {
      const handleSubmit = (event) => {
        event.preventDefault();
        console.log('Formulario enviado (prevención del envío predeterminado)');
      };

      return (
        <form onSubmit={handleSubmit}>
          <button type="submit">Enviar</button>
        </form>
      );
    }
    ```

**Renderizado Condicional**

18. ¿Cuáles son las diferentes formas de realizar renderizado condicional en React?
     Hay varias formas de renderizar condicionalmente elementos en React:
    * **Sentencia `if/else`:** La forma más básica de JavaScript para controlar qué se renderiza.

        ```jsx
        function Mensaje(props) {
          if (props.mostrar) {
            return <p>Este mensaje se muestra condicionalmente.</p>;
          } else {
            return null; // O cualquier otro elemento o null
          }
        }
        ```

    * **Operador ternario (`? :`)** Una forma concisa de escribir condiciones simples.

        ```jsx
        function Saludo(props) {
          return props.estaLogueado ? <p>Bienvenido, usuario!</p> : <p>Por favor, inicia sesión.</p>;
        }
        ```

    * **Operador lógico `&&` (and lógico):** Útil para renderizar algo solo si una condición es verdadera.

        ```jsx
        function Alerta(props) {
          return props.mostrarAlerta && <div className="alerta">¡Mensaje de alerta!</div>;
        }
        ```

    * **Retorno temprano (`early return`):** Simplifica la lógica condicional saliendo de la función de renderización temprano si no se cumple una condición.

        ```jsx
        function Contenido(props) {
          if (!props.cargando) {
            return <p>Contenido cargado.</p>;
          }
          return <p>Cargando...</p>;
        }
        ```

**Listas y Keys**

19. ¿Cómo se renderizan listas de elementos en React?
     Se utilizan los métodos de array de JavaScript como `map()` para iterar sobre un array de datos y devolver un array de elementos de React (generalmente con JSX).

    ```jsx
    function ListaDeUsuarios(props) {
      const usuarios = [
        { id: 1, nombre: 'Ana' },
        { id: 2, nombre: 'Pedro' },
        { id: 3, nombre: 'Sofía' }
      ];

      const listaItems = usuarios.map(usuario => (
        <li key={usuario.id}>{usuario.nombre}</li>
      ));

      return <ul>{listaItems}</ul>;
    }
    ```

20. ¿Qué son las `keys` en React y por qué son importantes al renderizar listas?
     Las `keys` son atributos especiales que se deben proporcionar a los elementos dentro de un array cuando se renderizan listas. Las `keys` ayudan a React a identificar de forma única cada elemento de la lista. Esto es crucial para que React pueda realizar actualizaciones eficientes del DOM cuando los elementos de la lista se reordenan, se agregan o se eliminan. Sin `keys` únicas, React podría re-renderizar incorrectamente los elementos o perder el estado de los componentes. Generalmente, se utiliza un ID único proporcionado por los datos (como el `usuario.id` en el ejemplo anterior) como la `key`.

**Formularios**

21. ¿Cómo se manejan los formularios en React? ¿Qué es un "controlled component"?
     En React, los formularios se manejan utilizando el estado del componente para controlar los valores de los elementos del formulario (como `<input>`, `<textarea>`, `<select>`).

    Un **"controlled component"** es aquel en el que el valor de un elemento del formulario está vinculado al estado de React. Cuando el valor del elemento del formulario cambia (por ejemplo, el usuario escribe en un campo de entrada), se activa un controlador de eventos que actualiza el estado correspondiente. Luego, el componente se re-renderiza con el nuevo valor, que se refleja en el elemento del formulario.

    ```jsx
    import React, { useState } from 'react';

    function MiFormularioControlado() {
      const [nombre, setNombre] = useState('');

      const handleChange = (event) => {
        setNombre(event.target.value);
      };

      const handleSubmit = (event) => {
        event.preventDefault();
        console.log('Nombre ingresado:', nombre);
      };

      return (
        <form onSubmit={handleSubmit}>
		
		¡Claro! Aquí tienes más preguntas y respuestas para tu preparación en React, cubriendo temas adicionales que suelen ser relevantes en entrevistas técnicas:

**Estilos en React**

37. ¿Cuáles son las diferentes formas de aplicar estilos a componentes React?
     Hay varias formas de aplicar estilos en React:
    * **Estilos en línea (Inline Styles):** Se aplican directamente como el valor del atributo `style` en un elemento JSX. El valor es un objeto JavaScript donde las claves son nombres de propiedades CSS en camelCase.

        ```jsx
        <div style={{ backgroundColor: 'lightblue', padding: '10px' }}>
          Este div tiene estilos en línea.
        </div>
        ```

    * **Hojas de estilo CSS (CSS Files):** Se importan archivos CSS tradicionales y las clases se aplican a los elementos JSX usando el atributo `className`.

        ```jsx
        // MiComponente.module.css
        .contenedor {
          background-color: lightgreen;
          padding: 15px;
        }

        // MiComponente.js
        import './MiComponente.module.css';

        function MiComponente() {
          return <div className={styles.contenedor}>Este div tiene estilos de CSS.</div>;
        }
        ```

    * **Módulos CSS (CSS Modules):** Son archivos CSS donde los nombres de las clases tienen un alcance local por defecto. Se importan como objetos JavaScript, y las propiedades de este objeto corresponden a los nombres de las clases definidas en el archivo CSS. Esto ayuda a evitar colisiones de nombres de clases.

        ```jsx
        // MiComponente.module.css
        .texto {
          color: blue;
          font-weight: bold;
        }

        // MiComponente.js
        import styles from './MiComponente.module.css';

        function MiComponente() {
          return <p className={styles.texto}>Este párrafo tiene estilos de módulo CSS.</p>;
        }
        ```

    * **Bibliotecas de "Styled Components":** Permiten escribir CSS directamente dentro de los componentes React utilizando plantillas literales etiquetadas. Generan nombres de clases únicos y aplican los estilos al DOM. Ejemplos populares son `styled-components` y `emotion`.

        ```jsx
        import styled from 'styled-components';

        const ContenedorEstilizado = styled.div`
          background-color: yellow;
          border: 1px solid orange;
          padding: 20px;
        `;

        function MiComponenteEstilizado() {
          return <ContenedorEstilizado>Este div tiene estilos con styled-components.</ContenedorEstilizado>;
        }
        ```

    * **Bibliotecas de utilidades CSS (Utility-First CSS):** Proporcionan un conjunto de clases predefinidas para aplicar estilos comunes directamente en el JSX. Ejemplos son Tailwind CSS y Bootstrap.

        ```jsx
        function MiComponenteTailwind() {
          return <div className="bg-gray-200 p-4 rounded-md">Este div tiene estilos de Tailwind.</div>;
        }
        ```

38. ¿Cuáles son las ventajas y desventajas de usar estilos en línea en React?
    
    * **Ventajas:**
        * **Alcance local:** Los estilos se aplican solo al elemento específico, evitando problemas de colisiones de nombres de clases.
        * **Estilos dinámicos fáciles:** Es sencillo aplicar estilos basados en el estado o las props del componente.

    * **Desventajas:**
        * **Menor legibilidad:** Los estilos complejos pueden hacer que el JSX sea difícil de leer y mantener.
        * **No se pueden usar pseudoclases y pseudoelementos:** No hay una forma directa de definir `:hover`, `::before`, etc., en los estilos en línea.
        * **Reutilización limitada:** Los mismos estilos deben repetirse en múltiples elementos.
        * **Rendimiento potencialmente menor:** Para muchos elementos con los mismos estilos, puede ser menos eficiente que usar clases CSS.

39. ¿Qué son los Módulos CSS y por qué son útiles?
     (Ya respondido en la pregunta 37 como una de las formas de aplicar estilos). Son útiles principalmente porque proporcionan un **alcance local** para los nombres de las clases CSS. Esto significa que los nombres de las clases definidas en un archivo de módulo CSS solo son únicos dentro del alcance de ese módulo. Esto evita las colisiones de nombres de clases que pueden ocurrir en proyectos grandes con muchos archivos CSS, mejorando la mantenibilidad y la organización del código.

**Optimización y Buenas Prácticas**

40. ¿Qué implicaciones tiene la inmutabilidad en React? ¿Por qué es importante?
     La inmutabilidad significa que los datos no deben modificarse directamente después de su creación. En lugar de modificar un objeto o array existente, se debe crear una nueva copia con los cambios deseados.

    Es importante en React por varias razones:
    * **Detección eficiente de cambios:** React puede realizar comparaciones superficiales rápidas para determinar si el estado o las props han cambiado. Si los objetos se mutan directamente, la referencia sigue siendo la misma, y React podría no re-renderizar el componente cuando debería.
    * **Previsibilidad:** La inmutabilidad hace que el flujo de datos sea más predecible y fácil de entender, ya que los cambios de estado son explícitos.
    * **Facilita la depuración:** El seguimiento de los cambios de estado es más sencillo cuando se crean nuevos objetos en lugar de modificar los existentes. Herramientas como Redux DevTools se basan en la inmutabilidad para rastrear el historial de cambios.
    * **Mejora el rendimiento:** Al optimizar la detección de cambios, React puede evitar re-renderizaciones innecesarias, lo que mejora el rendimiento de la aplicación.

41. ¿Qué es el "prop drilling" y cómo se puede evitar?
     El "prop drilling" ocurre cuando se deben pasar props a través de múltiples niveles de componentes en el árbol de componentes, incluso si algunos de los componentes intermedios no necesitan esos props. Esto puede hacer que el código sea más difícil de mantener y refactorizar.

    Se puede evitar el prop drilling utilizando varias técnicas:
    * **Context API:** Permite compartir datos entre componentes sin tener que pasarlos explícitamente a través de cada nivel.
    * **Gestión de estado global (e.g., Redux, Zustand):** Centraliza el estado que necesitan muchos componentes, permitiendo que accedan a él directamente sin pasar props a través de la jerarquía.
    * **Component Composition:** En lugar de pasar datos a través de muchos niveles, se pueden pasar componentes hijos como props al componente padre, que luego los renderiza en la ubicación deseada. Esto permite que los componentes padres controlen la estructura y los hijos proporcionen la implementación específica.

        ```jsx
        // Ejemplo de Component Composition
        function Layout({ header, children, footer }) {
          return (
            <div>
              <header>{header}</header>
              <main>{children}</main>
              <footer>{footer}</footer>
            </div>
          );
        }

        function PaginaInicio() {
          return (
            <Layout
              header={<h1>Bienvenido</h1>}
              footer={<p>&copy; 2023 Mi Sitio Web</p>}
            >
              <p>Contenido principal de la página de inicio.</p>
            </Layout>
          );
        }
        ```

42. ¿Qué son los Fragments en React? ¿Cuándo son útiles?
     Los Fragments son una forma de agrupar una lista de hijos sin agregar nodos adicionales al DOM. Se representan con `<>` y `</>` (sintaxis abreviada) o con `<React.Fragment>`.

    Son útiles en los siguientes casos:
    * **Devolver múltiples elementos desde un componente:** La regla de JSX es que un componente solo puede devolver un único elemento padre. Los Fragments permiten devolver múltiples elementos sin la necesidad de un div u otro elemento envoltorio adicional.
    * **Evitar la adición de nodos innecesarios al DOM:** Al no renderizar un nodo envoltorio adicional, se puede mantener una estructura del DOM más limpia y potencialmente mejorar el rendimiento.
    * **Trabajar con ciertos layouts CSS:** Algunos layouts CSS (como Flexbox y Grid) pueden comportarse de manera inesperada si hay nodos envoltorios innecesarios.

    ```jsx
    function MiComponenteConFragment() {
      return (
        <> {/* Fragment abreviado */}
          <h1>Título</h1>
          <p>Primer párrafo.</p>
          <p>Segundo párrafo.</p>
        </>
      );
    }

    function OtroComponenteConFragment() {
      return (
        <React.Fragment> {/* Fragment explícito */}
          <li>Elemento 1</li>
          <li>Elemento 2</li>
        </React.Fragment>
      );
    }
    ```

**Conceptos Avanzados**

43. ¿Qué son los "portals" en React? ¿Cuándo se utilizan?
     Los Portals proporcionan una forma de renderizar los hijos de un componente en un nodo del DOM que está fuera de la jerarquía DOM del componente padre. El primer argumento de `ReactDOM.createPortal(child, container)` es el hijo (cualquier nodo renderizable de React), y el segundo argumento es un nodo del DOM.

    Se utilizan comúnmente para:
    * **Modales y diálogos:** Para renderizar modales directamente bajo el `<body>` para evitar problemas de apilamiento con contenedores padres con `overflow: hidden` o estilos de posicionamiento.
    * **Tooltips y popovers:** Para posicionar elementos flotantes relativos a un disparador pero renderizados fuera del flujo normal del documento.

    ```jsx
    import React from 'react';
    import ReactDOM from 'react-dom';

    const modalRoot = document.getElementById('modal-root'); // Elemento en el index.html

    class Modal extends React.Component {
      render() {
        return ReactDOM.createPortal(
          this.props.children,
          modalRoot
        );
      }
    }

    function MiComponenteConModal() {
      const [mostrarModal, setMostrarModal] = useState(false);

      return (
        <div>
          <button onClick={() => setMostrarModal(true)}>Mostrar Modal</button>
          {mostrarModal && (
            <Modal>
              <div className="modal">
                <h1>Este es un modal</h1>
                <button onClick={() => setMostrarModal(false)}>Cerrar</button>
              </div>
            </Modal>
          )}
        </div>
      );
    }
    ```

44. ¿Qué son las "referencias" (`refs`) en React? ¿Cuándo se deben usar?
     Las referencias (`refs`) proporcionan una forma de acceder a los nodos del DOM o a las instancias de los componentes de React que se crearon en la función de renderizado.

    Se deben usar con moderación y principalmente para casos en los que no hay una forma declarativa de lograr la funcionalidad deseada, como:
    * **Gestionar el foco, la selección de texto o la reproducción de medios.**
    * **Activar animaciones imperativas.**
    * **Integrar con bibliotecas DOM de terceros.**

    Hay diferentes formas de crear refs:
    * **`React.createRef()` (para componentes de clase y funcionales):** Crea un objeto ref que se puede adjuntar al atributo `ref` de un elemento JSX. La instancia del elemento se asignará a la propiedad `.current` del ref.

        ```jsx
        class MiInput extends React.Component {
          constructor(props) {
            super(props);
            this.inputRef = React.createRef();
          }

          focusInput = () => {
            this.inputRef.current.focus();
          };

          render() {
            return <input type="text" ref={this.inputRef} />;
          }
        }
        ```

    * **`useRef()` (Hook para componentes funcionales):** Similar a `React.createRef()`, pero se utiliza dentro de componentes funcionales.

        ```jsx
        import React, { useRef } from 'react';

        function MiInputFuncional() {
          const inputRef = useRef(null);

          const focusInput = () => {
            inputRef.current.focus();
          };

          return <input type="text" ref={inputRef} />;
        }
        ```

    * **Callbacks Refs (menos comunes en React moderno):** Permiten tener un control más granular sobre cuándo se establece y se anula la ref.

45. ¿Qué es el "error boundary" en React? ¿Cómo funciona?
     Un "error boundary" es un componente de React que puede atrapar errores de JavaScript en cualquier lugar de su árbol de componentes hijo, registrar esos errores y mostrar una interfaz de usuario de respaldo en lugar del árbol de componentes que falló. Los error boundaries atrapan errores durante el renderizado, en los lifecycle methods y en los constructores de todo su árbol hijo.

    Para que un componente se convierta en un error boundary, debe definir el método de lifecycle `static getDerivedStateFromError(error)` o `componentDidCatch(error, info)`.

    * **`static getDerivedStateFromError(error)`:** Se invoca después de que un error ha sido lanzado por un componente descendiente. Debe devolver un valor para actualizar el estado y mostrar la interfaz de usuario de respaldo.
    * **`componentDidCatch(error, info)`:** Se invoca después de que un error ha sido lanzado por un componente descendiente. Se puede utilizar para registrar el error y realizar efectos secundarios.

    ```jsx
    class ErrorBoundary extends React.Component {
      constructor(props) {
        super(props);
        this.state = { hasError: false };
      }

      static getDerivedStateFromError(error) {
        // Actualiza el estado para que la próxima renderización muestre la interfaz de usuario de respaldo.
        return { hasError: true };
      }

      componentDidCatch(error, errorInfo) {
        // Puedes también registrar el error a un servicio de reporte de errores
        console.error("Ocurrió un error:", error, errorInfo);
      }

      render() {
        if (this.state.hasError) {
          // Puedes renderizar cualquier interfaz de usuario de respaldo personalizada
          return <h1>Algo salió mal.</h1>;
        }

        return this.props.children;
      }
    }

    function MiComponenteQuePuedeFallar() {
      throw new Error('¡Componente fallido!');
      return <p>Este componente podría fallar.</p>;
    }

    function AppConErrorBoundary() {
      return (
        <ErrorBoundary>
          <MiComponenteQuePuedeFallar />
        </ErrorBoundary>
      );
    }
    ```

**Renderización del Lado del Servidor (SSR) y Generación de Sitios Estáticos (SSG)**

46. ¿Qué es la Renderización del Lado del Servidor (SSR) en React? ¿Cuáles son sus beneficios?
     La Renderización del Lado del Servidor (SSR) es la técnica de renderizar una aplicación React en el servidor y enviar el HTML completamente renderizado al navegador del cliente en la respuesta inicial. El navegador luego "hidrata" este HTML, adjuntando los listeners de eventos y haciendo que la aplicación sea interactiva.

    Sus beneficios incluyen:
    * **Mejora del SEO (Search Engine Optimization):** Los rastreadores de los motores de búsqueda pueden indexar más fácilmente el contenido de la página, ya que reciben HTML completamente renderizado.
    * **Mejora del tiempo de carga inicial percibido:** Los usuarios ven contenido más rápido, ya que el navegador no tiene que esperar a que se descargue y ejecute todo el JavaScript para renderizar la página inicial.
    * **Mejor experiencia para usuarios con conexiones lentas o dispositivos de baja potencia:** Pueden ver el contenido inicial más rápido antes de que la aplicación se vuelva completamente interactiva.
    * **Previsualización de enlaces mejorada en redes sociales:** Las plataformas de redes sociales pueden generar vistas previas más ricas de las páginas.

47. ¿Qué es la Generación de Sitios Estáticos (SSG) en React? ¿En qué se diferencia de SSR?
     La Generación de Sitios Estáticos (SSG) es el proceso de pre-renderizar las páginas de una aplicación React en el momento de la construcción (build time), en lugar de bajo demanda para cada solicitud del usuario como en SSR. Las páginas HTML generadas se sirven directamente desde un CDN, lo que resulta en tiempos de carga extremadamente rápidos.

    La principal diferencia con SSR es el momento de la renderización:
    * **SSR:** La renderización ocurre en el servidor en respuesta a cada solicitud del cliente.
    * **SSG:** La renderización ocurre una sola vez durante el proceso de construcción.

    SSG es ideal para sitios web con contenido que no cambia con frecuencia (por ejemplo, blogs, sitios de documentación, portafolios). SSR es más adecuado para aplicaciones con contenido dinámico o que requieren datos en tiempo real para la renderización inicial.

**Preguntas Generales y de Comportamiento**

48. ¿Cómo te mantienes actualizado con las últimas novedades y tendencias en el ecosistema de React?
     (Esta es una pregunta personal, pero puedes mencionar cosas como seguir blogs oficiales de React, participar en la comunidad en plataformas como Twitter o Stack Overflow, leer artículos y tutoriales, ver conferencias y webinars, experimentar con nuevas bibliotecas y herramientas en proyectos personales).

49. Describe algún proyecto desafiante en el que hayas trabajado con React y cómo lo abordaste.
     (Prepara un ejemplo específico de tu experiencia. Describe el problema, las tecnologías que utilizaste, los desafíos que enfrentaste y cómo los resolviste. Destaca tu proceso de pensamiento y tus habilidades de resolución de problemas).

50. ¿Qué aspectos de React te resultan más interesantes o te apasionan más?
    
