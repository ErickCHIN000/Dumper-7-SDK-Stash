#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01_Pregnancy.FaleneDefault01_Pregnancy_C
// (None)

class UClass* UFaleneDefault01_Pregnancy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_Pregnancy_C");

	return Clss;
}


// FaleneDefault01_Pregnancy_C FaleneDefault01_Pregnancy.Default__FaleneDefault01_Pregnancy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_Pregnancy_C* UFaleneDefault01_Pregnancy_C::GetDefaultObj()
{
	static class UFaleneDefault01_Pregnancy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_Pregnancy_C*>(UFaleneDefault01_Pregnancy_C::StaticClass()->DefaultObject);

	return Default;
}

}


