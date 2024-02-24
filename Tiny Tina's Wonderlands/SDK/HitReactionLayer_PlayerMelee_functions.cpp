#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_PlayerMelee.HitReactionLayer_PlayerMelee_C
// (None)

class UClass* UHitReactionLayer_PlayerMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_PlayerMelee_C");

	return Clss;
}


// HitReactionLayer_PlayerMelee_C HitReactionLayer_PlayerMelee.Default__HitReactionLayer_PlayerMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_PlayerMelee_C* UHitReactionLayer_PlayerMelee_C::GetDefaultObj()
{
	static class UHitReactionLayer_PlayerMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_PlayerMelee_C*>(UHitReactionLayer_PlayerMelee_C::StaticClass()->DefaultObject);

	return Default;
}

}


