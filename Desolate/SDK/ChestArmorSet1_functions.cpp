#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet1.ChestArmorSet1_C
// (Actor)

class UClass* AChestArmorSet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet1_C");

	return Clss;
}


// ChestArmorSet1_C ChestArmorSet1.Default__ChestArmorSet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet1_C* AChestArmorSet1_C::GetDefaultObj()
{
	static class AChestArmorSet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet1_C*>(AChestArmorSet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


