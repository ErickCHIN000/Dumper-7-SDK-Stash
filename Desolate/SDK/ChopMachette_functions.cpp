#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette.ChopMachette_C
// (Actor)

class UClass* AChopMachette_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_C");

	return Clss;
}


// ChopMachette_C ChopMachette.Default__ChopMachette_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_C* AChopMachette_C::GetDefaultObj()
{
	static class AChopMachette_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_C*>(AChopMachette_C::StaticClass()->DefaultObject);

	return Default;
}

}


