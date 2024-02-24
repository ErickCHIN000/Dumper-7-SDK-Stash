#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Ranger_Cryonado_Start_01.A_Ranger_Cryonado_Start_01_C
// (None)

class UClass* UA_Ranger_Cryonado_Start_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Ranger_Cryonado_Start_01_C");

	return Clss;
}


// A_Ranger_Cryonado_Start_01_C A_Ranger_Cryonado_Start_01.Default__A_Ranger_Cryonado_Start_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Ranger_Cryonado_Start_01_C* UA_Ranger_Cryonado_Start_01_C::GetDefaultObj()
{
	static class UA_Ranger_Cryonado_Start_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Ranger_Cryonado_Start_01_C*>(UA_Ranger_Cryonado_Start_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


