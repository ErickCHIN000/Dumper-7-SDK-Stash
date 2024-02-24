#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickaxe.Pickaxe_C
// (Actor)

class UClass* APickaxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_C");

	return Clss;
}


// Pickaxe_C Pickaxe.Default__Pickaxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickaxe_C* APickaxe_C::GetDefaultObj()
{
	static class APickaxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickaxe_C*>(APickaxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


