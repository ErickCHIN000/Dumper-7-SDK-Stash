#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Poison2.ChopMachette_Poison2_C
// (Actor)

class UClass* AChopMachette_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Poison2_C");

	return Clss;
}


// ChopMachette_Poison2_C ChopMachette_Poison2.Default__ChopMachette_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Poison2_C* AChopMachette_Poison2_C::GetDefaultObj()
{
	static class AChopMachette_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Poison2_C*>(AChopMachette_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


