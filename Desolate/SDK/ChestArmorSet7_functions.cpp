#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet7.ChestArmorSet7_C
// (Actor)

class UClass* AChestArmorSet7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet7_C");

	return Clss;
}


// ChestArmorSet7_C ChestArmorSet7.Default__ChestArmorSet7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet7_C* AChestArmorSet7_C::GetDefaultObj()
{
	static class AChestArmorSet7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet7_C*>(AChestArmorSet7_C::StaticClass()->DefaultObject);

	return Default;
}

}


