#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_Tank.NewLight_Tank_C
// (Actor, Pawn)

class UClass* ANewLight_Tank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_Tank_C");

	return Clss;
}


// NewLight_Tank_C NewLight_Tank.Default__NewLight_Tank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_Tank_C* ANewLight_Tank_C::GetDefaultObj()
{
	static class ANewLight_Tank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_Tank_C*>(ANewLight_Tank_C::StaticClass()->DefaultObject);

	return Default;
}

}


