#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_Tank_Jump.NewLight_Tank_Jump_C
// (Actor)

class UClass* ANewLight_Tank_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_Tank_Jump_C");

	return Clss;
}


// NewLight_Tank_Jump_C NewLight_Tank_Jump.Default__NewLight_Tank_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_Tank_Jump_C* ANewLight_Tank_Jump_C::GetDefaultObj()
{
	static class ANewLight_Tank_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_Tank_Jump_C*>(ANewLight_Tank_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


