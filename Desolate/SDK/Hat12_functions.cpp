#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat12.Hat12_C
// (Actor)

class UClass* AHat12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat12_C");

	return Clss;
}


// Hat12_C Hat12.Default__Hat12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat12_C* AHat12_C::GetDefaultObj()
{
	static class AHat12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat12_C*>(AHat12_C::StaticClass()->DefaultObject);

	return Default;
}

}


