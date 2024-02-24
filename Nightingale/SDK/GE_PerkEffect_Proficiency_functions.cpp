#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_Proficiency.GE_PerkEffect_Proficiency_C
// (None)

class UClass* UGE_PerkEffect_Proficiency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_Proficiency_C");

	return Clss;
}


// GE_PerkEffect_Proficiency_C GE_PerkEffect_Proficiency.Default__GE_PerkEffect_Proficiency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_Proficiency_C* UGE_PerkEffect_Proficiency_C::GetDefaultObj()
{
	static class UGE_PerkEffect_Proficiency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_Proficiency_C*>(UGE_PerkEffect_Proficiency_C::StaticClass()->DefaultObject);

	return Default;
}

}


