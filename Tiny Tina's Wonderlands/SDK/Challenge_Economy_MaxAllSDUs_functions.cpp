#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Economy_MaxAllSDUs.Challenge_Economy_MaxAllSDUs_C
// (None)

class UClass* UChallenge_Economy_MaxAllSDUs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Economy_MaxAllSDUs_C");

	return Clss;
}


// Challenge_Economy_MaxAllSDUs_C Challenge_Economy_MaxAllSDUs.Default__Challenge_Economy_MaxAllSDUs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Economy_MaxAllSDUs_C* UChallenge_Economy_MaxAllSDUs_C::GetDefaultObj()
{
	static class UChallenge_Economy_MaxAllSDUs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Economy_MaxAllSDUs_C*>(UChallenge_Economy_MaxAllSDUs_C::StaticClass()->DefaultObject);

	return Default;
}

}


