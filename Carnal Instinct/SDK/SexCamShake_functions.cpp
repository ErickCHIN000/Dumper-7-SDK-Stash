#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SexCamShake.SexCamShake_C
// (None)

class UClass* USexCamShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexCamShake_C");

	return Clss;
}


// SexCamShake_C SexCamShake.Default__SexCamShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USexCamShake_C* USexCamShake_C::GetDefaultObj()
{
	static class USexCamShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USexCamShake_C*>(USexCamShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


