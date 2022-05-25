all:ConversionTest.exe TablasDeConversion.exe
ConversionTest.exe : ConversionTest.o  Conversion.o
	@gcc  ConversionTest.o Conversion.o -o ConversionTest
ConversionTest.o : ConversionTest.c Conversion.h
	@gcc -c ConversionTest.c
TablasDeConversion.exe : TablasDeConversion.o  Conversion.o
	@gcc  TablasDeConversion.o Conversion.o -o TablasDeConversion
TablasDeConversion.o : TablasDeConversion.c Conversion.h 
	@gcc -c TablasDeConversion.c  
Conversion.o : Conversion.c Conversion.h
	@gcc -c Conversion.c 
clean:
	rm -f *.o
	rm -f *.exe