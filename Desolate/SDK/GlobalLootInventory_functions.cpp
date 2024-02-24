#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalLootInventory.GlobalLootInventory_C
// (Actor)

class UClass* AGlobalLootInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalLootInventory_C");

	return Clss;
}


// GlobalLootInventory_C GlobalLootInventory.Default__GlobalLootInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGlobalLootInventory_C* AGlobalLootInventory_C::GetDefaultObj()
{
	static class AGlobalLootInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGlobalLootInventory_C*>(AGlobalLootInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


