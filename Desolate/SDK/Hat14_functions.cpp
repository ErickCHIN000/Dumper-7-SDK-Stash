#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat14.Hat14_C
// (Actor)

class UClass* AHat14_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat14_C");

	return Clss;
}


// Hat14_C Hat14.Default__Hat14_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat14_C* AHat14_C::GetDefaultObj()
{
	static class AHat14_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat14_C*>(AHat14_C::StaticClass()->DefaultObject);

	return Default;
}

}


