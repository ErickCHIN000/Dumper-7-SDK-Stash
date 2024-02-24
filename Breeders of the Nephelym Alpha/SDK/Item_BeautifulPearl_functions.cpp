#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_BeautifulPearl.Item_BeautifulPearl_C
// (None)

class UClass* UItem_BeautifulPearl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_BeautifulPearl_C");

	return Clss;
}


// Item_BeautifulPearl_C Item_BeautifulPearl.Default__Item_BeautifulPearl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_BeautifulPearl_C* UItem_BeautifulPearl_C::GetDefaultObj()
{
	static class UItem_BeautifulPearl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_BeautifulPearl_C*>(UItem_BeautifulPearl_C::StaticClass()->DefaultObject);

	return Default;
}

}


