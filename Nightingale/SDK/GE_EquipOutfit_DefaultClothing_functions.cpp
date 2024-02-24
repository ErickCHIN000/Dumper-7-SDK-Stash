#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipOutfit_DefaultClothing.GE_EquipOutfit_DefaultClothing_C
// (None)

class UClass* UGE_EquipOutfit_DefaultClothing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipOutfit_DefaultClothing_C");

	return Clss;
}


// GE_EquipOutfit_DefaultClothing_C GE_EquipOutfit_DefaultClothing.Default__GE_EquipOutfit_DefaultClothing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipOutfit_DefaultClothing_C* UGE_EquipOutfit_DefaultClothing_C::GetDefaultObj()
{
	static class UGE_EquipOutfit_DefaultClothing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipOutfit_DefaultClothing_C*>(UGE_EquipOutfit_DefaultClothing_C::StaticClass()->DefaultObject);

	return Default;
}

}


