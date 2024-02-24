#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EquipWadingGear.GE_EquipWadingGear_C
// (None)

class UClass* UGE_EquipWadingGear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EquipWadingGear_C");

	return Clss;
}


// GE_EquipWadingGear_C GE_EquipWadingGear.Default__GE_EquipWadingGear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EquipWadingGear_C* UGE_EquipWadingGear_C::GetDefaultObj()
{
	static class UGE_EquipWadingGear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EquipWadingGear_C*>(UGE_EquipWadingGear_C::StaticClass()->DefaultObject);

	return Default;
}

}


