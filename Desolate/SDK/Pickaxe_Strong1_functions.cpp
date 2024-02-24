#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickaxe_Strong1.Pickaxe_Strong1_C
// (Actor)

class UClass* APickaxe_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Strong1_C");

	return Clss;
}


// Pickaxe_Strong1_C Pickaxe_Strong1.Default__Pickaxe_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickaxe_Strong1_C* APickaxe_Strong1_C::GetDefaultObj()
{
	static class APickaxe_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickaxe_Strong1_C*>(APickaxe_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


