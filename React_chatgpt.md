
---

## 🧠 **Preguntas Básicas de React**

### 1. ¿Qué es React?
  
React es una biblioteca de JavaScript para construir interfaces de usuario, especialmente para aplicaciones de una sola página (SPA). Fue desarrollada por Facebook y se basa en un modelo declarativo y orientado a componentes.

---

### 2. ¿Qué es un componente en React?
  
Un componente es una pieza reutilizable de la interfaz de usuario. Puede ser una **función** o una **clase** que retorna JSX. Se pueden anidar, componer y manejar estado y eventos.

---

### 3. ¿Qué es JSX?
  
JSX (JavaScript XML) es una extensión de sintaxis que permite escribir HTML dentro de JavaScript. Es una forma más legible de crear elementos React, pero finalmente se transpila a `React.createElement()`.

---

### 4. ¿Qué diferencia hay entre componentes controlados y no controlados?
  
- **Controlados**: el estado del input lo maneja React (por ejemplo, con `useState`).
- **No controlados**: el estado se maneja directamente en el DOM, accedido vía refs (`useRef`).

---

### 5. ¿Qué son los hooks en React?
  
Son funciones que permiten usar características de React como el estado (`useState`) o efectos secundarios (`useEffect`) en componentes funcionales.

---

## ⚙️ **Hooks Comunes**

### 6. ¿Qué hace `useState`?
  
`useState` permite añadir estado local a componentes funcionales. Devuelve un array con el valor actual y una función para actualizarlo.

```js
const [count, setCount] = useState(0);
```

---

### 7. ¿Qué hace `useEffect`?
  
Permite ejecutar efectos secundarios como peticiones a APIs, suscripciones, etc. Se ejecuta después de que el componente se monta o actualiza.

```js
useEffect(() => {
  console.log("Montado o actualizado");
}, [dependencias]);
```

---

### 8. ¿Qué hace `useRef`?
  
Permite acceder directamente a un elemento del DOM o mantener un valor persistente entre renders sin causar re-render.

```js
const inputRef = useRef(null);
```

---

### 9. ¿Qué hace `useMemo` y `useCallback`?

- **`useMemo(fn, deps)`**: Memoriza el resultado de una función.
- **`useCallback(fn, deps)`**: Memoriza la **función** misma.

Se usan para optimización de rendimiento, evitando cálculos o recreación de funciones innecesarias.

---

## 🔄 **Ciclo de vida y renderizado**

### 10. ¿Cómo se maneja el ciclo de vida en componentes funcionales?
  
Usando `useEffect`, que puede simular:
- `componentDidMount` → `useEffect(() => { ... }, [])`
- `componentDidUpdate` → `useEffect(() => { ... }, [dependencias])`
- `componentWillUnmount` → retorna una función en `useEffect`

---

## ⚡ **Avanzado**

### 11. ¿Qué es el Virtual DOM?
  
Es una representación en memoria del DOM real. React lo usa para minimizar accesos al DOM real, haciendo "reconciliación" para aplicar solo los cambios necesarios.

---

### 12. ¿Qué es un estado global en React y cómo lo puedes manejar?
  
El estado global es accesible desde múltiples componentes. Puedes manejarlo con:
- **Context API** (nativo)
- Librerías como **Redux**, **Zustand**, o **Jotai**

---

### 13. ¿Qué es el Context API y cuándo lo usarías?
  
Es una forma de compartir valores entre componentes sin necesidad de pasar props manualmente. Ideal para temas, autenticación, configuraciones globales.

```js
const MyContext = createContext();
<MyContext.Provider value={...}><MyComponent /></MyContext.Provider>
```

---

### 14. ¿Cómo evitar renderizados innecesarios?

- Usar `React.memo` para componentes
- Usar `useMemo` y `useCallback`
- Evitar cambios de estado innecesarios
- Dividir en componentes más pequeños

---

### 15. ¿Qué es Server-Side Rendering (SSR) y qué herramienta usarías?

SSR es cuando el HTML se genera en el servidor y se envía al cliente. Mejora SEO y velocidad de carga. En React se usa comúnmente **Next.js** para lograrlo.

---

## 🧠 **Intermedio / Avanzado**

### 16. ¿Qué es React.memo y cuándo lo usarías?
  
`React.memo` es una HOC (Higher Order Component) que memoriza un componente funcional, evitando su re-renderizado si sus props no cambian.

```js
const MyComponent = React.memo((props) => {
  return <div>{props.value}</div>;
});
```

Usado para optimización en componentes puros o que se renderizan frecuentemente.

---

### 17. ¿Qué diferencia hay entre `useEffect` y `useLayoutEffect`?

