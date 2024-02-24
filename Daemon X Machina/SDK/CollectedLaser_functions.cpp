#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CollectedLaser.CollectedLaser_C
// (Actor)

class UClass* ACollectedLaser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectedLaser_C");

	return Clss;
}


// CollectedLaser_C CollectedLaser.Default__CollectedLaser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACollectedLaser_C* ACollectedLaser_C::GetDefaultObj()
{
	static class ACollectedLaser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACollectedLaser_C*>(ACollectedLaser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectedLaser.CollectedLaser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACollectedLaser_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectedLaser_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


