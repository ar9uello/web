---

### 🔹 **Nivel Básico**

#### 1. **¿Qué es React Native?**
React Native es un framework de código abierto creado por Meta que permite desarrollar aplicaciones móviles usando JavaScript y React. Compila a componentes nativos, lo que permite crear apps para iOS y Android con una base de código compartida.

---

#### 2. **¿Cuál es la diferencia entre React y React Native?**
- **React** se usa para construir interfaces web.
- **React Native** se usa para construir interfaces móviles usando componentes nativos (como `View`, `Text`, `ScrollView`) en lugar de HTML.

---

#### 3. **¿Qué componentes básicos tiene React Native?**
- `View`: contenedor como un `div` en web.
- `Text`: para mostrar texto.
- `Image`: para mostrar imágenes.
- `ScrollView`: vista desplazable.
- `TextInput`: entrada de texto.
- `TouchableOpacity` / `Pressable`: para manejar interacciones táctiles.

---

#### 4. **¿Cómo funciona el sistema de estilos en React Native?**
React Native usa un sistema de estilos basado en Flexbox y propiedades similares a CSS, pero no usa clases ni hojas de estilo externas. Todo es en JavaScript con objetos estilo:
```js
const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center'
  }
});
```

---

### 🔹 **Nivel Intermedio**

#### 5. **¿Cómo se maneja la navegación en React Native?**
Se usa la librería `react-navigation`. Hay varios tipos de navegadores:
- `StackNavigator`: navegación tipo pila.
- `TabNavigator`: navegación por pestañas.
- `DrawerNavigator`: menú lateral.

```bash
npm install @react-navigation/native
```

---

#### 6. **¿Cómo puedes comunicar componentes en React Native?**
- A través de `props`.
- Usando **Context API** o **Redux** para estado global.
- En apps más complejas: `MobX`, `Recoil`, `Zustand`.

---

#### 7. **¿Cómo se integran APIs nativas en React Native?**
Usando **Native Modules** (en Java/Kotlin o Swift/Objective-C) para exponer funcionalidades del sistema operativo al código JavaScript.

También puedes usar paquetes de la comunidad como `react-native-device-info`, `react-native-geolocation-service`, etc.

---

#### 8. **¿Cómo maneja React Native el rendimiento?**
- Usa **puente (bridge)** entre JS y el código nativo.
- Evitar renderizados innecesarios con `React.memo`, `useMemo`, `useCallback`.
- Para listas grandes, usar `FlatList` en vez de `ScrollView`.

---

### 🔹 **Nivel Avanzado**

#### 9. **¿Qué es el "bridge" en React Native?**
Es la capa que permite la comunicación entre el código JavaScript y el código nativo (Android/iOS). Cada llamada entre ambos mundos puede ser costosa, por lo que se recomienda minimizar la cantidad de interacciones.

---

#### 10. **¿Qué es JSI (JavaScript Interface) y cómo mejora el rendimiento?**
JSI es una evolución del bridge tradicional que permite un acceso más directo y rápido a funciones nativas desde JavaScript sin pasar por el puente tradicional. Esto mejora significativamente el rendimiento.

---

#### 11. **¿Qué es Hermes y cuáles son sus beneficios?**
Hermes es un motor de JavaScript optimizado para React Native. Beneficios:
- Menor tiempo de arranque (startup).
- Menor uso de memoria.
- Mejor rendimiento en dispositivos de gama baja.

---

#### 12. **¿Cómo harías testing en una app de React Native?**
- **Unit testing**: Jest.
- **Testing de componentes**: `@testing-library/react-native`.
- **End-to-end testing**: Detox o Appium.

---

#### 13. **¿Cómo manejarías actualizaciones over-the-air (OTA)?**
Con herramientas como **CodePush** (de Microsoft App Center) puedes enviar actualizaciones JS sin pasar por App Store/Play Store, aunque con algunas limitaciones.

---

### 🔹 **Arquitectura y Estado**

#### 1. **¿Qué herramientas usarías para manejar el estado global en React Native?**
- **Context API**: simple y nativa, útil para casos pequeños.
- **Redux**: robusta, ideal para apps grandes o complejas.
- **Redux Toolkit**: versión moderna y simplificada de Redux.
- **Zustand / Recoil / MobX**: alternativas más ligeras y modernas.