- `useEffect`: se ejecuta **después** de que el componente ha sido pintado.
- `useLayoutEffect`: se ejecuta **antes** del pintado, bloqueando el render. Ideal para medir o modificar el DOM antes de que se muestre.

---

### 18. ¿Qué es un error boundary?

Es un componente de clase que captura errores de renderizado en sus componentes hijos y muestra una UI alternativa.

```js
class ErrorBoundary extends React.Component {
  state = { hasError: false };

  static getDerivedStateFromError() {
    return { hasError: true };
  }

  componentDidCatch(error, info) {
    // log error
  }

  render() {
    return this.state.hasError ? <FallbackUI /> : this.props.children;
  }
}
```

---

### 19. ¿Cómo manejarías formularios en React?

Opciones:
- Con estado local (`useState` por campo).
- Usar bibliotecas como **Formik**, **React Hook Form**, que facilitan validaciones, manejo de errores y valores iniciales.

---

### 20. ¿Qué es lifting state up?

Es mover el estado a un componente ancestro común para que pueda ser compartido por varios componentes hijos.

---

### 21. ¿Cómo pasar datos de un componente hijo a uno padre?

Mediante una función pasada desde el padre como prop:

```js
function Parent() {
  const handleData = (data) => console.log(data);
  return <Child onSend={handleData} />;
}

function Child({ onSend }) {
  return <button onClick={() => onSend("data")}>Enviar</button>;
}
```

---

### 22. ¿Qué es un custom hook?

Es una función que usa hooks de React para encapsular lógica reutilizable.

```js
function useCounter() {
  const [count, setCount] = useState(0);
  const increment = () => setCount((c) => c + 1);
  return { count, increment };
}
```

---

## 🧪 **Testing en React**

### 23. ¿Cómo testearías un componente en React?

Con librerías como:
- **React Testing Library** (recomendado)
- **Jest** (para mocks, assertions)

```js
render(<Button />);
fireEvent.click(screen.getByText("Click me"));
expect(mockFn).toHaveBeenCalled();
```

---

## 🛠️ **Patrones y buenas prácticas**

### 24. ¿Qué es el patrón "Compound Component"?

Permite crear componentes que comparten lógica pero se usan como una API declarativa:

```jsx
<Tabs>
  <Tabs.List />
  <Tabs.Panel />
</Tabs>
```

---

### 25. ¿Cómo manejarías una lista de miles de elementos sin afectar el rendimiento?

Usar **virtualización**, por ejemplo con `react-window` o `react-virtualized`, que renderizan solo los elementos visibles.

---

### 26. ¿Qué es el hydration en React?

Es el proceso donde React une su código con el HTML ya renderizado por el servidor (SSR), volviendo interactivo el contenido. Se usa en frameworks como Next.js.

---

### 27. ¿Qué diferencia hay entre `key` y `ref` en React?

- `key`: ayuda a React a identificar qué elementos han cambiado en listas.
- `ref`: da acceso directo al DOM o a una instancia de componente.

---

### 28. ¿Qué es un portal en React?

Permite renderizar un componente fuera de la jerarquía DOM padre.

```jsx
ReactDOM.createPortal(<Modal />, document.getElementById('modal-root'))
```

---

### 29. ¿Cómo manejarías un componente que necesita diferentes layouts?

Usar composición de layouts en rutas (por ejemplo, con React Router o Next.js), o usar un componente `Layout` que reciba el contenido como `children`.

---

### 30. ¿Qué es el Suspense y para qué sirve?

`<Suspense>` permite manejar **loading states** para componentes que cargan asincrónicamente (como con `React.lazy()` para code splitting).

```js
const LazyComponent = React.lazy(() => import('./MyComponent'));
<Suspense fallback={<Spinner />}>
  <LazyComponent />
</Suspense>
```

---

## 📦 **Estado Global y Gestión de Datos**

### 31. ¿Qué es Redux y cuándo lo usarías?
  
Redux es una librería para manejar estado global de forma predecible. Se usa cuando:
- Tienes múltiples componentes que necesitan acceder/modificar el mismo estado.
- Necesitas herramientas como middleware, time-travel debugging, o trazabilidad.

---

### 32. ¿Cuál es la diferencia entre Context API y Redux?

- **Context API**: ideal para datos globales simples (tema, idioma, usuario actual). No es ideal para estados complejos o cambios frecuentes.
- **Redux**: mejor para aplicaciones más grandes, con herramientas de middleware, devtools, control estricto de flujo de datos.

---

### 33. ¿Qué es un thunk en Redux?
  
Es una función que permite manejar acciones asíncronas (como llamadas a APIs) antes de enviar una acción real al store.

