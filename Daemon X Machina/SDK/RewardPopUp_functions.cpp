#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RewardPopUp.RewardPopUp_C
// (Actor)

class UClass* ARewardPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardPopUp_C");

	return Clss;
}


// RewardPopUp_C RewardPopUp.Default__RewardPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARewardPopUp_C* ARewardPopUp_C::GetDefaultObj()
{
	static class ARewardPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARewardPopUp_C*>(ARewardPopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


