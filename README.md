
---

### 🚀 **Fundamentos de Node.js**

**1. ¿Qué es Node.js y para qué se utiliza?**  
  
Node.js es un entorno de ejecución para JavaScript basado en el motor V8 de Chrome. Permite ejecutar código JavaScript del lado del servidor, lo que lo hace ideal para construir aplicaciones web escalables y de alto rendimiento, como APIs REST, servidores web, y más.

---

**2. ¿Qué es el event loop en Node.js?**  
  
Es un mecanismo que permite a Node.js realizar operaciones no bloqueantes (como I/O) delegando operaciones pesadas a otros hilos o al sistema, y procesando callbacks cuando las tareas se completan. Gracias al event loop, Node.js puede manejar múltiples operaciones concurrentes de forma eficiente con un solo hilo.

---

**3. ¿Node.js es de un solo hilo?**  
  
Sí, el hilo principal que ejecuta JavaScript es único, pero Node.js usa un **thread pool** (a través de libuv) para operaciones I/O intensivas o que requieren múltiples hilos, como operaciones de archivos o criptografía.

---

### 📦 **Módulos y Dependencias**

**4. ¿Cuál es la diferencia entre `require` y `import`?**  
  
- `require` es parte del sistema de módulos CommonJS (por defecto en Node.js hasta versiones recientes).
- `import` es parte de los módulos ES6 (ESM).  
  Para usar `import`, necesitas configurar `"type": "module"` en tu `package.json` o usar la extensión `.mjs`.

---

**5. ¿Qué es `package.json` y para qué sirve?**  
  
Es un archivo de configuración que contiene información sobre el proyecto, scripts de ejecución, dependencias, versiones, autor, etc. Es fundamental para la gestión de paquetes en proyectos Node.js.

---

### 🔧 **Asincronía**

**6. ¿Qué diferencia hay entre callbacks, promesas y async/await?**  

- **Callbacks**: funciones pasadas como argumento que se ejecutan después de una operación.
- **Promesas**: objetos que representan una operación que puede completarse o fallar.
- **async/await**: sintaxis más clara sobre promesas, que permite escribir código asincrónico como si fuera síncrono.

---

**7. ¿Cómo manejar errores en código async/await?**  
  
Usando bloques `try/catch`. Ejemplo:
```js
async function fetchData() {
  try {
    const data = await getData();
    console.log(data);
  } catch (err) {
    console.error('Error:', err.message);
  }
}
```

---

### 🌐 **HTTP y APIs**

**8. ¿Cómo crear un servidor HTTP en Node.js sin frameworks?**  

```js
const http = require('http');

const server = http.createServer((req, res) => {
  res.writeHead(200, {'Content-Type': 'text/plain'});
  res.end('Hola Mundo');
});

server.listen(3000, () => {
  console.log('Servidor en puerto 3000');
});
```

---

**9. ¿Qué es Express y por qué se usa tanto?**  
  
Es un framework minimalista para Node.js que simplifica la creación de APIs y servidores web. Facilita el manejo de rutas, middleware, y respuestas HTTP.

---

**10. ¿Qué son middlewares en Express?**  
  
Son funciones que tienen acceso al objeto `request`, `response` y a la función `next()`. Se usan para realizar tareas como autenticación, logging, parseo de body, etc.

---

### 🛡️ **Seguridad y Buenas Prácticas**

**11. ¿Cómo proteger una API en Node.js?**  

- Autenticación (JWT, OAuth)
- Validación de entrada (usando Joi, zod, etc.)
- Rate limiting
- CORS controlado
- Uso de HTTPS
- Helmet para seguridad de cabeceras HTTP

---

### 🧪 **Testing y Debugging**

**12. ¿Qué herramientas se usan para testear en Node.js?**  

- Mocha / Jest: frameworks de testing
- Chai: assertions
- Supertest: para testear endpoints HTTP

---

### ⚙️ **Desempeño y Escalabilidad**

**13. ¿Cómo escalar una aplicación Node.js?**  

- Usar `cluster` o PM2 para balanceo de carga en múltiples procesos
- Usar cache (ej. Redis)
- Optimizar consultas a DB
- Monitoreo (con herramientas como NewRelic, Datadog, etc.)

---

**14. ¿Qué es el archivo `.env` y cómo se usa en Node.js?**  

