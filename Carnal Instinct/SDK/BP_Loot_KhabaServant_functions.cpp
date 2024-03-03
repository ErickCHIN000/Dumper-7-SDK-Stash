#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Loot_KhabaServant.BP_Loot_KhabaServant_C
// (Actor)

class UClass* ABP_Loot_KhabaServant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_KhabaServant_C");

	return Clss;
}


// BP_Loot_KhabaServant_C BP_Loot_KhabaServant.Default__BP_Loot_KhabaServant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Loot_KhabaServant_C* ABP_Loot_KhabaServant_C::GetDefaultObj()
{
	static class ABP_Loot_KhabaServant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Loot_KhabaServant_C*>(ABP_Loot_KhabaServant_C::StaticClass()->DefaultObject);

	return Default;
}

}


