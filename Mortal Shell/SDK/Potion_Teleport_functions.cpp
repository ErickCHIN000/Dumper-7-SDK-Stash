#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Potion_Teleport.Potion_Teleport_C
// (Actor)

class UClass* APotion_Teleport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Potion_Teleport_C");

	return Clss;
}


// Potion_Teleport_C Potion_Teleport.Default__Potion_Teleport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APotion_Teleport_C* APotion_Teleport_C::GetDefaultObj()
{
	static class APotion_Teleport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APotion_Teleport_C*>(APotion_Teleport_C::StaticClass()->DefaultObject);

	return Default;
}

}


