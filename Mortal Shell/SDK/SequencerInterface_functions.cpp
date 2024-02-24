#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SequencerInterface.SequencerInterface_C
// (None)

class UClass* ISequencerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencerInterface_C");

	return Clss;
}


// SequencerInterface_C SequencerInterface.Default__SequencerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISequencerInterface_C* ISequencerInterface_C::GetDefaultObj()
{
	static class ISequencerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISequencerInterface_C*>(ISequencerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerInterface.SequencerInterface_C.SequencerUpdateSpawners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISequencerInterface_C::SequencerUpdateSpawners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerInterface_C", "SequencerUpdateSpawners");



	UObject::ProcessEvent(Func, nullptr);

}

}


