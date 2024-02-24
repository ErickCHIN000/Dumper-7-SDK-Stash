#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Light_250ms.BPCamShake_Light_250ms_C
// (None)

class UClass* UBPCamShake_Light_250ms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Light_250ms_C");

	return Clss;
}


// BPCamShake_Light_250ms_C BPCamShake_Light_250ms.Default__BPCamShake_Light_250ms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Light_250ms_C* UBPCamShake_Light_250ms_C::GetDefaultObj()
{
	static class UBPCamShake_Light_250ms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Light_250ms_C*>(UBPCamShake_Light_250ms_C::StaticClass()->DefaultObject);

	return Default;
}

}


