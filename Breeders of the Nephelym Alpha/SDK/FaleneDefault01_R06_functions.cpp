#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01_R06.FaleneDefault01_R06_C
// (None)

class UClass* UFaleneDefault01_R06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_R06_C");

	return Clss;
}


// FaleneDefault01_R06_C FaleneDefault01_R06.Default__FaleneDefault01_R06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_R06_C* UFaleneDefault01_R06_C::GetDefaultObj()
{
	static class UFaleneDefault01_R06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_R06_C*>(UFaleneDefault01_R06_C::StaticClass()->DefaultObject);

	return Default;
}

}


