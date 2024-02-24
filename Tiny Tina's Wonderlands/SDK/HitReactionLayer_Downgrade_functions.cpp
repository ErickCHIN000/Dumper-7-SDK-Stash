#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_Downgrade.HitReactionLayer_Downgrade_C
// (None)

class UClass* UHitReactionLayer_Downgrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_Downgrade_C");

	return Clss;
}


// HitReactionLayer_Downgrade_C HitReactionLayer_Downgrade.Default__HitReactionLayer_Downgrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_Downgrade_C* UHitReactionLayer_Downgrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_Downgrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_Downgrade_C*>(UHitReactionLayer_Downgrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


