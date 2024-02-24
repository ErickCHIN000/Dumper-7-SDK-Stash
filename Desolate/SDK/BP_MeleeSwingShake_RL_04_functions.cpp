#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MeleeSwingShake_RL_04.BP_MeleeSwingShake_RL_04_C
// (None)

class UClass* UBP_MeleeSwingShake_RL_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MeleeSwingShake_RL_04_C");

	return Clss;
}


// BP_MeleeSwingShake_RL_04_C BP_MeleeSwingShake_RL_04.Default__BP_MeleeSwingShake_RL_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MeleeSwingShake_RL_04_C* UBP_MeleeSwingShake_RL_04_C::GetDefaultObj()
{
	static class UBP_MeleeSwingShake_RL_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MeleeSwingShake_RL_04_C*>(UBP_MeleeSwingShake_RL_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


