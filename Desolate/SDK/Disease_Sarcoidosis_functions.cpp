#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_Sarcoidosis.Disease_Sarcoidosis_C
// (Actor)

class UClass* ADisease_Sarcoidosis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_Sarcoidosis_C");

	return Clss;
}


// Disease_Sarcoidosis_C Disease_Sarcoidosis.Default__Disease_Sarcoidosis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_Sarcoidosis_C* ADisease_Sarcoidosis_C::GetDefaultObj()
{
	static class ADisease_Sarcoidosis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_Sarcoidosis_C*>(ADisease_Sarcoidosis_C::StaticClass()->DefaultObject);

	return Default;
}

}


