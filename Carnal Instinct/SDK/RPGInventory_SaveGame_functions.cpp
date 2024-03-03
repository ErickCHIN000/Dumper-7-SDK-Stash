#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RPGInventory_SaveGame.RPGInventory_SaveGame_C
// (None)

class UClass* URPGInventory_SaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RPGInventory_SaveGame_C");

	return Clss;
}


// RPGInventory_SaveGame_C RPGInventory_SaveGame.Default__RPGInventory_SaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URPGInventory_SaveGame_C* URPGInventory_SaveGame_C::GetDefaultObj()
{
	static class URPGInventory_SaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URPGInventory_SaveGame_C*>(URPGInventory_SaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


