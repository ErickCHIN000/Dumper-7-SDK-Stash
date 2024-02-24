#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet9.ChestArmorSet9_C
// (Actor)

class UClass* AChestArmorSet9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet9_C");

	return Clss;
}


// ChestArmorSet9_C ChestArmorSet9.Default__ChestArmorSet9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet9_C* AChestArmorSet9_C::GetDefaultObj()
{
	static class AChestArmorSet9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet9_C*>(AChestArmorSet9_C::StaticClass()->DefaultObject);

	return Default;
}

}


