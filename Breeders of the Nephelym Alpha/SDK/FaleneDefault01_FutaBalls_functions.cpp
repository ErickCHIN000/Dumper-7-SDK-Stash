#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01_FutaBalls.FaleneDefault01_FutaBalls_C
// (None)

class UClass* UFaleneDefault01_FutaBalls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_FutaBalls_C");

	return Clss;
}


// FaleneDefault01_FutaBalls_C FaleneDefault01_FutaBalls.Default__FaleneDefault01_FutaBalls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_FutaBalls_C* UFaleneDefault01_FutaBalls_C::GetDefaultObj()
{
	static class UFaleneDefault01_FutaBalls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_FutaBalls_C*>(UFaleneDefault01_FutaBalls_C::StaticClass()->DefaultObject);

	return Default;
}

}


