#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet13.ChestArmorSet13_C
// (Actor)

class UClass* AChestArmorSet13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet13_C");

	return Clss;
}


// ChestArmorSet13_C ChestArmorSet13.Default__ChestArmorSet13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet13_C* AChestArmorSet13_C::GetDefaultObj()
{
	static class AChestArmorSet13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet13_C*>(AChestArmorSet13_C::StaticClass()->DefaultObject);

	return Default;
}

}


