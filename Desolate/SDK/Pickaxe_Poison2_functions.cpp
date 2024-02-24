#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickaxe_Poison2.Pickaxe_Poison2_C
// (Actor)

class UClass* APickaxe_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Poison2_C");

	return Clss;
}


// Pickaxe_Poison2_C Pickaxe_Poison2.Default__Pickaxe_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickaxe_Poison2_C* APickaxe_Poison2_C::GetDefaultObj()
{
	static class APickaxe_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickaxe_Poison2_C*>(APickaxe_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


