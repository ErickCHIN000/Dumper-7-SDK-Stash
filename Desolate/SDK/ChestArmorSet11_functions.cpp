#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorSet11.ChestArmorSet11_C
// (Actor)

class UClass* AChestArmorSet11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorSet11_C");

	return Clss;
}


// ChestArmorSet11_C ChestArmorSet11.Default__ChestArmorSet11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChestArmorSet11_C* AChestArmorSet11_C::GetDefaultObj()
{
	static class AChestArmorSet11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChestArmorSet11_C*>(AChestArmorSet11_C::StaticClass()->DefaultObject);

	return Default;
}

}


