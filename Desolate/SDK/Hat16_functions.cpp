#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat16.Hat16_C
// (Actor)

class UClass* AHat16_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat16_C");

	return Clss;
}


// Hat16_C Hat16.Default__Hat16_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat16_C* AHat16_C::GetDefaultObj()
{
	static class AHat16_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat16_C*>(AHat16_C::StaticClass()->DefaultObject);

	return Default;
}

}


