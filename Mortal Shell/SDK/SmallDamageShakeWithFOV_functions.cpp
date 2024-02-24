#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallDamageShakeWithFOV.SmallDamageShakeWithFOV_C
// (None)

class UClass* USmallDamageShakeWithFOV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallDamageShakeWithFOV_C");

	return Clss;
}


// SmallDamageShakeWithFOV_C SmallDamageShakeWithFOV.Default__SmallDamageShakeWithFOV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallDamageShakeWithFOV_C* USmallDamageShakeWithFOV_C::GetDefaultObj()
{
	static class USmallDamageShakeWithFOV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallDamageShakeWithFOV_C*>(USmallDamageShakeWithFOV_C::StaticClass()->DefaultObject);

	return Default;
}

}


