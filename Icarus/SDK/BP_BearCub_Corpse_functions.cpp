#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BearCub_Corpse.BP_BearCub_Corpse_C
// (Actor)

class UClass* ABP_BearCub_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BearCub_Corpse_C");

	return Clss;
}


// BP_BearCub_Corpse_C BP_BearCub_Corpse.Default__BP_BearCub_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BearCub_Corpse_C* ABP_BearCub_Corpse_C::GetDefaultObj()
{
	static class ABP_BearCub_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BearCub_Corpse_C*>(ABP_BearCub_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


