#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_DesperateBlowCountdown.GE_PerkEffect_DesperateBlowCountdown_C
// (None)

class UClass* UGE_PerkEffect_DesperateBlowCountdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_DesperateBlowCountdown_C");

	return Clss;
}


// GE_PerkEffect_DesperateBlowCountdown_C GE_PerkEffect_DesperateBlowCountdown.Default__GE_PerkEffect_DesperateBlowCountdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_DesperateBlowCountdown_C* UGE_PerkEffect_DesperateBlowCountdown_C::GetDefaultObj()
{
	static class UGE_PerkEffect_DesperateBlowCountdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_DesperateBlowCountdown_C*>(UGE_PerkEffect_DesperateBlowCountdown_C::StaticClass()->DefaultObject);

	return Default;
}

}


