#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InputKey_AND.WBP_InputKey_AND_C
// (None)

class UClass* UWBP_InputKey_AND_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InputKey_AND_C");

	return Clss;
}


// WBP_InputKey_AND_C WBP_InputKey_AND.Default__WBP_InputKey_AND_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InputKey_AND_C* UWBP_InputKey_AND_C::GetDefaultObj()
{
	static class UWBP_InputKey_AND_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InputKey_AND_C*>(UWBP_InputKey_AND_C::StaticClass()->DefaultObject);

	return Default;
}

}


