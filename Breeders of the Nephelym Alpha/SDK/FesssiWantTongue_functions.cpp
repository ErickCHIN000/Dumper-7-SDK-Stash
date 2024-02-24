#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiWantTongue.FesssiWantTongue_C
// (None)

class UClass* UFesssiWantTongue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiWantTongue_C");

	return Clss;
}


// FesssiWantTongue_C FesssiWantTongue.Default__FesssiWantTongue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiWantTongue_C* UFesssiWantTongue_C::GetDefaultObj()
{
	static class UFesssiWantTongue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiWantTongue_C*>(UFesssiWantTongue_C::StaticClass()->DefaultObject);

	return Default;
}

}


