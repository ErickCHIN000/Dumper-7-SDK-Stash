#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Hydra_Attack.ARand_Hydra_Attack_C
// (None)

class UClass* UARand_Hydra_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Hydra_Attack_C");

	return Clss;
}


// ARand_Hydra_Attack_C ARand_Hydra_Attack.Default__ARand_Hydra_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Hydra_Attack_C* UARand_Hydra_Attack_C::GetDefaultObj()
{
	static class UARand_Hydra_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Hydra_Attack_C*>(UARand_Hydra_Attack_C::StaticClass()->DefaultObject);

	return Default;
}

}


