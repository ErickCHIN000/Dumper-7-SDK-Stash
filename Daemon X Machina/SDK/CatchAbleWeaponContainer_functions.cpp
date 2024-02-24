#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CatchAbleWeaponContainer.CatchAbleWeaponContainer_C
// (Actor)

class UClass* ACatchAbleWeaponContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CatchAbleWeaponContainer_C");

	return Clss;
}


// CatchAbleWeaponContainer_C CatchAbleWeaponContainer.Default__CatchAbleWeaponContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACatchAbleWeaponContainer_C* ACatchAbleWeaponContainer_C::GetDefaultObj()
{
	static class ACatchAbleWeaponContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACatchAbleWeaponContainer_C*>(ACatchAbleWeaponContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CatchAbleWeaponContainer.CatchAbleWeaponContainer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACatchAbleWeaponContainer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CatchAbleWeaponContainer_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


