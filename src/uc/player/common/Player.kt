package uc.player.common

class Player constructor(private val uuid : UUID){

    fun getUUID() : String{
        return this.uuid.randomUUID()
    }
}