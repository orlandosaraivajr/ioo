#!/usr/bin/python3
# coding: utf-8
from pizzas import *

def fazer_pedido(pedidos):
    print("""
   1 - Frango Cheddar
   2 - Frango Catupiry
   3 - Frango com molho Barbecue
   4 - Peito de Peru
   5 - Peito de Peru com Catupiry
   """)
    try:
        opcao = int(input(""))
        if opcao == 1:
            pizza = FrangoCheddar()
            print("Você escolheu pizza de frango com cheddar.")
        elif opcao == 2:
            pizza = FrangoCatupiry()
            print("Você escolheu pizza de frango com catupiry.")
        elif opcao == 3:
            pizza = FrangoBarbecue()
            print("Você escolheu pizza de frango com molho barbecue.")
        elif opcao == 4:
            pizza = PeitoPeru()
            print("Você escolheu pizza de peito de peru.")
        elif opcao == 5:
            pizza = PeitoPeruCatupiry()
        else:
            return
    except ValueError:
        print("Erro ao escolher o sabor de pizza.")
        return
    print("\n Vamos escolher a massa.")
    pizza.tipo_massa()
    opcao = input("Deseja mudar para massa de farinha integral (S/N) ?\n")
    opcao = opcao.upper()
    if opcao == 'S':
        pizza.trocar_massa()
        pizza.tipo_massa()

    print("\n Vamos escolher o tamanho.")
    print("Preço da pizza pequena:\t" + str(pizza.get_preco_P()))
    print("Preço da pizza média:\t" + str(pizza.get_preco_M()))
    print("Preço da pizza grande:\t" + str(pizza.get_preco_G()))

    opcao = input("Qual o tamanho da pizza desejada (P/M/G) ?\n")
    opcao = opcao.upper()
    if opcao == 'P':
        pizza.set_tamanho_escolhido('P')
    if opcao == 'M':
        pizza.set_tamanho_escolhido('M')
    if opcao == 'G':
        pizza.set_tamanho_escolhido('G')

    print("Tamanho escolhido :\t" + str(pizza.get_tamanho_escolhido()))
    pedidos.append(pizza)


def fechar_pedidos(pedidos):
    print("\n\n")
    print("***********************************************************")
    total = 0
    quantidade = 0
    for pizza in pedidos:
        quantidade = quantidade + 1
        print("========================================")
        print("\n\n\tPizza do sabor: " + pizza.get_nome())
        print("\tTamanho escolhido : " + pizza.get_tamanho_escolhido())
        opcao = pizza.get_tamanho_escolhido()
        if opcao == 'P':
            print("\tPreço da pizza: "+ str(pizza.get_preco_P()))
            total = total + pizza.get_preco_P()
        if opcao == 'M':
            print("\tPreço da pizza: "+ str(pizza.get_preco_M()))
            total = total + pizza.get_preco_M()
        if opcao == 'G':
            print("\tPreço da pizza: "+ str(pizza.get_preco_G()))
            total = total + pizza.get_preco_G()
        print("\nIngredientes : ")
        composto = pizza.get_ingredientes()
        for item in composto:
            print (" - " + str(item))
    print("\n\n")
    print ("Quantidade de Pizza: "+str(quantidade))
    print ("Total do pedido: "+str(total))

if __name__ == "__main__":
    pedidos = []
    print("Pizzaria, boa noite. O que deseja fazer ? \n")
    while True:
        try:
            print("\n\n")
            opcao = int(input("1 - Fazer + um pedido \n2 - Fechar pedido\n"))
            if opcao == 1:
                fazer_pedido(pedidos)
            elif opcao == 2:
                fechar_pedidos(pedidos)
                break
        except ValueError:
            print("Valor inválido, favor número inteiro")
