#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LockOnSwitchRight.LockOnSwitchRight_C
// (None)

class UClass* ULockOnSwitchRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LockOnSwitchRight_C");

	return Clss;
}


// LockOnSwitchRight_C LockOnSwitchRight.Default__LockOnSwitchRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULockOnSwitchRight_C* ULockOnSwitchRight_C::GetDefaultObj()
{
	static class ULockOnSwitchRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULockOnSwitchRight_C*>(ULockOnSwitchRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


