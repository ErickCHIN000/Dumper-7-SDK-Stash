#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet12.ChestArmorSet12_C
// (Actor)

class UClass* AChestArmorSet12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet12_C");

	return Clss;
}


// ChestArmorSet12_C ChestArmorSet12.Default__ChestArmorSet12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet12_C* AChestArmorSet12_C::GetDefaultObj()
{
	static class AChestArmorSet12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet12_C*>(AChestArmorSet12_C::StaticClass()->DefaultObject);

	return Default;
}

}


