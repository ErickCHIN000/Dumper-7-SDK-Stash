#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickaxe_Bleed2.Pickaxe_Bleed2_C
// (Actor)

class UClass* APickaxe_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Bleed2_C");

	return Clss;
}


// Pickaxe_Bleed2_C Pickaxe_Bleed2.Default__Pickaxe_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickaxe_Bleed2_C* APickaxe_Bleed2_C::GetDefaultObj()
{
	static class APickaxe_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickaxe_Bleed2_C*>(APickaxe_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


