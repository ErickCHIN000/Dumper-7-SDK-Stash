#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Feed.WBP_Feed_C
// (None)

class UClass* UWBP_Feed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Feed_C");

	return Clss;
}


// WBP_Feed_C WBP_Feed.Default__WBP_Feed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Feed_C* UWBP_Feed_C::GetDefaultObj()
{
	static class UWBP_Feed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Feed_C*>(UWBP_Feed_C::StaticClass()->DefaultObject);

	return Default;
}

}


