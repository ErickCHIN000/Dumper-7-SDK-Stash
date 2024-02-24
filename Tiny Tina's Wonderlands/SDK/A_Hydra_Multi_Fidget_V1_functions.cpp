#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Multi_Fidget_V1.A_Hydra_Multi_Fidget_V1_C
// (None)

class UClass* UA_Hydra_Multi_Fidget_V1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Multi_Fidget_V1_C");

	return Clss;
}


// A_Hydra_Multi_Fidget_V1_C A_Hydra_Multi_Fidget_V1.Default__A_Hydra_Multi_Fidget_V1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Multi_Fidget_V1_C* UA_Hydra_Multi_Fidget_V1_C::GetDefaultObj()
{
	static class UA_Hydra_Multi_Fidget_V1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Multi_Fidget_V1_C*>(UA_Hydra_Multi_Fidget_V1_C::StaticClass()->DefaultObject);

	return Default;
}

}


