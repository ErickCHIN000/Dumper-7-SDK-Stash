#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PuzzleActivationInterface.PuzzleActivationInterface_C
// (None)

class UClass* IPuzzleActivationInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PuzzleActivationInterface_C");

	return Clss;
}


// PuzzleActivationInterface_C PuzzleActivationInterface.Default__PuzzleActivationInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPuzzleActivationInterface_C* IPuzzleActivationInterface_C::GetDefaultObj()
{
	static class IPuzzleActivationInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPuzzleActivationInterface_C*>(IPuzzleActivationInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PuzzleActivationInterface.PuzzleActivationInterface_C.PuzzleCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPuzzleActivationInterface_C::PuzzleCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PuzzleActivationInterface_C", "PuzzleCompleted");



	UObject::ProcessEvent(Func, nullptr);

}

}


