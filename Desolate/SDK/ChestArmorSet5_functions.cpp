#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet5.ChestArmorSet5_C
// (Actor)

class UClass* AChestArmorSet5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet5_C");

	return Clss;
}


// ChestArmorSet5_C ChestArmorSet5.Default__ChestArmorSet5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet5_C* AChestArmorSet5_C::GetDefaultObj()
{
	static class AChestArmorSet5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet5_C*>(AChestArmorSet5_C::StaticClass()->DefaultObject);

	return Default;
}

}


