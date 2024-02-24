#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Damage_Environment.BPCamShake_Damage_Environment_C
// (None)

class UClass* UBPCamShake_Damage_Environment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Damage_Environment_C");

	return Clss;
}


// BPCamShake_Damage_Environment_C BPCamShake_Damage_Environment.Default__BPCamShake_Damage_Environment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Damage_Environment_C* UBPCamShake_Damage_Environment_C::GetDefaultObj()
{
	static class UBPCamShake_Damage_Environment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Damage_Environment_C*>(UBPCamShake_Damage_Environment_C::StaticClass()->DefaultObject);

	return Default;
}

}


