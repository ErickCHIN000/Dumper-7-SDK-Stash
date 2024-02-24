#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_SpawnlingDowngrade.HitReactionLayer_SpawnlingDowngrade_C
// (None)

class UClass* UHitReactionLayer_SpawnlingDowngrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_SpawnlingDowngrade_C");

	return Clss;
}


// HitReactionLayer_SpawnlingDowngrade_C HitReactionLayer_SpawnlingDowngrade.Default__HitReactionLayer_SpawnlingDowngrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_SpawnlingDowngrade_C* UHitReactionLayer_SpawnlingDowngrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_SpawnlingDowngrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_SpawnlingDowngrade_C*>(UHitReactionLayer_SpawnlingDowngrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


