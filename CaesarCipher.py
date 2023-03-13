alfabe = ["0","1","2","3","4","5","6","7","8","9"]

metin = input("Lütfen şifrelenecek veriyi giriniz: ")
sifreli = ""

kaydirma = 3

sayi = 0

while (sayi < len(metin)):
numara = (alfabe.index(metin[sayi])) + 3
numara = numara % len(alfabe)
print(numara)
sifreli = sifreli + alfabe[numara]
sayi += 1

print(sifreli)
