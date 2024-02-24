#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UnlocksSave.UnlocksSave_C
// (None)

class UClass* UUnlocksSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlocksSave_C");

	return Clss;
}


// UnlocksSave_C UnlocksSave.Default__UnlocksSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnlocksSave_C* UUnlocksSave_C::GetDefaultObj()
{
	static class UUnlocksSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlocksSave_C*>(UUnlocksSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


