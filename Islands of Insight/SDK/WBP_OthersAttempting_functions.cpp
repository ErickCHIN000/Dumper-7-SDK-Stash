#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OthersAttempting.WBP_OthersAttempting_C
// (None)

class UClass* UWBP_OthersAttempting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OthersAttempting_C");

	return Clss;
}


// WBP_OthersAttempting_C WBP_OthersAttempting.Default__WBP_OthersAttempting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OthersAttempting_C* UWBP_OthersAttempting_C::GetDefaultObj()
{
	static class UWBP_OthersAttempting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OthersAttempting_C*>(UWBP_OthersAttempting_C::StaticClass()->DefaultObject);

	return Default;
}

}


