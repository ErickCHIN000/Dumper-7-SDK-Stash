#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TEDProjectile_ZeusLightningBolt_PS.TEDProjectile_ZeusLightningBolt_PS_C
// (Actor)

class UClass* ATEDProjectile_ZeusLightningBolt_PS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TEDProjectile_ZeusLightningBolt_PS_C");

	return Clss;
}


// TEDProjectile_ZeusLightningBolt_PS_C TEDProjectile_ZeusLightningBolt_PS.Default__TEDProjectile_ZeusLightningBolt_PS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATEDProjectile_ZeusLightningBolt_PS_C* ATEDProjectile_ZeusLightningBolt_PS_C::GetDefaultObj()
{
	static class ATEDProjectile_ZeusLightningBolt_PS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATEDProjectile_ZeusLightningBolt_PS_C*>(ATEDProjectile_ZeusLightningBolt_PS_C::StaticClass()->DefaultObject);

	return Default;
}

}


