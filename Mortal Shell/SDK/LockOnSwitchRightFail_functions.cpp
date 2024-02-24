#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LockOnSwitchRightFail.LockOnSwitchRightFail_C
// (None)

class UClass* ULockOnSwitchRightFail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LockOnSwitchRightFail_C");

	return Clss;
}


// LockOnSwitchRightFail_C LockOnSwitchRightFail.Default__LockOnSwitchRightFail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULockOnSwitchRightFail_C* ULockOnSwitchRightFail_C::GetDefaultObj()
{
	static class ULockOnSwitchRightFail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULockOnSwitchRightFail_C*>(ULockOnSwitchRightFail_C::StaticClass()->DefaultObject);

	return Default;
}

}


