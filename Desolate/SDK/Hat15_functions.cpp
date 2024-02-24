#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat15.Hat15_C
// (Actor)

class UClass* AHat15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat15_C");

	return Clss;
}


// Hat15_C Hat15.Default__Hat15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat15_C* AHat15_C::GetDefaultObj()
{
	static class AHat15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat15_C*>(AHat15_C::StaticClass()->DefaultObject);

	return Default;
}

}


