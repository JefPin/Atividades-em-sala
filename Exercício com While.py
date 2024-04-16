import os

os.system("clear")

soma = 0.0
media = 0.0
qtdNotas = 0
i = 0


while True:
    notas = float(input(f"Digite a {qtdNotas+1}ª Nota: "))

    opcao = input("Deseja inserir mais uma nota? ")
    
    if opcao == "Sim":
        soma += notas
        qtdNotas += 1
    else:
        break
    
media = soma / qtdNotas
    
print(f"Média: {media}")
    
if media >= 7:
    print("Aprovado.")
elif media >= 5:
    print("Recuperação.")
else: 
    print("Reprovado.")
        
            
