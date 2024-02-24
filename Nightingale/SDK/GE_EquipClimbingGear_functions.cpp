#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipClimbingGear.GE_EquipClimbingGear_C
// (None)

class UClass* UGE_EquipClimbingGear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipClimbingGear_C");

	return Clss;
}


// GE_EquipClimbingGear_C GE_EquipClimbingGear.Default__GE_EquipClimbingGear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipClimbingGear_C* UGE_EquipClimbingGear_C::GetDefaultObj()
{
	static class UGE_EquipClimbingGear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipClimbingGear_C*>(UGE_EquipClimbingGear_C::StaticClass()->DefaultObject);

	return Default;
}

}


