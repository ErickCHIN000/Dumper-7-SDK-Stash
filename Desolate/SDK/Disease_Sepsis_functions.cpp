#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_Sepsis.Disease_Sepsis_C
// (Actor)

class UClass* ADisease_Sepsis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_Sepsis_C");

	return Clss;
}


// Disease_Sepsis_C Disease_Sepsis.Default__Disease_Sepsis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_Sepsis_C* ADisease_Sepsis_C::GetDefaultObj()
{
	static class ADisease_Sepsis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_Sepsis_C*>(ADisease_Sepsis_C::StaticClass()->DefaultObject);

	return Default;
}

}


