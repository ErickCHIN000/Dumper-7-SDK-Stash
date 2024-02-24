#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathInventory.DeathInventory_C
// (Actor)

class UClass* ADeathInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathInventory_C");

	return Clss;
}


// DeathInventory_C DeathInventory.Default__DeathInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeathInventory_C* ADeathInventory_C::GetDefaultObj()
{
	static class ADeathInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeathInventory_C*>(ADeathInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


