#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_Cough.Disease_Cough_C
// (Actor)

class UClass* ADisease_Cough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_Cough_C");

	return Clss;
}


// Disease_Cough_C Disease_Cough.Default__Disease_Cough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_Cough_C* ADisease_Cough_C::GetDefaultObj()
{
	static class ADisease_Cough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_Cough_C*>(ADisease_Cough_C::StaticClass()->DefaultObject);

	return Default;
}

}


