package math.complex

import java.util.*

/**
 * Created by Maxim Hnatiuk on 23.02.2020.
 */
class ComplexNumber(real : Double = 0.0, imagination : Double = 0.0) {

    var real : Double = 0.0
        get() = field
        set(value) {
            field = value
        }

    var imagination : Double = 0.0
        get() = field
        set(value) {
            field = value
        }

    init {
        this.real = real
        this.imagination = imagination
    }

    override fun toString() = real.toInt().toString() + if (imagination < 0) " - " else " + " + imagination.toInt() + 'i'

    fun copy() = ComplexNumber(real, imagination)

    operator fun plus(number : ComplexNumber) =
        ComplexNumber(this.real + number.real, this.imagination + number.imagination)
    operator fun plus(number : Int) =
        ComplexNumber(this.real + number, this.imagination)

    operator fun minus(number : ComplexNumber) =
        ComplexNumber(this.real - number.real, this.imagination - number.imagination)
    operator fun minus(number : Int) =
        ComplexNumber(this.real - number, this.imagination)

    operator fun times(number : ComplexNumber) = ComplexNumber().apply {
        real = (number.real * this@ComplexNumber.real) - (number.imagination * this@ComplexNumber.imagination)
        imagination = (number.real * this@ComplexNumber.imagination) + (number.imagination * this@ComplexNumber.real)
    }

    operator fun times(number : Int) = ComplexNumber().apply {
        real = (number * this@ComplexNumber.real) - (0 * this@ComplexNumber.imagination)
        imagination = (number * this@ComplexNumber.imagination) + (this@ComplexNumber.real * 0)
    }
}

operator fun Int.plus(number : ComplexNumber) =
    ComplexNumber(this + number.real, number.imagination)

operator fun Int.minus(number : ComplexNumber) =
    ComplexNumber(this - number.real, number.imagination)

operator fun Int.times(number: ComplexNumber) = ComplexNumber().apply {
    real = (this@times * number.real) - (0 * number.imagination)
    imagination = (this@times * number.imagination) + (0 * number.real)
}

fun Scanner.readComplexNumber() : ComplexNumber {
    println("Enter complex number (real, imagination):")
    val real = nextDouble()
    val imagination = nextDouble()
    return ComplexNumber(real, imagination)
}