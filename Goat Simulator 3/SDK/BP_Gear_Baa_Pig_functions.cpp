#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gear_Baa_Pig.BP_Gear_Baa_Pig_C
// (SceneComponent)

class UClass* UBP_Gear_Baa_Pig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gear_Baa_Pig_C");

	return Clss;
}


// BP_Gear_Baa_Pig_C BP_Gear_Baa_Pig.Default__BP_Gear_Baa_Pig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Gear_Baa_Pig_C* UBP_Gear_Baa_Pig_C::GetDefaultObj()
{
	static class UBP_Gear_Baa_Pig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Gear_Baa_Pig_C*>(UBP_Gear_Baa_Pig_C::StaticClass()->DefaultObject);

	return Default;
}

}


