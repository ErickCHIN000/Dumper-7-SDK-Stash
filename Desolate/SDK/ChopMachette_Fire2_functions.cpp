#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Fire2.ChopMachette_Fire2_C
// (Actor)

class UClass* AChopMachette_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Fire2_C");

	return Clss;
}


// ChopMachette_Fire2_C ChopMachette_Fire2.Default__ChopMachette_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Fire2_C* AChopMachette_Fire2_C::GetDefaultObj()
{
	static class AChopMachette_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Fire2_C*>(AChopMachette_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