Es un archivo donde se guardan variables de entorno. Con el paquete `dotenv`, puedes cargar estas variables en `process.env`:
```js
require('dotenv').config();
console.log(process.env.PORT);
```

---

### 🧱 **Arquitectura y Estructura de Proyectos**

**15. ¿Cómo organizarías un proyecto grande de Node.js?**  

- **Separación de responsabilidades**: por capas (controllers, services, repositories).
- **Uso de módulos**: cada funcionalidad puede ser un módulo.
- **Patrones**: como MVC, Clean Architecture o Hexagonal.
- **Middlewares reutilizables**, **validaciones centralizadas**, **configuración por entorno**, y **tests por módulo**.

---

**16. ¿Qué es un archivo `controller`, `service`, y `repository`?**

- **Controller**: maneja las peticiones HTTP y delega la lógica.
- **Service**: contiene la lógica del negocio.
- **Repository**: maneja el acceso a la base de datos o fuentes externas.

---

### 📄 **Manejo de Archivos y Streams**

**17. ¿Cómo leer y escribir archivos en Node.js?**  

Usando el módulo `fs`:
```js
const fs = require('fs');

// Lectura
fs.readFile('archivo.txt', 'utf8', (err, data) => {
  if (err) throw err;
  console.log(data);
});

// Escritura
fs.writeFile('nuevo.txt', 'Contenido', (err) => {
  if (err) throw err;
});
```

---

**18. ¿Qué es un stream en Node.js y por qué es útil?**  

Es una abstracción de una fuente de datos que puede ser leída o escrita de manera secuencial. Se usa para manejar datos grandes sin cargarlos todos en memoria, como archivos grandes, video/audio o datos de red.

Ejemplo:
```js
const fs = require('fs');
const readStream = fs.createReadStream('archivo.txt');
readStream.pipe(process.stdout);
```

---

### 🧠 **Memoria y Rendimiento**

**19. ¿Cómo detectar y solucionar un memory leak en Node.js?**  

- Usar herramientas como **Chrome DevTools**, **clinic.js**, **heap snapshots**, o `--inspect`.
- Buscar referencias que no se liberan (ej: caches mal manejadas, listeners no removidos).
- Monitorear el uso de memoria con `process.memoryUsage()`.

---

### 🔐 **Autenticación y Seguridad**

**20. ¿Cómo funciona JWT (JSON Web Token)?**  

JWT es un token firmado que contiene información (payload) codificada. Sirve para autenticación sin estado (stateless).  
Proceso:
1. El usuario se autentica → el servidor genera un JWT.
2. El cliente lo guarda y lo envía en cada petición (header `Authorization: Bearer`).
3. El servidor valida la firma del JWT para autenticar.

---

**21. ¿Cómo proteger rutas en Express con JWT?**  

```js
const jwt = require('jsonwebtoken');

function authMiddleware(req, res, next) {
  const token = req.headers.authorization?.split(' ')[1];
  if (!token) return res.status(401).send('Token requerido');
  
  try {
    req.user = jwt.verify(token, process.env.JWT_SECRET);
    next();
  } catch (err) {
    res.status(403).send('Token inválido');
  }
}
```

---

### 🔍 **Logs y Monitoreo**

**22. ¿Cómo manejar logs en una aplicación Node.js?**  

- Usar `console.log` en desarrollo.
- En producción, usar librerías como **Winston**, **Pino** o **Morgan** (para logging HTTP).
- Enviar logs a servicios como ELK Stack, Datadog, Loggly o CloudWatch.

---

### ⚡ **Frameworks y Librerías Comunes**

**23. ¿Qué ventajas tiene NestJS sobre Express?**  

- Arquitectura basada en módulos.
- Decoradores y TypeScript por defecto.
- Inyección de dependencias incorporada.
- Escalable y mantenible.
- Más cercano a frameworks como Angular.

---

**24. ¿Qué diferencia hay entre `npm` y `yarn`?**  

Ambos son gestores de paquetes, pero:
- `yarn` fue creado para mejorar el rendimiento de `npm`.
- Ambos soportan `package-lock.json` / `yarn.lock`.
- Yarn tiende a ser más rápido en instalaciones paralelas.
- Hoy en día, las diferencias son mínimas (npm ha mejorado mucho).

---

**25. ¿Cómo manejar variables de entorno en Node.js?**  

1. Crear un archivo `.env`:
```
PORT=3000
DB_URL=mongodb://localhost:27017/test
```

