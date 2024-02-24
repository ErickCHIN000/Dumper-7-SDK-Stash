#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gear_Baa_DefaultGoat.BP_Gear_Baa_DefaultGoat_C
// (SceneComponent)

class UClass* UBP_Gear_Baa_DefaultGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gear_Baa_DefaultGoat_C");

	return Clss;
}


// BP_Gear_Baa_DefaultGoat_C BP_Gear_Baa_DefaultGoat.Default__BP_Gear_Baa_DefaultGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Gear_Baa_DefaultGoat_C* UBP_Gear_Baa_DefaultGoat_C::GetDefaultObj()
{
	static class UBP_Gear_Baa_DefaultGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Gear_Baa_DefaultGoat_C*>(UBP_Gear_Baa_DefaultGoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


