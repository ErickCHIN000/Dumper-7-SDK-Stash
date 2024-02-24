#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LockOnSwitchLeftFail.LockOnSwitchLeftFail_C
// (None)

class UClass* ULockOnSwitchLeftFail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LockOnSwitchLeftFail_C");

	return Clss;
}


// LockOnSwitchLeftFail_C LockOnSwitchLeftFail.Default__LockOnSwitchLeftFail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULockOnSwitchLeftFail_C* ULockOnSwitchLeftFail_C::GetDefaultObj()
{
	static class ULockOnSwitchLeftFail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULockOnSwitchLeftFail_C*>(ULockOnSwitchLeftFail_C::StaticClass()->DefaultObject);

	return Default;
}

}


