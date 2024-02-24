#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_AmmoReward.LL_AmmoReward_C
// (Actor)

class UClass* ALL_AmmoReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_AmmoReward_C");

	return Clss;
}


// LL_AmmoReward_C LL_AmmoReward.Default__LL_AmmoReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_AmmoReward_C* ALL_AmmoReward_C::GetDefaultObj()
{
	static class ALL_AmmoReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_AmmoReward_C*>(ALL_AmmoReward_C::StaticClass()->DefaultObject);

	return Default;
}

}


