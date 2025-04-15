
---

## 🟢 Básico

### 1. **¿Qué es TypeScript y en qué se diferencia de JavaScript?**
  
TypeScript es un superset de JavaScript que añade tipado estático y otras características orientadas a objetos. La principal diferencia es que TypeScript permite definir tipos (como `string`, `number`, `boolean`, etc.) y verifica errores en tiempo de compilación, lo que mejora la mantenibilidad del código.

---

### 2. **¿Qué ventajas tiene usar TypeScript?**

- Tipado estático
- Mejor autocompletado y refactorización
- Mayor facilidad para detectar errores antes de ejecutar el código
- Integración con editores (como VSCode)
- Facilita el trabajo en equipos grandes y proyectos complejos

---

### 3. **¿Cómo se define una interfaz en TypeScript?**
```ts
interface User {
  id: number;
  name: string;
  email?: string; // opcional
}
```

---

### 4. **¿Qué son los tipos literales en TypeScript?**
  
Permiten restringir una variable a un conjunto específico de valores:
```ts
type Direction = 'left' | 'right' | 'up' | 'down';
let move: Direction = 'left';
```

---

## 🟡 Intermedio

### 5. **¿Cuál es la diferencia entre `interface` y `type`?**

- Ambos pueden describir la forma de un objeto.
- `interface` es extendible con `extends`, y se puede reabrir para agregar nuevas propiedades.
- `type` puede ser más flexible: permite usar uniones, intersecciones y tipos primitivos.
```ts
type A = { a: number };
type B = A & { b: string }; // Intersección
```

---

### 6. **¿Qué es el type inference?**
  
Es cuando TypeScript **infiera el tipo de una variable automáticamente** sin que el desarrollador lo especifique:
```ts
let age = 30; // TypeScript infiere que `age` es un number
```

---

### 7. **¿Qué son los "Generics"?**
  
Son una forma de escribir funciones o clases que funcionan con múltiples tipos sin perder el tipo.
```ts
function identity<T>(value: T): T {
  return value;
}
const result = identity<string>('Hola');
```

---

### 8. **¿Qué significa `readonly` y cómo se usa?**
```ts
interface User {
  readonly id: number;
  name: string;
}
```
  
La propiedad `id` no puede ser modificada una vez asignada. Útil para garantizar la inmutabilidad.

---

### 9. **¿Qué es el tipo `unknown`?**
  
Es un tipo más seguro que `any`, porque obliga a hacer una verificación antes de usar el valor.
```ts
function handle(val: unknown) {
  if (typeof val === 'string') {
    console.log(val.toUpperCase());
  }
}
```

---

## 🔴 Avanzado

### 10. **¿Qué son los "Utility Types"?**

Son tipos integrados que transforman otros tipos. Ejemplos:
- `Partial<T>`: Hace que todas las propiedades de `T` sean opcionales.
- `Pick<T, K>`: Extrae un subconjunto de propiedades.
- `Record<K, T>`: Crea un objeto con claves `K` y valores del tipo `T`.

```ts
type User = { id: number; name: string };
type UserPreview = Pick<User, 'id'>;
```

---

### 11. **¿Cómo usar `keyof` y `typeof`?**
```ts
type User = { id: number; name: string };
type UserKeys = keyof User; // 'id' | 'name'
```
```ts
const user = { name: 'Ana', age: 30 };
type UserType = typeof user; // { name: string; age: number }
```

---

### 12. **¿Qué son los tipos condicionales?**
```ts
type IsString<T> = T extends string ? true : false;
```
  
Permiten crear tipos que dependen de condiciones evaluadas en tiempo de compilación.

---

### 13. **¿Cuál es la diferencia entre `any`, `unknown`, `never` y `void`?**
| Tipo     | Descripción                                                                 |
|----------|------------------------------------------------------------------------------|
| `any`    | Puede ser cualquier cosa. Desactiva el chequeo de tipos.                   |
| `unknown`| Puede ser cualquier cosa, pero exige validación antes de usarse.           |
| `void`   | Para funciones que no retornan nada.                                        |
| `never`  | Para funciones que nunca retornan (errores o loops infinitos).              |

---

### 14. **¿Qué es un `Mapped Type`?**
```ts
type Optional<T> = {
  [P in keyof T]?: T[P];
};
```
  
Permite recorrer propiedades de un tipo y modificarlas de forma dinámica.

---

### 15. **¿Qué es el strict mode en TypeScript?**
  
Activa un conjunto de reglas más estrictas para mejorar la seguridad del código. Incluye:
- `strictNullChecks`
- `noImplicitAny`
- `strictBindCallApply`
- `strictFunctionTypes`

Se activa con `"strict": true` en `tsconfig.json`.

---

## 🟡 Intermedio – Avanzado (continuación)

---

### 16. **¿Qué es el `as const` en TypeScript? ¿Para qué se usa?**


`as const` convierte una estructura en una **tupla inmutable** y fija sus tipos como literales.

```ts
const roles = ['admin', 'user'] as const;
// roles: readonly ['admin', 'user']
// typeof roles[0] es 'admin', no string

type Role = typeof roles[number]; // 'admin' | 'user'
```

