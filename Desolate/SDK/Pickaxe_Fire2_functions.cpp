#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickaxe_Fire2.Pickaxe_Fire2_C
// (Actor)

class UClass* APickaxe_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Fire2_C");

	return Clss;
}


// Pickaxe_Fire2_C Pickaxe_Fire2.Default__Pickaxe_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickaxe_Fire2_C* APickaxe_Fire2_C::GetDefaultObj()
{
	static class APickaxe_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickaxe_Fire2_C*>(APickaxe_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


