#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Damage_Bullet_High_L.BPCamShake_Damage_Bullet_High_L_C
// (None)

class UClass* UBPCamShake_Damage_Bullet_High_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Damage_Bullet_High_L_C");

	return Clss;
}


// BPCamShake_Damage_Bullet_High_L_C BPCamShake_Damage_Bullet_High_L.Default__BPCamShake_Damage_Bullet_High_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Damage_Bullet_High_L_C* UBPCamShake_Damage_Bullet_High_L_C::GetDefaultObj()
{
	static class UBPCamShake_Damage_Bullet_High_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Damage_Bullet_High_L_C*>(UBPCamShake_Damage_Bullet_High_L_C::StaticClass()->DefaultObject);

	return Default;
}

}


