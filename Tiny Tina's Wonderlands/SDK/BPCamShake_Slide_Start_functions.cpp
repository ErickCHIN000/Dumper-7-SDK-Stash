#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Slide_Start.BPCamShake_Slide_Start_C
// (None)

class UClass* UBPCamShake_Slide_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Slide_Start_C");

	return Clss;
}


// BPCamShake_Slide_Start_C BPCamShake_Slide_Start.Default__BPCamShake_Slide_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Slide_Start_C* UBPCamShake_Slide_Start_C::GetDefaultObj()
{
	static class UBPCamShake_Slide_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Slide_Start_C*>(UBPCamShake_Slide_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


