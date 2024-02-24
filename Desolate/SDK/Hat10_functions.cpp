#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat10.Hat10_C
// (Actor)

class UClass* AHat10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat10_C");

	return Clss;
}


// Hat10_C Hat10.Default__Hat10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat10_C* AHat10_C::GetDefaultObj()
{
	static class AHat10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat10_C*>(AHat10_C::StaticClass()->DefaultObject);

	return Default;
}

}


