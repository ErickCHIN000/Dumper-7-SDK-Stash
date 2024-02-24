#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConquestGlobalProgressBar.WBP_ConquestGlobalProgressBar_C
// (None)

class UClass* UWBP_ConquestGlobalProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConquestGlobalProgressBar_C");

	return Clss;
}


// WBP_ConquestGlobalProgressBar_C WBP_ConquestGlobalProgressBar.Default__WBP_ConquestGlobalProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConquestGlobalProgressBar_C* UWBP_ConquestGlobalProgressBar_C::GetDefaultObj()
{
	static class UWBP_ConquestGlobalProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConquestGlobalProgressBar_C*>(UWBP_ConquestGlobalProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


