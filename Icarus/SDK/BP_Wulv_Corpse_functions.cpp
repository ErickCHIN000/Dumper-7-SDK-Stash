#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wulv_Corpse.BP_Wulv_Corpse_C
// (Actor)

class UClass* ABP_Wulv_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wulv_Corpse_C");

	return Clss;
}


// BP_Wulv_Corpse_C BP_Wulv_Corpse.Default__BP_Wulv_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wulv_Corpse_C* ABP_Wulv_Corpse_C::GetDefaultObj()
{
	static class ABP_Wulv_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wulv_Corpse_C*>(ABP_Wulv_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


