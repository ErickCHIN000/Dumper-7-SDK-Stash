#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Land_High_Camera_Dip.BPCamShake_Land_High_Camera_Dip_C
// (None)

class UClass* UBPCamShake_Land_High_Camera_Dip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Land_High_Camera_Dip_C");

	return Clss;
}


// BPCamShake_Land_High_Camera_Dip_C BPCamShake_Land_High_Camera_Dip.Default__BPCamShake_Land_High_Camera_Dip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Land_High_Camera_Dip_C* UBPCamShake_Land_High_Camera_Dip_C::GetDefaultObj()
{
	static class UBPCamShake_Land_High_Camera_Dip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Land_High_Camera_Dip_C*>(UBPCamShake_Land_High_Camera_Dip_C::StaticClass()->DefaultObject);

	return Default;
}

}


