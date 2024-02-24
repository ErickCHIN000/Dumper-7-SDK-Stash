#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CraftingStation.GE_CraftingStation_C
// (None)

class UClass* UGE_CraftingStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CraftingStation_C");

	return Clss;
}


// GE_CraftingStation_C GE_CraftingStation.Default__GE_CraftingStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CraftingStation_C* UGE_CraftingStation_C::GetDefaultObj()
{
	static class UGE_CraftingStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CraftingStation_C*>(UGE_CraftingStation_C::StaticClass()->DefaultObject);

	return Default;
}

}


