#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FemtoShiftShield.FemtoShiftShield_C
// (Actor)

class UClass* AFemtoShiftShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FemtoShiftShield_C");

	return Clss;
}


// FemtoShiftShield_C FemtoShiftShield.Default__FemtoShiftShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFemtoShiftShield_C* AFemtoShiftShield_C::GetDefaultObj()
{
	static class AFemtoShiftShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFemtoShiftShield_C*>(AFemtoShiftShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FemtoShiftShield.FemtoShiftShield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFemtoShiftShield_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FemtoShiftShield_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


