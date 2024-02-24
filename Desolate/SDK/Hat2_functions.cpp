#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat2.Hat2_C
// (Actor)

class UClass* AHat2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat2_C");

	return Clss;
}


// Hat2_C Hat2.Default__Hat2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat2_C* AHat2_C::GetDefaultObj()
{
	static class AHat2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat2_C*>(AHat2_C::StaticClass()->DefaultObject);

	return Default;
}

}


