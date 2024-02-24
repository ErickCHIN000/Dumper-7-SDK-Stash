#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_Shock.Disease_Shock_C
// (Actor)

class UClass* ADisease_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_Shock_C");

	return Clss;
}


// Disease_Shock_C Disease_Shock.Default__Disease_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_Shock_C* ADisease_Shock_C::GetDefaultObj()
{
	static class ADisease_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_Shock_C*>(ADisease_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


