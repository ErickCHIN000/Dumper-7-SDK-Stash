#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tornado_CameraShake_Constant.Tornado_CameraShake_Constant_C
// (None)

class UClass* UTornado_CameraShake_Constant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tornado_CameraShake_Constant_C");

	return Clss;
}


// Tornado_CameraShake_Constant_C Tornado_CameraShake_Constant.Default__Tornado_CameraShake_Constant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTornado_CameraShake_Constant_C* UTornado_CameraShake_Constant_C::GetDefaultObj()
{
	static class UTornado_CameraShake_Constant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTornado_CameraShake_Constant_C*>(UTornado_CameraShake_Constant_C::StaticClass()->DefaultObject);

	return Default;
}

}


