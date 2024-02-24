#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison.Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C
// (None)

class UClass* UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C");

	return Clss;
}


// Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison.Default__Init_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C* UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C::GetDefaultObj()
{
	static class UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C*>(UInit_Ench_Shaman_Gun_SpiritDmg_BonusPoison_C::StaticClass()->DefaultObject);

	return Default;
}

}


