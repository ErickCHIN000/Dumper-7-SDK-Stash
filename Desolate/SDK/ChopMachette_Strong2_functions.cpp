#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Strong2.ChopMachette_Strong2_C
// (Actor)

class UClass* AChopMachette_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Strong2_C");

	return Clss;
}


// ChopMachette_Strong2_C ChopMachette_Strong2.Default__ChopMachette_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Strong2_C* AChopMachette_Strong2_C::GetDefaultObj()
{
	static class AChopMachette_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Strong2_C*>(AChopMachette_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


