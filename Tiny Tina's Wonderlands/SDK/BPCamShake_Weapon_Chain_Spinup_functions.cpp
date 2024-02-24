#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Weapon_Chain_Spinup.BPCamShake_Weapon_Chain_Spinup_C
// (None)

class UClass* UBPCamShake_Weapon_Chain_Spinup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Weapon_Chain_Spinup_C");

	return Clss;
}


// BPCamShake_Weapon_Chain_Spinup_C BPCamShake_Weapon_Chain_Spinup.Default__BPCamShake_Weapon_Chain_Spinup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Weapon_Chain_Spinup_C* UBPCamShake_Weapon_Chain_Spinup_C::GetDefaultObj()
{
	static class UBPCamShake_Weapon_Chain_Spinup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Weapon_Chain_Spinup_C*>(UBPCamShake_Weapon_Chain_Spinup_C::StaticClass()->DefaultObject);

	return Default;
}

}


