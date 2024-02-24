#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01.FaleneDefault01_C
// (None)

class UClass* UFaleneDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_C");

	return Clss;
}


// FaleneDefault01_C FaleneDefault01.Default__FaleneDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_C* UFaleneDefault01_C::GetDefaultObj()
{
	static class UFaleneDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_C*>(UFaleneDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


