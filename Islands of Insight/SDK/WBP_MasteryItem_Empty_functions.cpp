#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MasteryItem_Empty.WBP_MasteryItem_Empty_C
// (None)

class UClass* UWBP_MasteryItem_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MasteryItem_Empty_C");

	return Clss;
}


// WBP_MasteryItem_Empty_C WBP_MasteryItem_Empty.Default__WBP_MasteryItem_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MasteryItem_Empty_C* UWBP_MasteryItem_Empty_C::GetDefaultObj()
{
	static class UWBP_MasteryItem_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MasteryItem_Empty_C*>(UWBP_MasteryItem_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


