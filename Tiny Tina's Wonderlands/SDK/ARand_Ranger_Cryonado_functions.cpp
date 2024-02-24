#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Ranger_Cryonado.ARand_Ranger_Cryonado_C
// (None)

class UClass* UARand_Ranger_Cryonado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Ranger_Cryonado_C");

	return Clss;
}


// ARand_Ranger_Cryonado_C ARand_Ranger_Cryonado.Default__ARand_Ranger_Cryonado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Ranger_Cryonado_C* UARand_Ranger_Cryonado_C::GetDefaultObj()
{
	static class UARand_Ranger_Cryonado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Ranger_Cryonado_C*>(UARand_Ranger_Cryonado_C::StaticClass()->DefaultObject);

	return Default;
}

}