---

### 17. **¿Cómo se crean tipos a partir de arrays o constantes?**


Puedes usar `typeof` junto con `as const` para crear un union type.

```ts
const statuses = ['pending', 'approved', 'rejected'] as const;
type Status = typeof statuses[number]; // 'pending' | 'approved' | 'rejected'
```

---

### 18. **¿Cómo prevenir `undefined` o `null` en propiedades opcionales?**


Puedes usar el operador de coalescencia nula `??` o una verificación:

```ts
interface User {
  name?: string;
}

const greet = (user: User) => {
  console.log(`Hola, ${user.name ?? 'anónimo'}`);
};
```

---

### 19. **¿Cómo definir un tipo para una función que recibe otra función como parámetro?**


```ts
function handleClick(callback: (event: MouseEvent) => void): void {
  document.addEventListener('click', callback);
}
```

También puedes definirlo como un tipo:

```ts
type Callback = (e: MouseEvent) => void;
```

---

### 20. **¿Qué es una "intersection type" y cómo se usa?**


Une dos tipos en uno solo que debe cumplir con ambas estructuras.

```ts
type Person = { name: string };
type Employee = { company: string };

type Staff = Person & Employee;

const worker: Staff = {
  name: 'Robert',
  company: 'OpenAI',
};
```

---

### 21. **¿Cuál es la diferencia entre una clase y una interfaz en TypeScript?**


- **Clases** generan código JavaScript en tiempo de compilación y se pueden instanciar.
- **Interfaces** solo existen en tiempo de compilación para verificación de tipos.

---

### 22. **¿Cómo extiendes tipos con `extends` en interfaces y en generics?**

**Interfaces:**
```ts
interface A {
  a: number;
}
interface B extends A {
  b: string;
}
```

**Generics:**
```ts
function logLength<T extends { length: number }>(input: T): void {
  console.log(input.length);
}
```

---

### 23. **¿Qué son los tipos discriminados?**


Sirven para definir una unión de tipos con una propiedad común que actúa como "discriminador":

```ts
type Shape =
  | { kind: 'circle'; radius: number }
  | { kind: 'square'; side: number };

function getArea(shape: Shape): number {
  switch (shape.kind) {
    case 'circle':
      return Math.PI * shape.radius ** 2;
    case 'square':
      return shape.side ** 2;
  }
}
```

---

### 24. **¿Cómo escribes un tipo que representa un objeto con claves dinámicas?**


```ts
type Dictionary<T> = {
  [key: string]: T;
};

const errorMessages: Dictionary<string> = {
  required: 'Este campo es obligatorio',
  email: 'El correo no es válido',
};
```

---

### 25. **¿Qué es un `Type Guard`?**


Una función o expresión que **refina** el tipo en tiempo de ejecución:

```ts
function isString(value: unknown): value is string {
  return typeof value === 'string';
}

function process(input: unknown) {
  if (isString(input)) {
    console.log(input.toUpperCase());
  }
}
```

---

### 26. **¿Cómo usar `Exclude`, `Extract`, `NonNullable`, etc.?**

```ts
type T1 = Exclude<'a' | 'b' | 'c', 'a'>;        // 'b' | 'c'
type T2 = Extract<'a' | 'b' | 'c', 'a' | 'b'>;  // 'a' | 'b'
type T3 = NonNullable<string | null | undefined>; // string
```

---

### 27. **¿Qué es el `infer` keyword en tipos condicionales?**


Permite **extraer un tipo** dentro de un tipo condicional.

```ts
type ReturnType<T> = T extends (...args: any[]) => infer R ? R : never;

type Fn = () => number;
type Result = ReturnType<Fn>; // number
```

---

### 28. **¿Puedes tipar un `fetch` con datos esperados?**


```ts
interface User {
  id: number;
  name: string;
}

async function getUser(): Promise<User> {
  const res = await fetch('/api/user');
  return res.json();
}
```

---

### 29. **¿Qué pasa si asignas un tipo más amplio a uno más estrecho?**


TypeScript lanza error:

```ts
let str: 'hola' = 'hola';
let saludo: string = str; // ✅
str = saludo; // ❌ error: string no es igual a 'hola'
```

---

### 30. **¿Qué es la estrategia de “Structural Typing”?**


TypeScript **no compara por nombre**, sino por **forma**. Dos tipos son compatibles si tienen la misma estructura.

```ts
interface A { x: number }
interface B { x: number }

const a: A = { x: 10 };
const b: B = a; // ✅ son compatibles
```

---

## 🔴 Avanzado (Parte 2)

---

### 31. **¿Qué diferencia hay entre `interface` y `abstract class`?**


- Una `interface` **solo define la forma** de un objeto, sin implementación.
- Una `abstract class` **puede definir métodos con y sin implementación**, y puede tener propiedades protegidas, públicas o privadas.

```ts
interface Animal {
  makeSound(): void;
}

abstract class Creature {
  abstract makeSound(): void;

  move(): void {
    console.log('Moving...');
  }
}
```

---

### 32. **¿Qué es el `satisfies` operator? (TS 4.9+)**


