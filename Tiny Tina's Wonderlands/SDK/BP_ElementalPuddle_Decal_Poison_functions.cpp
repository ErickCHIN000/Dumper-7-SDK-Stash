#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalPuddle_Decal_Poison.BP_ElementalPuddle_Decal_Poison_C
// (Actor)

class UClass* ABP_ElementalPuddle_Decal_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalPuddle_Decal_Poison_C");

	return Clss;
}


// BP_ElementalPuddle_Decal_Poison_C BP_ElementalPuddle_Decal_Poison.Default__BP_ElementalPuddle_Decal_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElementalPuddle_Decal_Poison_C* ABP_ElementalPuddle_Decal_Poison_C::GetDefaultObj()
{
	static class ABP_ElementalPuddle_Decal_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElementalPuddle_Decal_Poison_C*>(ABP_ElementalPuddle_Decal_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


