#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_Cooldown.HitReactionLayer_Cooldown_C
// (None)

class UClass* UHitReactionLayer_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_Cooldown_C");

	return Clss;
}


// HitReactionLayer_Cooldown_C HitReactionLayer_Cooldown.Default__HitReactionLayer_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_Cooldown_C* UHitReactionLayer_Cooldown_C::GetDefaultObj()
{
	static class UHitReactionLayer_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_Cooldown_C*>(UHitReactionLayer_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


