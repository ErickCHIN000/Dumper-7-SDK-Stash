#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainBox.WBP_MainBox_C
// (None)

class UClass* UWBP_MainBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainBox_C");

	return Clss;
}


// WBP_MainBox_C WBP_MainBox.Default__WBP_MainBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainBox_C* UWBP_MainBox_C::GetDefaultObj()
{
	static class UWBP_MainBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainBox_C*>(UWBP_MainBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


