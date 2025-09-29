import math
import cmath

def rad_to_pi_fraction(angle_in_radians):
    fraction_of_pi = angle_in_radians / math.pi
    numerator = round(fraction_of_pi * 6) 
    denominator = 6
    return f"{numerator}π/{denominator}"

while True:
    while True:
        print('Résolution de Δ = b² - 4ac')
    
        try:
            b = float(input('Entrez la valeur "b" : '))
            print(f'Le coefficient "b" vaut : {b}\n')
            
            a = float(input('Entrez la valeur "a" : '))
            print(f'Le coefficient "ba vaut : {a}\n')
            
            c = float(input('Entrez la valeur "c" : '))
            print(f'Le coefficient "c" vaut : {c}\n')
        except ValueError:
            print("Erreur : Veuillez entrer des nombres valides.")
            continue
        
        valider = input(f'Validez-vous ces valeurs ? (y/n)\n Δ = {b}² - 4x({a} x {c}) : ')
    
        if valider == "n":
            continue  
        break
    
    print('\n\n\nBien, continuons.')
    delta = b**2 - 4*a*c
    print(f'Le discriminant (Δ) est : {delta}')

    if delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2*a)
        x2 = (-b - math.sqrt(delta)) / (2*a)
        print(f"\nLes deux racines réelles sont :")
        print(f"  x₁ = {x1}")
        print(f"  x₂ = {x2}")
        
    elif delta == 0:
        x = -b / (2*a)
        print(f"\nLa racine réelle est : x = {x}")
        
    else:
        real_part = -b / (2*a)
        imag_part = cmath.sqrt(abs(delta)) / (2*a)
        x1_complex = real_part + imag_part * 1j  
        x2_complex = real_part - imag_part * 1j 
        
        theta1 = cmath.phase(x1_complex) 
        theta2 = cmath.phase(x2_complex) 

        theta1_str = rad_to_pi_fraction(theta1)
        theta2_str = rad_to_pi_fraction(theta2)

        print(f"\nLes racines complexes sont :")
        print(f"  z₁ = {theta1_str}")
        print(f"  z₂ = {theta2_str}")
    
    fin = input("\nSouhaitez-vous résoudre une autre équation ? (y/n) : ")
    
    if fin.lower() == "n":
        break
print("\nMerci d'avoir utilisé le programme. À bientôt !")
