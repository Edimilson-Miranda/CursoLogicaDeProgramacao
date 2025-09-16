M = int(input("Quantas linhas vai ter a matriz: "))
N = int(input("Quantas colunas vai ter a matriz: "))

mat: [[int]] = [[0 for x in range(N)] for x in range(M)] # type: ignore

for i in range(0, M):
    for j in range(0, N):
        mat[i][j] = int(input(f"Elemento [{i}, {j}]: "))


print()
print("MATRIZ DIGITADA: ")
for i in range(0,M):
    for j in range(0,N):
        print(f"{mat[i][j]} ", end="")
    print()



x: float 
x = 2.3456 
print("{:.2f}".format(x))


idade: int 
salario: float 
nome: str 
sexo: str 
 
idade = 32 
salario = 4560.9 
nome = "Maria Silva" 
sexo = "F" 
 
print(f"A funcionaria {nome}, sexo {sexo}, ganha 
{salario:.2f} e tem {idade} anos") 
 
print("A funcionaria {:s}, sexo {:s}, ganha {:.2f} 
e tem {:d} anos".format(nome, sexo, salario, idade))