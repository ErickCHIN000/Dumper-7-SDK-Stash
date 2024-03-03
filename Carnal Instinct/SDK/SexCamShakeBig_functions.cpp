#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SexCamShakeBig.SexCamShakeBig_C
// (None)

class UClass* USexCamShakeBig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexCamShakeBig_C");

	return Clss;
}


// SexCamShakeBig_C SexCamShakeBig.Default__SexCamShakeBig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USexCamShakeBig_C* USexCamShakeBig_C::GetDefaultObj()
{
	static class USexCamShakeBig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USexCamShakeBig_C*>(USexCamShakeBig_C::StaticClass()->DefaultObject);

	return Default;
}

}