---

#### 2. **¿Cuál es la diferencia entre `useEffect` y `useLayoutEffect`?**
- `useEffect` se ejecuta **después** de que React pinta la pantalla.
- `useLayoutEffect` se ejecuta **antes** de que se pinte la pantalla, útil para cálculos de layout.

En React Native, `useLayoutEffect` puede bloquear el render inicial, así que se usa con cuidado.

---

#### 3. **¿Cómo manejarías el almacenamiento persistente en una app de React Native?**
- **`@react-native-async-storage/async-storage`**: almacenamiento clave-valor.
- **SQLite** o **WatermelonDB**: para datos estructurados.
- **SecureStore** o **Keychain/Keystore**: para guardar información sensible como tokens.

---

### 🔹 **Rendimiento y Optimización**

#### 4. **¿Cómo optimizarías una lista de elementos en React Native?**
- Usar **`FlatList`** o **`SectionList`** con `keyExtractor`, `initialNumToRender`, `getItemLayout`.
- Evitar `ScrollView` con muchos elementos.
- Usar `React.memo` para evitar renderizados innecesarios de ítems.

---

#### 5. **¿Qué es el re-render y cómo lo evitas?**
Es cuando un componente vuelve a ejecutarse y renderiza su salida visual. Se evita con:
- `React.memo`
- `useCallback` para funciones.
- `useMemo` para valores calculados.
- Dividir componentes grandes en componentes pequeños.

---

#### 6. **¿Qué herramientas usarías para perfilar el rendimiento de una app?**
- **Flipper**: depurador oficial con plugins para logs, performance, Redux, etc.
- **React DevTools**: para analizar renders.
- **Hermes** + `console.time`/`console.profile`: para medir tiempos de ejecución.

---

### 🔹 **Integraciones y Librerías Externas**

#### 7. **¿Cómo subirías una imagen a un servidor desde una app React Native?**
1. Usar `react-native-image-picker` o `expo-image-picker` para obtener la imagen.
2. Crear un `FormData` y enviarlo con `fetch` o `axios`.

```js
const formData = new FormData();
formData.append('photo', {
  uri: image.uri,
  name: 'photo.jpg',
  type: 'image/jpeg',
});

fetch('https://api.example.com/upload', {
  method: 'POST',
  body: formData,
});
```

---

#### 8. **¿Qué es Expo y cuáles son sus ventajas/desventajas?**
**Expo** es una plataforma que facilita el desarrollo con React Native.

Ventajas:
- Rápida configuración.
- Acceso a APIs comunes sin código nativo.
- Fácil testing en dispositivos físicos.

Desventajas:
- Limitaciones si necesitas código nativo personalizado.
- Tamaño del bundle algo más grande.

---

### 🔹 **Manejo de Ciclo de Vida y Navegación**

#### 9. **¿Cómo detectar cuándo una pantalla está activa o pierde el foco?**
Usar el hook `useFocusEffect` o `useIsFocused` de `@react-navigation/native`.

```js
import { useFocusEffect } from '@react-navigation/native';

useFocusEffect(
  useCallback(() => {
    // Pantalla está enfocada
    return () => {
      // Pantalla pierde el foco
    };
  }, [])
);
```

---

#### 10. **¿Qué pasa si colocas un `console.log` dentro de `useEffect` sin dependencias?**
El `useEffect` se ejecutará una sola vez al montar el componente, similar a `componentDidMount`.

---

### 🔹 **Prácticas y Errores Comunes**

#### 11. **¿Qué errores comunes ves en apps React Native?**
- No usar `FlatList` para listas grandes.
- Llamadas de red directamente en componentes sin `useEffect`.
- No limpiar efectos o subscripciones.
- No manejar correctamente los permisos del sistema (cámara, ubicación).
- Mal uso del hook `useEffect` causando renderizados infinitos.

---

#### 12. **¿Cómo estructurarías un proyecto grande de React Native?**
```bash
src/
├── components/
├── screens/
├── navigation/
├── services/
├── store/
├── hooks/
├── utils/
├── assets/
```

Se recomienda seguir patrones como **atomic design**, **clean architecture** o **feature-based structure**.

