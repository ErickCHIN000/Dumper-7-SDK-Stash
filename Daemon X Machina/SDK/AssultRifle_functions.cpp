#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AssultRifle.AssultRifle_C
// (Actor)

class UClass* AAssultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssultRifle_C");

	return Clss;
}


// AssultRifle_C AssultRifle.Default__AssultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAssultRifle_C* AAssultRifle_C::GetDefaultObj()
{
	static class AAssultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAssultRifle_C*>(AAssultRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AssultRifle.AssultRifle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAssultRifle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssultRifle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


