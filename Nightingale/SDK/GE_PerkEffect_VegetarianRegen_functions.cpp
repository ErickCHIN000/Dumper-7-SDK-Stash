#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_VegetarianRegen.GE_PerkEffect_VegetarianRegen_C
// (None)

class UClass* UGE_PerkEffect_VegetarianRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_VegetarianRegen_C");

	return Clss;
}


// GE_PerkEffect_VegetarianRegen_C GE_PerkEffect_VegetarianRegen.Default__GE_PerkEffect_VegetarianRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_VegetarianRegen_C* UGE_PerkEffect_VegetarianRegen_C::GetDefaultObj()
{
	static class UGE_PerkEffect_VegetarianRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_VegetarianRegen_C*>(UGE_PerkEffect_VegetarianRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


