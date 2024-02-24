#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoreFragmentUnobtained.WBP_LoreFragmentUnobtained_C
// (None)

class UClass* UWBP_LoreFragmentUnobtained_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoreFragmentUnobtained_C");

	return Clss;
}


// WBP_LoreFragmentUnobtained_C WBP_LoreFragmentUnobtained.Default__WBP_LoreFragmentUnobtained_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoreFragmentUnobtained_C* UWBP_LoreFragmentUnobtained_C::GetDefaultObj()
{
	static class UWBP_LoreFragmentUnobtained_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoreFragmentUnobtained_C*>(UWBP_LoreFragmentUnobtained_C::StaticClass()->DefaultObject);

	return Default;
}

}


