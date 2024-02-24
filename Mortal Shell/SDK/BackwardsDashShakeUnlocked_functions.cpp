#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BackwardsDashShakeUnlocked.BackwardsDashShakeUnlocked_C
// (None)

class UClass* UBackwardsDashShakeUnlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackwardsDashShakeUnlocked_C");

	return Clss;
}


// BackwardsDashShakeUnlocked_C BackwardsDashShakeUnlocked.Default__BackwardsDashShakeUnlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBackwardsDashShakeUnlocked_C* UBackwardsDashShakeUnlocked_C::GetDefaultObj()
{
	static class UBackwardsDashShakeUnlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackwardsDashShakeUnlocked_C*>(UBackwardsDashShakeUnlocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


