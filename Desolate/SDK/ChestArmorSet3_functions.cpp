#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet3.ChestArmorSet3_C
// (Actor)

class UClass* AChestArmorSet3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet3_C");

	return Clss;
}


// ChestArmorSet3_C ChestArmorSet3.Default__ChestArmorSet3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet3_C* AChestArmorSet3_C::GetDefaultObj()
{
	static class AChestArmorSet3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet3_C*>(AChestArmorSet3_C::StaticClass()->DefaultObject);

	return Default;
}

}


