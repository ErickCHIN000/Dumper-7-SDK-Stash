#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShoulderCannonBullet.ShoulderCannonBullet_C
// (Actor)

class UClass* AShoulderCannonBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShoulderCannonBullet_C");

	return Clss;
}


// ShoulderCannonBullet_C ShoulderCannonBullet.Default__ShoulderCannonBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShoulderCannonBullet_C* AShoulderCannonBullet_C::GetDefaultObj()
{
	static class AShoulderCannonBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShoulderCannonBullet_C*>(AShoulderCannonBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShoulderCannonBullet.ShoulderCannonBullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShoulderCannonBullet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShoulderCannonBullet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


