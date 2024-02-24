#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Oops.WBP_Oops_C
// (None)

class UClass* UWBP_Oops_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Oops_C");

	return Clss;
}


// WBP_Oops_C WBP_Oops.Default__WBP_Oops_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Oops_C* UWBP_Oops_C::GetDefaultObj()
{
	static class UWBP_Oops_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Oops_C*>(UWBP_Oops_C::StaticClass()->DefaultObject);

	return Default;
}

}


