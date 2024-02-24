#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_WeaponFire_Beam.BPCamShake_WeaponFire_Beam_C
// (None)

class UClass* UBPCamShake_WeaponFire_Beam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_WeaponFire_Beam_C");

	return Clss;
}


// BPCamShake_WeaponFire_Beam_C BPCamShake_WeaponFire_Beam.Default__BPCamShake_WeaponFire_Beam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_WeaponFire_Beam_C* UBPCamShake_WeaponFire_Beam_C::GetDefaultObj()
{
	static class UBPCamShake_WeaponFire_Beam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_WeaponFire_Beam_C*>(UBPCamShake_WeaponFire_Beam_C::StaticClass()->DefaultObject);

	return Default;
}

}