```js
const fetchData = () => async (dispatch) => {
  const data = await apiCall();
  dispatch({ type: 'SET_DATA', payload: data });
};
```

---

## ⚡ **Performance y Optimización**

### 34. ¿Qué técnicas usarías para mejorar el rendimiento de una app React?

- `React.memo`, `useMemo`, `useCallback`
- Dividir componentes grandes
- Code splitting con `React.lazy` + `Suspense`
- Virtualización de listas
- Evitar renders innecesarios
- SSR (Next.js)

---

### 35. ¿Cómo detectar cuántas veces se re-renderiza un componente?
  
Puedes usar:
- `console.log` en el cuerpo del componente
- React DevTools → Profiler
- Librerías como `why-did-you-render`

---

### 36. ¿Qué es el "code splitting"?
  
Es una técnica que divide el bundle de JS en partes más pequeñas (chunks) para cargar solo lo necesario, mejorando tiempo de carga inicial. Se puede lograr con `React.lazy`.

---

## 🌐 **React Router**

### 37. ¿Cómo implementas rutas en React?

Con `react-router-dom`:

```jsx
import { BrowserRouter, Route, Routes } from 'react-router-dom';

<BrowserRouter>
  <Routes>
    <Route path="/" element={<Home />} />
    <Route path="/about" element={<About />} />
  </Routes>
</BrowserRouter>
```

---

### 38. ¿Cómo haces redirección en React Router?
  
Usando el hook `useNavigate`:

```js
const navigate = useNavigate();
navigate('/login');
```

---

### 39. ¿Cómo defines rutas protegidas (auth) en React?

Con un componente envoltorio que verifique autenticación:

```js
const PrivateRoute = ({ children }) => {
  const isAuth = useAuth();
  return isAuth ? children : <Navigate to="/login" />;
};
```

---

## 🔌 **Integración con APIs**

### 40. ¿Cómo harías una llamada HTTP en React?

Usualmente con `fetch` o `axios`, dentro de `useEffect`:

```js
useEffect(() => {
  fetch('/api/data')
    .then(res => res.json())
    .then(setData);
}, []);
```

---

### 41. ¿Qué pasa si no incluyes las dependencias correctas en `useEffect`?

Puede causar errores sutiles:
- Efectos que no se actualizan con los cambios de variables
- Comportamiento no deseado o bugs de sincronización

---

### 42. ¿Cómo manejarías un loading y un error en una llamada fetch?


```js
const [loading, setLoading] = useState(true);
const [error, setError] = useState(null);

useEffect(() => {
  fetchData()
    .then(setData)
    .catch(setError)
    .finally(() => setLoading(false));
}, []);
```

---

## 🧱 **Arquitectura y Escalabilidad**

### 43. ¿Qué estructura de carpetas usarías en una app React grande?

Una posible estructura sería:

```
src/
  components/
  pages/
  hooks/
  services/
  contexts/
  utils/
  assets/
  App.jsx
```

---

### 44. ¿Qué es una arquitectura basada en feature-modules?

Organizas el proyecto por **funcionalidades** y no por tipo de archivo. Cada módulo (feature) tiene sus componentes, hooks, servicios, estilos, etc.

```
src/
  features/
    auth/
      AuthPage.jsx
      authService.js
      authSlice.js
```

---

### 45. ¿Cómo manejarías side effects como logs, analytics o tracking?

- Con `useEffect` para efectos simples.
- Con middlewares en Redux para efectos más complejos.
- Con wrappers de hooks como `useTrackPageView()`.

---

## 🧪 **Extras**

### 46. ¿Qué es una HOC (Higher-Order Component)?
  
Es una función que toma un componente y retorna uno nuevo con funcionalidad adicional.

```js
const withLogger = (Component) => (props) => {
  console.log(props);
  return <Component {...props} />;
};
```

---

### 47. ¿Qué es un render prop?
  
Un patrón donde pasas una función como prop para que el componente hijo decida qué renderizar.

```js
<DataProvider render={(data) => <Display data={data} />} />
```

---

### 48. ¿Cómo implementas temas oscuros y claros en React?

Con `Context`, CSS variables o librerías como `styled-components` o `tailwind`.

---

### 49. ¿Qué son los fragments en React?
  
Son contenedores invisibles (`<>...</>`) que permiten retornar múltiples elementos sin añadir nodos al DOM.

---

### 50. ¿Cuándo usarías `key` en listas?
  
Siempre que se renderiza una lista. Ayuda a React a identificar elementos modificados y evitar renders innecesarios.

```js
{items.map(item => <li key={item.id}>{item.name}</li>)}
```

---
