#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_DemiLich_Interact.ARand_DemiLich_Interact_C
// (None)

class UClass* UARand_DemiLich_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_DemiLich_Interact_C");

	return Clss;
}


// ARand_DemiLich_Interact_C ARand_DemiLich_Interact.Default__ARand_DemiLich_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_DemiLich_Interact_C* UARand_DemiLich_Interact_C::GetDefaultObj()
{
	static class UARand_DemiLich_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_DemiLich_Interact_C*>(UARand_DemiLich_Interact_C::StaticClass()->DefaultObject);

	return Default;
}

}


