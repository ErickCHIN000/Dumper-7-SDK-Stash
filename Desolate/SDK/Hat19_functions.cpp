#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat19.Hat19_C
// (Actor)

class UClass* AHat19_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat19_C");

	return Clss;
}


// Hat19_C Hat19.Default__Hat19_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat19_C* AHat19_C::GetDefaultObj()
{
	static class AHat19_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat19_C*>(AHat19_C::StaticClass()->DefaultObject);

	return Default;
}

}


