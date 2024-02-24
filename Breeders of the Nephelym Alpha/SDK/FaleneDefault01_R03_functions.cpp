#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01_R03.FaleneDefault01_R03_C
// (None)

class UClass* UFaleneDefault01_R03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_R03_C");

	return Clss;
}


// FaleneDefault01_R03_C FaleneDefault01_R03.Default__FaleneDefault01_R03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_R03_C* UFaleneDefault01_R03_C::GetDefaultObj()
{
	static class UFaleneDefault01_R03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_R03_C*>(UFaleneDefault01_R03_C::StaticClass()->DefaultObject);

	return Default;
}

}


