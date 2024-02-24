#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_DowngradeStaggerAndLaunch.HitReactionLayer_DowngradeStaggerAndLaunch_C
// (None)

class UClass* UHitReactionLayer_DowngradeStaggerAndLaunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_DowngradeStaggerAndLaunch_C");

	return Clss;
}


// HitReactionLayer_DowngradeStaggerAndLaunch_C HitReactionLayer_DowngradeStaggerAndLaunch.Default__HitReactionLayer_DowngradeStaggerAndLaunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_DowngradeStaggerAndLaunch_C* UHitReactionLayer_DowngradeStaggerAndLaunch_C::GetDefaultObj()
{
	static class UHitReactionLayer_DowngradeStaggerAndLaunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_DowngradeStaggerAndLaunch_C*>(UHitReactionLayer_DowngradeStaggerAndLaunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


