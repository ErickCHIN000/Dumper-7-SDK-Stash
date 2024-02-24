#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Keystone.Item_Keystone_C
// (None)

class UClass* UItem_Keystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Keystone_C");

	return Clss;
}


// Item_Keystone_C Item_Keystone.Default__Item_Keystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Keystone_C* UItem_Keystone_C::GetDefaultObj()
{
	static class UItem_Keystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Keystone_C*>(UItem_Keystone_C::StaticClass()->DefaultObject);

	return Default;
}

}


