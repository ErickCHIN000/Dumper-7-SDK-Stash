#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LockOnSwitchLeft.LockOnSwitchLeft_C
// (None)

class UClass* ULockOnSwitchLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LockOnSwitchLeft_C");

	return Clss;
}


// LockOnSwitchLeft_C LockOnSwitchLeft.Default__LockOnSwitchLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULockOnSwitchLeft_C* ULockOnSwitchLeft_C::GetDefaultObj()
{
	static class ULockOnSwitchLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULockOnSwitchLeft_C*>(ULockOnSwitchLeft_C::StaticClass()->DefaultObject);

	return Default;
}

}


