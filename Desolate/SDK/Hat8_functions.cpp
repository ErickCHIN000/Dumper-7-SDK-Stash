#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat8.Hat8_C
// (Actor)

class UClass* AHat8_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat8_C");

	return Clss;
}


// Hat8_C Hat8.Default__Hat8_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat8_C* AHat8_C::GetDefaultObj()
{
	static class AHat8_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat8_C*>(AHat8_C::StaticClass()->DefaultObject);

	return Default;
}

}


