package uc.player.common
open class RandomString {

    val text :  String

    constructor(text : String){
        this.text = text
    }

    fun randomString () : String {
        return "(" + text + ")" + ( 0.3f * 1000.0).toInt().toString()
    }


}

fun main(args: Array<String>) {
    val test = RandomString("KotlinMainTest")

    println(test.randomString())
}