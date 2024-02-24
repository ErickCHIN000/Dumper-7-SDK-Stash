#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat6.Hat6_C
// (Actor)

class UClass* AHat6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat6_C");

	return Clss;
}


// Hat6_C Hat6.Default__Hat6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat6_C* AHat6_C::GetDefaultObj()
{
	static class AHat6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat6_C*>(AHat6_C::StaticClass()->DefaultObject);

	return Default;
}

}


