#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Weapon_Charging.BPCamShake_Weapon_Charging_C
// (None)

class UClass* UBPCamShake_Weapon_Charging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Weapon_Charging_C");

	return Clss;
}


// BPCamShake_Weapon_Charging_C BPCamShake_Weapon_Charging.Default__BPCamShake_Weapon_Charging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Weapon_Charging_C* UBPCamShake_Weapon_Charging_C::GetDefaultObj()
{
	static class UBPCamShake_Weapon_Charging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Weapon_Charging_C*>(UBPCamShake_Weapon_Charging_C::StaticClass()->DefaultObject);

	return Default;
}

}


