#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Damage_Melee_High_F.BPCamShake_Damage_Melee_High_F_C
// (None)

class UClass* UBPCamShake_Damage_Melee_High_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Damage_Melee_High_F_C");

	return Clss;
}


// BPCamShake_Damage_Melee_High_F_C BPCamShake_Damage_Melee_High_F.Default__BPCamShake_Damage_Melee_High_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Damage_Melee_High_F_C* UBPCamShake_Damage_Melee_High_F_C::GetDefaultObj()
{
	static class UBPCamShake_Damage_Melee_High_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Damage_Melee_High_F_C*>(UBPCamShake_Damage_Melee_High_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


