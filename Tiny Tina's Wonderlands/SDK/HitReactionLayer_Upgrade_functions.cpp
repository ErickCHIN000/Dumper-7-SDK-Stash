#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_Upgrade.HitReactionLayer_Upgrade_C
// (None)

class UClass* UHitReactionLayer_Upgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_Upgrade_C");

	return Clss;
}


// HitReactionLayer_Upgrade_C HitReactionLayer_Upgrade.Default__HitReactionLayer_Upgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_Upgrade_C* UHitReactionLayer_Upgrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_Upgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_Upgrade_C*>(UHitReactionLayer_Upgrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


