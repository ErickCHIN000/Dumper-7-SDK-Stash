#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet4.ChestArmorSet4_C
// (Actor)

class UClass* AChestArmorSet4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet4_C");

	return Clss;
}


// ChestArmorSet4_C ChestArmorSet4.Default__ChestArmorSet4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet4_C* AChestArmorSet4_C::GetDefaultObj()
{
	static class AChestArmorSet4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet4_C*>(AChestArmorSet4_C::StaticClass()->DefaultObject);

	return Default;
}

}


