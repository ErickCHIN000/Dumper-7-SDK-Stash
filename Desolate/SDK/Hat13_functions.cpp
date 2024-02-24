#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat13.Hat13_C
// (Actor)

class UClass* AHat13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat13_C");

	return Clss;
}


// Hat13_C Hat13.Default__Hat13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat13_C* AHat13_C::GetDefaultObj()
{
	static class AHat13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat13_C*>(AHat13_C::StaticClass()->DefaultObject);

	return Default;
}

}


