#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat20.Hat20_C
// (Actor)

class UClass* AHat20_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat20_C");

	return Clss;
}


// Hat20_C Hat20.Default__Hat20_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat20_C* AHat20_C::GetDefaultObj()
{
	static class AHat20_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat20_C*>(AHat20_C::StaticClass()->DefaultObject);

	return Default;
}

}


