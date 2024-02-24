#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernCum_01_BreederT.FernCum_01_BreederT_C
// (None)

class UClass* UFernCum_01_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernCum_01_BreederT_C");

	return Clss;
}


// FernCum_01_BreederT_C FernCum_01_BreederT.Default__FernCum_01_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernCum_01_BreederT_C* UFernCum_01_BreederT_C::GetDefaultObj()
{
	static class UFernCum_01_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernCum_01_BreederT_C*>(UFernCum_01_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


