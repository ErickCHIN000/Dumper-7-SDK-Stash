#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ItemSnapLoading.BP_ItemSnapLoading_C
// (None)

class UClass* UBP_ItemSnapLoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemSnapLoading_C");

	return Clss;
}


// BP_ItemSnapLoading_C BP_ItemSnapLoading.Default__BP_ItemSnapLoading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemSnapLoading_C* UBP_ItemSnapLoading_C::GetDefaultObj()
{
	static class UBP_ItemSnapLoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemSnapLoading_C*>(UBP_ItemSnapLoading_C::StaticClass()->DefaultObject);

	return Default;
}

}


