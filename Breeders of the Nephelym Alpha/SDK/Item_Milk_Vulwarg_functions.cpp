#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Milk_Vulwarg.Item_Milk_Vulwarg_C
// (None)

class UClass* UItem_Milk_Vulwarg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Milk_Vulwarg_C");

	return Clss;
}


// Item_Milk_Vulwarg_C Item_Milk_Vulwarg.Default__Item_Milk_Vulwarg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Milk_Vulwarg_C* UItem_Milk_Vulwarg_C::GetDefaultObj()
{
	static class UItem_Milk_Vulwarg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Milk_Vulwarg_C*>(UItem_Milk_Vulwarg_C::StaticClass()->DefaultObject);

	return Default;
}

}


