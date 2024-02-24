#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_LevelDowngrade.HitReactionLayer_LevelDowngrade_C
// (None)

class UClass* UHitReactionLayer_LevelDowngrade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_LevelDowngrade_C");

	return Clss;
}


// HitReactionLayer_LevelDowngrade_C HitReactionLayer_LevelDowngrade.Default__HitReactionLayer_LevelDowngrade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_LevelDowngrade_C* UHitReactionLayer_LevelDowngrade_C::GetDefaultObj()
{
	static class UHitReactionLayer_LevelDowngrade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_LevelDowngrade_C*>(UHitReactionLayer_LevelDowngrade_C::StaticClass()->DefaultObject);

	return Default;
}

}


