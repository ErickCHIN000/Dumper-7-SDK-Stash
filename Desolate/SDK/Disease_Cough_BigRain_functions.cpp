#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Disease_Cough_BigRain.Disease_Cough_BigRain_C
// (Actor)

class UClass* ADisease_Cough_BigRain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Disease_Cough_BigRain_C");

	return Clss;
}


// Disease_Cough_BigRain_C Disease_Cough_BigRain.Default__Disease_Cough_BigRain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADisease_Cough_BigRain_C* ADisease_Cough_BigRain_C::GetDefaultObj()
{
	static class ADisease_Cough_BigRain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADisease_Cough_BigRain_C*>(ADisease_Cough_BigRain_C::StaticClass()->DefaultObject);

	return Default;
}

}


