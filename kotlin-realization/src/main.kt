import math.complex.ComplexNumber
import math.complex.readComplexNumber
import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)

    val firstNumber = ComplexNumber(2.0, 3.0)
    val secondNumber = scanner.readComplexNumber()

    print("firstNumber is: $firstNumber\nsecondNumber is: $secondNumber\n\n")

    val addition = firstNumber + secondNumber
    val difference = firstNumber - secondNumber
    val multiplication = firstNumber * secondNumber

    println("Addition: $addition")
    println("Difference: $difference")
    println("Multiplication: $multiplication")
}