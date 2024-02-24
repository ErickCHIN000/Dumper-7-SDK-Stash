#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TeleportPortal_Item.BP_TeleportPortal_Item_C
// (None)

class UClass* UBP_TeleportPortal_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TeleportPortal_Item_C");

	return Clss;
}


// BP_TeleportPortal_Item_C BP_TeleportPortal_Item.Default__BP_TeleportPortal_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TeleportPortal_Item_C* UBP_TeleportPortal_Item_C::GetDefaultObj()
{
	static class UBP_TeleportPortal_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TeleportPortal_Item_C*>(UBP_TeleportPortal_Item_C::StaticClass()->DefaultObject);

	return Default;
}

}


