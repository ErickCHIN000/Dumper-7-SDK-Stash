#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FemtoItem.FemtoItem_C
// (Actor)

class UClass* AFemtoItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FemtoItem_C");

	return Clss;
}


// FemtoItem_C FemtoItem.Default__FemtoItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFemtoItem_C* AFemtoItem_C::GetDefaultObj()
{
	static class AFemtoItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFemtoItem_C*>(AFemtoItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FemtoItem.FemtoItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFemtoItem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FemtoItem_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


