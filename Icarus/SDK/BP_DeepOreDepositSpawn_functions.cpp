#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeepOreDepositSpawn.BP_DeepOreDepositSpawn_C
// (Actor)

class UClass* ABP_DeepOreDepositSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeepOreDepositSpawn_C");

	return Clss;
}


// BP_DeepOreDepositSpawn_C BP_DeepOreDepositSpawn.Default__BP_DeepOreDepositSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeepOreDepositSpawn_C* ABP_DeepOreDepositSpawn_C::GetDefaultObj()
{
	static class ABP_DeepOreDepositSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeepOreDepositSpawn_C*>(ABP_DeepOreDepositSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


