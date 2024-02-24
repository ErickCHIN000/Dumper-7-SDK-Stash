#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernMilk_01_BreederF.FernMilk_01_BreederF_C
// (None)

class UClass* UFernMilk_01_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernMilk_01_BreederF_C");

	return Clss;
}


// FernMilk_01_BreederF_C FernMilk_01_BreederF.Default__FernMilk_01_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernMilk_01_BreederF_C* UFernMilk_01_BreederF_C::GetDefaultObj()
{
	static class UFernMilk_01_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernMilk_01_BreederF_C*>(UFernMilk_01_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