2. Usar `dotenv`:
```js
require('dotenv').config();
console.log(process.env.PORT);
```

---

### ⚙️ **Procesos, Hilos y Performance**

**26. ¿Qué es el módulo `cluster` en Node.js y para qué se usa?**  
  
El módulo `cluster` permite ejecutar múltiples instancias del proceso Node.js que comparten el mismo puerto. Es útil para aprovechar múltiples núcleos de CPU y mejorar el rendimiento de aplicaciones concurrentes.

Ejemplo básico:
```js
const cluster = require('cluster');
const os = require('os');

if (cluster.isPrimary) {
  const cpuCount = os.cpus().length;
  for (let i = 0; i < cpuCount; i++) cluster.fork();
} else {
  require('./app'); // Lógica del servidor
}
```

---

### 🧪 **Testing**

**27. ¿Cómo harías testing de una API REST en Node.js?**  

- Usar Jest o Mocha como framework de testing.
- Usar Supertest para testear endpoints HTTP.
- Escribir pruebas para cada caso: éxito, errores de validación, permisos, etc.

Ejemplo:
```js
const request = require('supertest');
const app = require('./app');

test('GET /api/users debe retornar 200', async () => {
  const res = await request(app).get('/api/users');
  expect(res.statusCode).toBe(200);
});
```

---

### 📥 **Subida y Manejo de Archivos**

**28. ¿Cómo manejar la subida de archivos en Node.js con Express?**  

Usando `multer`:
```js
const multer = require('multer');
const upload = multer({ dest: 'uploads/' });

app.post('/upload', upload.single('file'), (req, res) => {
  res.send('Archivo recibido');
});
```

---

### 🌐 **Consumo de APIs**

**29. ¿Cómo consumir APIs externas desde Node.js?**  
  
Puedes usar:
- `fetch` (desde Node.js v18+)
- `axios` (más completo, con interceptores y timeout)
- `https` (nativo, pero más bajo nivel)

Ejemplo con axios:
```js
const axios = require('axios');
const response = await axios.get('https://api.example.com/data');
```

---

### 🧮 **Paginación en APIs**

**30. ¿Cómo implementar paginación en un endpoint?**  

Usar query params `?page=1&limit=10`, calcular `skip`, y limitar los resultados.

Ejemplo con MongoDB:
```js
const page = parseInt(req.query.page) || 1;
const limit = parseInt(req.query.limit) || 10;
const skip = (page - 1) * limit;

const items = await db.collection('items').find().skip(skip).limit(limit).toArray();
```

---

### 🛡️ **Validación de Datos**

**31. ¿Cómo validas los datos de entrada en una API?**  

Con librerías como:
- `joi`
- `zod`
- `express-validator`

Ejemplo con `joi`:
```js
const Joi = require('joi');

const schema = Joi.object({
  name: Joi.string().required(),
  age: Joi.number().min(0)
});

const { error } = schema.validate(req.body);
if (error) return res.status(400).send(error.details[0].message);
```

---

### 🔁 **WebSockets**

**32. ¿Cómo usar WebSockets con Node.js?**  

Puedes usar `ws` o `socket.io`. Ejemplo básico con `ws`:
```js
const WebSocket = require('ws');
const wss = new WebSocket.Server({ port: 8080 });

wss.on('connection', socket => {
  socket.send('Hola cliente!');
  socket.on('message', message => console.log('Mensaje:', message));
});
```

---

### 🗃️ **Bases de Datos**

**33. ¿Cómo te conectas a MongoDB desde Node.js?**  

Usando `mongodb` o `mongoose`:
```js
const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost:27017/test');
```

---

**34. ¿Cómo previenes inyecciones de SQL o NoSQL en Node.js?**  

- En SQL: usando consultas parametrizadas (ej. con `pg` o `mysql2`).
- En NoSQL (MongoDB): validando los inputs y evitando operadores peligrosos (`$gt`, `$where`).
- Nunca uses directamente el input del usuario en una consulta sin sanitizar.

---

### 🧱 **Patrones y Arquitectura**

**35. ¿Qué patrón seguirías para escalar una aplicación Node.js?**  

- **Modularización** por funcionalidades.
- Separar capa de infraestructura (BD, servicios externos), lógica de negocio y controladores.
- Usar **Inversión de dependencias** para facilitar testeo.
- Incorporar **Event-driven architecture** para microservicios.

---
