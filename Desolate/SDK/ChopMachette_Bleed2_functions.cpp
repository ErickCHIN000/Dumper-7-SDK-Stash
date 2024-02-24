#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChopMachette_Bleed2.ChopMachette_Bleed2_C
// (Actor)

class UClass* AChopMachette_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChopMachette_Bleed2_C");

	return Clss;
}


// ChopMachette_Bleed2_C ChopMachette_Bleed2.Default__ChopMachette_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopMachette_Bleed2_C* AChopMachette_Bleed2_C::GetDefaultObj()
{
	static class AChopMachette_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopMachette_Bleed2_C*>(AChopMachette_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


