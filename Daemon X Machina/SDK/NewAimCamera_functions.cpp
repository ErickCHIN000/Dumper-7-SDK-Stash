#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewAimCamera.NewAimCamera_C
// (Actor)

class UClass* ANewAimCamera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewAimCamera_C");

	return Clss;
}


// NewAimCamera_C NewAimCamera.Default__NewAimCamera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewAimCamera_C* ANewAimCamera_C::GetDefaultObj()
{
	static class ANewAimCamera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewAimCamera_C*>(ANewAimCamera_C::StaticClass()->DefaultObject);

	return Default;
}

}


