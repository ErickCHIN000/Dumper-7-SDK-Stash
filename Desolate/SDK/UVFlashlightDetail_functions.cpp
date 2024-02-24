#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UVFlashlightDetail.UVFlashlightDetail_C
// (Actor)

class UClass* AUVFlashlightDetail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVFlashlightDetail_C");

	return Clss;
}


// UVFlashlightDetail_C UVFlashlightDetail.Default__UVFlashlightDetail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUVFlashlightDetail_C* AUVFlashlightDetail_C::GetDefaultObj()
{
	static class AUVFlashlightDetail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUVFlashlightDetail_C*>(AUVFlashlightDetail_C::StaticClass()->DefaultObject);

	return Default;
}

}


