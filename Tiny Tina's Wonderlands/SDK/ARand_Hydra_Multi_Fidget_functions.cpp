#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Hydra_Multi_Fidget.ARand_Hydra_Multi_Fidget_C
// (None)

class UClass* UARand_Hydra_Multi_Fidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Hydra_Multi_Fidget_C");

	return Clss;
}


// ARand_Hydra_Multi_Fidget_C ARand_Hydra_Multi_Fidget.Default__ARand_Hydra_Multi_Fidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Hydra_Multi_Fidget_C* UARand_Hydra_Multi_Fidget_C::GetDefaultObj()
{
	static class UARand_Hydra_Multi_Fidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Hydra_Multi_Fidget_C*>(UARand_Hydra_Multi_Fidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


