#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Orgasium.Item_Orgasium_C
// (None)

class UClass* UItem_Orgasium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Orgasium_C");

	return Clss;
}


// Item_Orgasium_C Item_Orgasium.Default__Item_Orgasium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Orgasium_C* UItem_Orgasium_C::GetDefaultObj()
{
	static class UItem_Orgasium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Orgasium_C*>(UItem_Orgasium_C::StaticClass()->DefaultObject);

	return Default;
}

}


