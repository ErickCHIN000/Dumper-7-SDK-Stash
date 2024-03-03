#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass I_Stagger.I_Stagger_C
// (None)

class UClass* II_Stagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("I_Stagger_C");

	return Clss;
}


// I_Stagger_C I_Stagger.Default__I_Stagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class II_Stagger_C* II_Stagger_C::GetDefaultObj()
{
	static class II_Stagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<II_Stagger_C*>(II_Stagger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function I_Stagger.I_Stagger_C.ActivateStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void II_Stagger_C::ActivateStagger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_Stagger_C", "ActivateStagger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function I_Stagger.I_Stagger_C.UpdateStaggerValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void II_Stagger_C::UpdateStaggerValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("I_Stagger_C", "UpdateStaggerValue");



	UObject::ProcessEvent(Func, nullptr);

}

}


