#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_COV_Bluecake_2.LightProjectile_HW_COV_Bluecake_2_C
// (None)

class UClass* ULightProjectile_HW_COV_Bluecake_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_COV_Bluecake_2_C");

	return Clss;
}


// LightProjectile_HW_COV_Bluecake_2_C LightProjectile_HW_COV_Bluecake_2.Default__LightProjectile_HW_COV_Bluecake_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_COV_Bluecake_2_C* ULightProjectile_HW_COV_Bluecake_2_C::GetDefaultObj()
{
	static class ULightProjectile_HW_COV_Bluecake_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_COV_Bluecake_2_C*>(ULightProjectile_HW_COV_Bluecake_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


