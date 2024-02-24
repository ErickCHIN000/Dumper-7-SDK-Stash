#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExperimentalFiber.ExperimentalFiber_C
// (Actor)

class UClass* AExperimentalFiber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperimentalFiber_C");

	return Clss;
}


// ExperimentalFiber_C ExperimentalFiber.Default__ExperimentalFiber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AExperimentalFiber_C* AExperimentalFiber_C::GetDefaultObj()
{
	static class AExperimentalFiber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AExperimentalFiber_C*>(AExperimentalFiber_C::StaticClass()->DefaultObject);

	return Default;
}

}


