#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet6.ChestArmorSet6_C
// (Actor)

class UClass* AChestArmorSet6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet6_C");

	return Clss;
}


// ChestArmorSet6_C ChestArmorSet6.Default__ChestArmorSet6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet6_C* AChestArmorSet6_C::GetDefaultObj()
{
	static class AChestArmorSet6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet6_C*>(AChestArmorSet6_C::StaticClass()->DefaultObject);

	return Default;
}

}


