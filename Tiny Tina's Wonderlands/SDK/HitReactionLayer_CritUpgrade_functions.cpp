#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_CritUpgrade.HitReactionLayer_CritUpgrade_C
// (None)

class UClass* UHitReactionLayer_CritUpgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_CritUpgrade_C");

	return Clss;
}


// HitReactionLayer_CritUpgrade_C HitReactionLayer_CritUpgrade.Default__HitReactionLayer_CritUpgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_CritUpgrade_C* UHitReactionLayer_CritUpgrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_CritUpgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_CritUpgrade_C*>(UHitReactionLayer_CritUpgrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


