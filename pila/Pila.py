class Pila:
    def __init__(self):
        self.items = []

    def esta_vacia(self):
        return len(self.items) == 0

    def apilar(self, item):
        self.items.append(item)

    def desapilar(self):
        if not self.esta_vacia():
            return self.items.pop()
        else:
            return None

    def ver_cima(self):
        if not self.esta_vacia():
            return self.items[-1]
        else:
            return None

    def tamano(self):
        return len(self.items)


# Ejemplo de uso:
pila = Pila()
pila.apilar(10)
pila.apilar(20)
pila.apilar(30)

print("Cima de la pila:", pila.ver_cima())  # Muestra el último elemento apilado (30)
print("Desapilar:", pila.desapilar())  # Elimina y retorna el elemento de la cima (30)
print("Tamano de la pila:", pila.tamano())  # Cambié "Tamaño" por "Tamano" (sin ñ)
