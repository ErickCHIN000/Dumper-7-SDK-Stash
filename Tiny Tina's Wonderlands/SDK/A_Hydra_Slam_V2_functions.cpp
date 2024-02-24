#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Slam_V2.A_Hydra_Slam_V2_C
// (None)

class UClass* UA_Hydra_Slam_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Slam_V2_C");

	return Clss;
}


// A_Hydra_Slam_V2_C A_Hydra_Slam_V2.Default__A_Hydra_Slam_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Slam_V2_C* UA_Hydra_Slam_V2_C::GetDefaultObj()
{
	static class UA_Hydra_Slam_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Slam_V2_C*>(UA_Hydra_Slam_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


