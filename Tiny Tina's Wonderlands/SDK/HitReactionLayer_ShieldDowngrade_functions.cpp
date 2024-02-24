#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_ShieldDowngrade.HitReactionLayer_ShieldDowngrade_C
// (None)

class UClass* UHitReactionLayer_ShieldDowngrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_ShieldDowngrade_C");

	return Clss;
}


// HitReactionLayer_ShieldDowngrade_C HitReactionLayer_ShieldDowngrade.Default__HitReactionLayer_ShieldDowngrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_ShieldDowngrade_C* UHitReactionLayer_ShieldDowngrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_ShieldDowngrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_ShieldDowngrade_C*>(UHitReactionLayer_ShieldDowngrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


