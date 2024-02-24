#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPHeatComponent_Weapon_Base.BPHeatComponent_Weapon_Base_C
// (None)

class UClass* UBPHeatComponent_Weapon_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPHeatComponent_Weapon_Base_C");

	return Clss;
}


// BPHeatComponent_Weapon_Base_C BPHeatComponent_Weapon_Base.Default__BPHeatComponent_Weapon_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPHeatComponent_Weapon_Base_C* UBPHeatComponent_Weapon_Base_C::GetDefaultObj()
{
	static class UBPHeatComponent_Weapon_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPHeatComponent_Weapon_Base_C*>(UBPHeatComponent_Weapon_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


