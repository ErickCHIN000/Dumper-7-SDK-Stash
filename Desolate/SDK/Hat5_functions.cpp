#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat5.Hat5_C
// (Actor)

class UClass* AHat5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat5_C");

	return Clss;
}


// Hat5_C Hat5.Default__Hat5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat5_C* AHat5_C::GetDefaultObj()
{
	static class AHat5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat5_C*>(AHat5_C::StaticClass()->DefaultObject);

	return Default;
}

}


