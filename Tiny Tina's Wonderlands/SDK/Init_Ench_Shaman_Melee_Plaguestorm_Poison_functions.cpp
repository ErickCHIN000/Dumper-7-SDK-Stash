#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_Shaman_Melee_Plaguestorm_Poison.Init_Ench_Shaman_Melee_Plaguestorm_Poison_C
// (None)

class UClass* UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_Shaman_Melee_Plaguestorm_Poison_C");

	return Clss;
}


// Init_Ench_Shaman_Melee_Plaguestorm_Poison_C Init_Ench_Shaman_Melee_Plaguestorm_Poison.Default__Init_Ench_Shaman_Melee_Plaguestorm_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C* UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C::GetDefaultObj()
{
	static class UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C*>(UInit_Ench_Shaman_Melee_Plaguestorm_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