Valida que un objeto **cumple con un tipo** sin limitar su inferencia.

```ts
const user = {
  id: 1,
  name: 'Robert',
  email: 'test@example.com',
} satisfies { id: number; name: string };
```

Esto permite que `user` tenga más propiedades (como `email`), pero garantiza que cumple con el tipo requerido.

---

### 33. **¿Cómo evitar repetir tipos en múltiples funciones?**


Usando **tipos reutilizables** con `type` o `interface`.

```ts
type ApiResponse<T> = {
  status: number;
  data: T;
};

function getUser(): ApiResponse<User> { ... }
function getPost(): ApiResponse<Post> { ... }
```

---

### 34. **¿Cómo tipar un middleware o interceptor genérico?**


Con `Generics` que extiendan una interfaz base.

```ts
function useMiddleware<T extends Request>(req: T): T {
  // hacer algo con req
  return req;
}
```

---

### 35. **¿Cómo se usa el operador `in` en tipos?**


Para crear tipos dinámicos en `Mapped Types`.

```ts
type Flags = {
  [K in 'featureA' | 'featureB']: boolean;
};
```

---

### 36. **¿Cómo usar `template literal types` en TypeScript?**


Permiten crear nuevos tipos basados en literales:

```ts
type Lang = 'en' | 'es';
type Key = `title_${Lang}`; // 'title_en' | 'title_es'
```

---

### 37. **¿Qué es un “tuple” en TypeScript y en qué se diferencia de un array?**


Una **tupla tiene longitud fija y tipos específicos en cada posición**, mientras que un array es homogéneo.

```ts
const tuple: [number, string] = [1, 'uno'];
const arr: string[] = ['a', 'b', 'c'];
```

---

### 38. **¿Cómo representar un tipo para una función que puede retornar `T` o `Promise<T>`?**


```ts
type MaybePromise<T> = T | Promise<T>;
```

---

### 39. **¿Qué es el `this` contextual typing?**


Es cuando TypeScript infiere el tipo de `this` dentro de una función basada en el contexto.

```ts
const obj = {
  name: 'Robert',
  greet(this: { name: string }) {
    return `Hola, ${this.name}`;
  }
};
```

---

### 40. **¿Qué es el tipo `Awaited<T>`? (TS 4.5+)**


Obtiene el tipo de valor **resuelto** de un `Promise`.

```ts
type Result = Awaited<Promise<string>>; // string
```

---

### 41. **¿Qué tipos usarías para representar un API de GraphQL tipada?**


```ts
type QueryResponse<T> = {
  data: T;
  errors?: { message: string }[];
};

type GetUserResult = QueryResponse<{ user: User }>;
```

---

### 42. **¿Cómo tipar un evento personalizado en el DOM?**


```ts
const event = new CustomEvent<'user-logged', { id: string }>('user-logged', {
  detail: { id: '123' },
});
```

---

### 43. **¿Cómo implementar el patrón de "Command" con tipos seguros?**


```ts
interface Command<TInput, TOutput> {
  execute(input: TInput): TOutput;
}

class CreateUser implements Command<{ name: string }, User> {
  execute(input) {
    return { id: 1, name: input.name };
  }
}
```

---

### 44. **¿Cómo usas `const enum` y cuáles son sus riesgos?**


```ts
const enum Direction {
  Up,
  Down,
}

let dir = Direction.Up;
```

Se reemplaza en tiempo de compilación, lo que **reduce el tamaño del bundle** pero **puede romper compatibilidad con bundlers como Webpack si no está configurado correctamente**.

---

### 45. **¿Cuál es la diferencia entre `Object` y `Record<string, any>`?**


- `Object` es un tipo muy amplio que acepta funciones, arrays, etc.
- `Record<K, T>` representa **objetos planos** con claves específicas.

```ts
const data: Record<string, number> = { apples: 5, oranges: 10 };
```

---

### 46. **¿Cómo forzar que un objeto tenga al menos una propiedad entre varias?**


```ts
type AtLeastOne<T> = {
  [K in keyof T]: Pick<T, K>;
}[keyof T];

type Settings = AtLeastOne<{ darkMode: boolean; autoSave: boolean }>;
```

---

### 47. **¿Cómo puedes extraer solo los métodos de un tipo?**


```ts
type Methods<T> = {
  [K in keyof T]: T[K] extends (...args: any) => any ? K : never;
}[keyof T];
```

---

### 48. **¿Puedes definir un tipo recursivo?**


```ts
type Json = string | number | boolean | null | Json[] | { [key: string]: Json };
```

---

### 49. **¿Qué son los `assertion functions`?**


Funciones que afirman un tipo en tiempo de ejecución.

```ts
function assertIsString(val: any): asserts val is string {
  if (typeof val !== 'string') throw new Error('Not a string');
}
```

---

### 50. **¿Cómo tipar una función que acepta callbacks asíncronos y sincrónicos?**


```ts
type SyncOrAsyncCallback<T> = () => T | Promise<T>;

function run<T>(cb: SyncOrAsyncCallback<T>): Promise<T> {
  return Promise.resolve(cb());
}
```

---
