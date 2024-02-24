#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoreFragmentObtained.WBP_LoreFragmentObtained_C
// (None)

class UClass* UWBP_LoreFragmentObtained_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoreFragmentObtained_C");

	return Clss;
}


// WBP_LoreFragmentObtained_C WBP_LoreFragmentObtained.Default__WBP_LoreFragmentObtained_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoreFragmentObtained_C* UWBP_LoreFragmentObtained_C::GetDefaultObj()
{
	static class UWBP_LoreFragmentObtained_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoreFragmentObtained_C*>(UWBP_LoreFragmentObtained_C::StaticClass()->DefaultObject);

	return Default;
}

}


