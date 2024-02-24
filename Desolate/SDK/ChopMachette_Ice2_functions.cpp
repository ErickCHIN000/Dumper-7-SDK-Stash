#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Ice2.ChopMachette_Ice2_C
// (Actor)

class UClass* AChopMachette_Ice2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Ice2_C");

	return Clss;
}


// ChopMachette_Ice2_C ChopMachette_Ice2.Default__ChopMachette_Ice2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Ice2_C* AChopMachette_Ice2_C::GetDefaultObj()
{
	static class AChopMachette_Ice2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Ice2_C*>(AChopMachette_Ice2_C::StaticClass()->DefaultObject);

	return Default;
}

}


