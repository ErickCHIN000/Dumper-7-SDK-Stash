#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TEDProjectile_ZeusLightningBolt_SM.TEDProjectile_ZeusLightningBolt_SM_C
// (Actor)

class UClass* ATEDProjectile_ZeusLightningBolt_SM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TEDProjectile_ZeusLightningBolt_SM_C");

	return Clss;
}


// TEDProjectile_ZeusLightningBolt_SM_C TEDProjectile_ZeusLightningBolt_SM.Default__TEDProjectile_ZeusLightningBolt_SM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATEDProjectile_ZeusLightningBolt_SM_C* ATEDProjectile_ZeusLightningBolt_SM_C::GetDefaultObj()
{
	static class ATEDProjectile_ZeusLightningBolt_SM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATEDProjectile_ZeusLightningBolt_SM_C*>(ATEDProjectile_ZeusLightningBolt_SM_C::StaticClass()->DefaultObject);

	return Default;
}

}


