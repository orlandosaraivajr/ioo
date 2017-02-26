import abc

class BasePizza(metaclass=abc.ABCMeta):
    __metaclass__  = abc.ABCMeta

    ingredient = ['Molho de tomate natural','queijo']
    farinha_integral = False
    preco_P = 0
    preco_M = 0
    preco_G = 0
    tamanho_escolhido = "M"
    nome = ""

    def trocar_massa(self):
        if self.farinha_integral:
            self.farinha_integral = False
        else:
            self.farinha_integral = True

    def tipo_massa(self):
        if self.farinha_integral:
            print("Massa com farinha integral")
        else:
            print("Massa Tradicional")

    def get_preco_P(self):
        return self.preco_P

    def get_preco_M(self):
        return self.preco_M

    def get_preco_G(self):
        return self.preco_G

    def set_tamanho_escolhido(self,tamanho):
        self.tamanho_escolhido = tamanho

    def get_tamanho_escolhido(self):
        return self.tamanho_escolhido

    @abc.abstractmethod
    def get_nome(self):
        return self.nome

    @classmethod
    def get_ingredientes(cls):
        return cls.ingredient

class FrangoCheddar(BasePizza):
    def __init__(self):
        self.nome = "Frango com Cheddar "
        self.preco_P = 34.80
        self.preco_M = 40.80
        self.preco_G = 47.40
        self.ingredient.append('frango desfiado')
        self.ingredient.append('cheddar')
        self.ingredient.append('cobertura de batata palha')
        self.ingredient.append('azeitonas graúdas')
        self.ingredient.append('orégano')
'''
Sou um professor malvado ? Talvez. 
Mas preciso saber se você apenas executou o código ou se vai 
acessar o código e descomentar o método abaixo. :)
Descomente todos os métodos get_nome(self) das classes-filhas.

    def get_nome(self):
        return self.nome
'''
class FrangoCatupiry(BasePizza):
    def __init__(self):
        self.nome = "Frango com Catupiry "
        self.preco_P = 34.80
        self.preco_M = 40.80
        self.preco_G = 47.40
        self.ingredient.append('frango desfiado')
        self.ingredient.append('legítimo catupiry')
        self.ingredient.append('azeitonas graúdas')
        self.ingredient.append('orégano')
'''
    def get_nome(self):
        return self.nome
'''
class FrangoBarbecue(BasePizza):
    def __init__(self):
        self.nome = "Frango com molho Barbecue "
        self.preco_P = 34.20
        self.preco_M = 40.20
        self.preco_G = 46.80
        self.ingredient.append('frango desfiado')
        self.ingredient.append('milho verde')
        self.ingredient.append('molho barbecue')
        self.ingredient.append('azeitonas graúdas')
        self.ingredient.append('orégano')
'''
    def get_nome(self):
        return self.nome
'''
class PeitoPeru(BasePizza):
    def __init__(self):
        self.nome = "Peito de Peru "
        self.preco_P = 34.20
        self.preco_M = 40.20
        self.preco_G = 46.80
        self.ingredient.append('peito de peru')
        self.ingredient.append('mussarela')
        self.ingredient.append('azeitonas graúdas')
        self.ingredient.append('orégano')

'''
    def get_nome(self):
        return self.nome
'''
class PeitoPeruCatupiry(BasePizza):
    def __init__(self):
        self.nome = "Peito de Peru com Catupiry"
        self.preco_P = 37.20
        self.preco_M = 43.20
        self.preco_G = 49.80
        self.ingredient.append('peito de peru')
        self.ingredient.append('mussarela')
        self.ingredient.append('legítimo catupiry')
        self.ingredient.append('azeitonas graúdas')
        self.ingredient.append('orégano')
'''
    def get_nome(self):
        return self.nome
'''