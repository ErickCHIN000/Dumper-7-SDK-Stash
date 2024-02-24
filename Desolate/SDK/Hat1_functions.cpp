#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat1.Hat1_C
// (Actor)

class UClass* AHat1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat1_C");

	return Clss;
}


// Hat1_C Hat1.Default__Hat1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat1_C* AHat1_C::GetDefaultObj()
{
	static class AHat1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat1_C*>(AHat1_C::StaticClass()->DefaultObject);

	return Default;
}

}


