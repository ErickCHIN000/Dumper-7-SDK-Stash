#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_Flamethrower.NewLight_Flamethrower_C
// (Actor)

class UClass* ANewLight_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_Flamethrower_C");

	return Clss;
}


// NewLight_Flamethrower_C NewLight_Flamethrower.Default__NewLight_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_Flamethrower_C* ANewLight_Flamethrower_C::GetDefaultObj()
{
	static class ANewLight_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_Flamethrower_C*>(ANewLight_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


