#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault01_R01.FernDefault01_R01_C
// (None)

class UClass* UFernDefault01_R01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault01_R01_C");

	return Clss;
}


// FernDefault01_R01_C FernDefault01_R01.Default__FernDefault01_R01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault01_R01_C* UFernDefault01_R01_C::GetDefaultObj()
{
	static class UFernDefault01_R01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault01_R01_C*>(UFernDefault01_R01_C::StaticClass()->DefaultObject);

	return Default;
}

}

