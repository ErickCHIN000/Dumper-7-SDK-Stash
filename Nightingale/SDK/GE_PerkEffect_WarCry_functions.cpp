#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_WarCry.GE_PerkEffect_WarCry_C
// (None)

class UClass* UGE_PerkEffect_WarCry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_WarCry_C");

	return Clss;
}


// GE_PerkEffect_WarCry_C GE_PerkEffect_WarCry.Default__GE_PerkEffect_WarCry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_WarCry_C* UGE_PerkEffect_WarCry_C::GetDefaultObj()
{
	static class UGE_PerkEffect_WarCry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_WarCry_C*>(UGE_PerkEffect_WarCry_C::StaticClass()->DefaultObject);

	return Default;
}

}


