#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernCumP2_BreederT.FernCumP2_BreederT_C
// (None)

class UClass* UFernCumP2_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernCumP2_BreederT_C");

	return Clss;
}


// FernCumP2_BreederT_C FernCumP2_BreederT.Default__FernCumP2_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernCumP2_BreederT_C* UFernCumP2_BreederT_C::GetDefaultObj()
{
	static class UFernCumP2_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernCumP2_BreederT_C*>(UFernCumP2_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


