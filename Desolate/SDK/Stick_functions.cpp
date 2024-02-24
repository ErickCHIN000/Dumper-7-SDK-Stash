#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick.Stick_C
// (Actor)

class UClass* AStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_C");

	return Clss;
}


// Stick_C Stick.Default__Stick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_C* AStick_C::GetDefaultObj()
{
	static class AStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_C*>(AStick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Stick.Stick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AStick_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Stick_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


