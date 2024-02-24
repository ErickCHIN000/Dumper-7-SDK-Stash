#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CustomCheckMark.WBP_CustomCheckMark_C
// (None)

class UClass* UWBP_CustomCheckMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CustomCheckMark_C");

	return Clss;
}


// WBP_CustomCheckMark_C WBP_CustomCheckMark.Default__WBP_CustomCheckMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CustomCheckMark_C* UWBP_CustomCheckMark_C::GetDefaultObj()
{
	static class UWBP_CustomCheckMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CustomCheckMark_C*>(UWBP_CustomCheckMark_C::StaticClass()->DefaultObject);

	return Default;
}

}


