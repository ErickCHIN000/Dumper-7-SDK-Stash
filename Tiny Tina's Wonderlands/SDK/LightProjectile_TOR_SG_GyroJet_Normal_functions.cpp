#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_TOR_SG_GyroJet_Normal.LightProjectile_TOR_SG_GyroJet_Normal_C
// (None)

class UClass* ULightProjectile_TOR_SG_GyroJet_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_TOR_SG_GyroJet_Normal_C");

	return Clss;
}


// LightProjectile_TOR_SG_GyroJet_Normal_C LightProjectile_TOR_SG_GyroJet_Normal.Default__LightProjectile_TOR_SG_GyroJet_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_TOR_SG_GyroJet_Normal_C* ULightProjectile_TOR_SG_GyroJet_Normal_C::GetDefaultObj()
{
	static class ULightProjectile_TOR_SG_GyroJet_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_TOR_SG_GyroJet_Normal_C*>(ULightProjectile_TOR_SG_GyroJet_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


