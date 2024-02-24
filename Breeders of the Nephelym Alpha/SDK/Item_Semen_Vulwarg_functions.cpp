#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Semen_Vulwarg.Item_Semen_Vulwarg_C
// (None)

class UClass* UItem_Semen_Vulwarg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Semen_Vulwarg_C");

	return Clss;
}


// Item_Semen_Vulwarg_C Item_Semen_Vulwarg.Default__Item_Semen_Vulwarg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Semen_Vulwarg_C* UItem_Semen_Vulwarg_C::GetDefaultObj()
{
	static class UItem_Semen_Vulwarg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Semen_Vulwarg_C*>(UItem_Semen_Vulwarg_C::StaticClass()->DefaultObject);

	return Default;
}

}


