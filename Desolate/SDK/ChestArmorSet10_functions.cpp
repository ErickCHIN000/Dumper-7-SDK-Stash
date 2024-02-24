#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet10.ChestArmorSet10_C
// (Actor)

class UClass* AChestArmorSet10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet10_C");

	return Clss;
}


// ChestArmorSet10_C ChestArmorSet10.Default__ChestArmorSet10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet10_C* AChestArmorSet10_C::GetDefaultObj()
{
	static class AChestArmorSet10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet10_C*>(AChestArmorSet10_C::StaticClass()->DefaultObject);

	return Default;
}

}


