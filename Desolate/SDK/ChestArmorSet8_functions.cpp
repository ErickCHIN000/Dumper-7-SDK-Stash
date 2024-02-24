#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet8.ChestArmorSet8_C
// (Actor)

class UClass* AChestArmorSet8_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet8_C");

	return Clss;
}


// ChestArmorSet8_C ChestArmorSet8.Default__ChestArmorSet8_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet8_C* AChestArmorSet8_C::GetDefaultObj()
{
	static class AChestArmorSet8_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet8_C*>(AChestArmorSet8_C::StaticClass()->DefaultObject);

	return Default;
}

}


