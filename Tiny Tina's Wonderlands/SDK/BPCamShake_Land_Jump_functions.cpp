#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCamShake_Land_Jump.BPCamShake_Land_Jump_C
// (None)

class UClass* UBPCamShake_Land_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCamShake_Land_Jump_C");

	return Clss;
}


// BPCamShake_Land_Jump_C BPCamShake_Land_Jump.Default__BPCamShake_Land_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCamShake_Land_Jump_C* UBPCamShake_Land_Jump_C::GetDefaultObj()
{
	static class UBPCamShake_Land_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCamShake_Land_Jump_C*>(UBPCamShake_Land_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