---

### 🔹 **Hooks y Manejo Avanzado de Componentes**

#### 1. **¿Cuál es la diferencia entre `useEffect` y `useFocusEffect` en React Native?**

- `useEffect` es un hook de React que se ejecuta después del render.
- `useFocusEffect` es específico de React Navigation, y se ejecuta **cada vez que la pantalla gana el foco**, incluso si ya estaba montada.

Ideal para cargar datos o iniciar acciones cada vez que un usuario entra en una pantalla.

---

#### 2. **¿Cómo limpiar un efecto en `useEffect`?**
```js
useEffect(() => {
  const subscription = someService.subscribe();

  return () => {
    subscription.unsubscribe();
  };
}, []);
```
El `return` dentro de `useEffect` sirve como función de limpieza cuando el componente se desmonta o cuando cambian las dependencias.

---

#### 3. **¿Cómo previenes memory leaks en React Native?**
- Limpiando efectos (`useEffect`) correctamente.
- Cancelando llamadas async o usando `AbortController`.
- No actualizando el estado después del desmontaje del componente.

```js
useEffect(() => {
  let isMounted = true;

  fetchData().then(data => {
    if (isMounted) setData(data);
  });

  return () => { isMounted = false };
}, []);
```

---

### 🔹 **Acceso a APIs y Conexiones de Red**

#### 4. **¿Cómo manejarías errores de red en React Native?**
Usando un `try/catch` con `axios` o `fetch`, y manejando los estados de error para mostrar mensajes adecuados al usuario.

```js
try {
  const response = await axios.get('https://api.example.com');
} catch (error) {
  if (error.response) {
    // Error de servidor
  } else {
    // Error de red o conexión
  }
}
```

---

#### 5. **¿Cómo mostrarías un loader mientras se cargan datos de una API?**
```js
const [loading, setLoading] = useState(true);

useEffect(() => {
  fetchData().finally(() => setLoading(false));
}, []);

return loading ? <ActivityIndicator /> : <DataComponent />;
```

---

### 🔹 **Componentes Personalizados y Reutilizables**

#### 6. **¿Cómo crearías un botón reutilizable en React Native?**
```tsx
const MyButton = ({ title, onPress }) => (
  <TouchableOpacity style={styles.button} onPress={onPress}>
    <Text>{title}</Text>
  </TouchableOpacity>
);
```

---

#### 7. **¿Cómo crearías un componente controlado con `TextInput`?**
```tsx
const [text, setText] = useState('');

<TextInput
  value={text}
  onChangeText={setText}
/>
```

---

### 🔹 **Multiplataforma y Dispositivos**

#### 8. **¿Cómo manejarías código específico para iOS y Android?**
- Usar `Platform.OS`:
```js
Platform.OS === 'ios' ? doIOS() : doAndroid();
```
- O crear archivos separados:
```txt
MyComponent.ios.js
MyComponent.android.js
```

---

#### 9. **¿Cómo manejarías diferentes tamaños de pantalla?**
- Usar `Dimensions` para obtener el ancho y alto del dispositivo.
- Usar `Flexbox` y estilos responsivos.
- Librerías útiles: `react-native-responsive-dimensions`, `react-native-size-matters`.

---

### 🔹 **Testeo**

#### 10. **¿Cómo testearías un componente con `@testing-library/react-native`?**
```tsx
import { render, fireEvent } from '@testing-library/react-native';

test('debe llamar al callback cuando se presiona el botón', () => {
  const onPressMock = jest.fn();
  const { getByText } = render(<MyButton title="Click" onPress={onPressMock} />);
  
  fireEvent.press(getByText('Click'));
  expect(onPressMock).toHaveBeenCalled();
});
```

---

### 🔹 **Internacionalización (i18n)**

#### 11. **¿Cómo agregarías soporte multilenguaje a tu app?**
Con librerías como `i18next` + `react-i18next` o `react-native-localize`.

```js
i18n.t('welcome'); // Traducción según el idioma detectado
```

---

#### 12. **¿Cómo detectar el idioma del dispositivo?**
```js
import * as RNLocalize from 'react-native-localize';

const locales = RNLocalize.getLocales();
const deviceLanguage = locales[0].languageCode;
```

---
