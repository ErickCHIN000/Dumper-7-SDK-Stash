#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet2.ChestArmorSet2_C
// (Actor)

class UClass* AChestArmorSet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet2_C");

	return Clss;
}


// ChestArmorSet2_C ChestArmorSet2.Default__ChestArmorSet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet2_C* AChestArmorSet2_C::GetDefaultObj()
{
	static class AChestArmorSet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet2_C*>(AChestArmorSet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


