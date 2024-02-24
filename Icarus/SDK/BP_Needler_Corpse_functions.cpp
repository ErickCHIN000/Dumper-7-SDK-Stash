#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Needler_Corpse.BP_Needler_Corpse_C
// (Actor)

class UClass* ABP_Needler_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Needler_Corpse_C");

	return Clss;
}


// BP_Needler_Corpse_C BP_Needler_Corpse.Default__BP_Needler_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Needler_Corpse_C* ABP_Needler_Corpse_C::GetDefaultObj()
{
	static class ABP_Needler_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Needler_Corpse_C*>(ABP_Needler_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


