#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_GroundSlam_Land_Area.BPCamShake_GroundSlam_Land_Area_C
// (None)

class UClass* UBPCamShake_GroundSlam_Land_Area_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_GroundSlam_Land_Area_C");

	return Clss;
}


// BPCamShake_GroundSlam_Land_Area_C BPCamShake_GroundSlam_Land_Area.Default__BPCamShake_GroundSlam_Land_Area_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_GroundSlam_Land_Area_C* UBPCamShake_GroundSlam_Land_Area_C::GetDefaultObj()
{
	static class UBPCamShake_GroundSlam_Land_Area_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_GroundSlam_Land_Area_C*>(UBPCamShake_GroundSlam_Land_Area_C::StaticClass()->DefaultObject);

	return Default;
}

}


