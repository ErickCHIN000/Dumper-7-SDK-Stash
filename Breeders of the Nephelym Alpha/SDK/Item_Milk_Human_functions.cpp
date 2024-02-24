#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Milk_Human.Item_Milk_Human_C
// (None)

class UClass* UItem_Milk_Human_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Milk_Human_C");

	return Clss;
}


// Item_Milk_Human_C Item_Milk_Human.Default__Item_Milk_Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Milk_Human_C* UItem_Milk_Human_C::GetDefaultObj()
{
	static class UItem_Milk_Human_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Milk_Human_C*>(UItem_Milk_Human_C::StaticClass()->DefaultObject);

	return Default;
}

}


