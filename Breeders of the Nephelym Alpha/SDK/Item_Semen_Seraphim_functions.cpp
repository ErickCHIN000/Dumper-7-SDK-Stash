#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Semen_Seraphim.Item_Semen_Seraphim_C
// (None)

class UClass* UItem_Semen_Seraphim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Semen_Seraphim_C");

	return Clss;
}


// Item_Semen_Seraphim_C Item_Semen_Seraphim.Default__Item_Semen_Seraphim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Semen_Seraphim_C* UItem_Semen_Seraphim_C::GetDefaultObj()
{
	static class UItem_Semen_Seraphim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Semen_Seraphim_C*>(UItem_Semen_Seraphim_C::StaticClass()->DefaultObject);

	return Default;
}

}


