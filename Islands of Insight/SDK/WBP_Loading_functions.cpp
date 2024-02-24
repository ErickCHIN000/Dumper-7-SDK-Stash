#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Loading.WBP_Loading_C
// (None)

class UClass* UWBP_Loading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Loading_C");

	return Clss;
}


// WBP_Loading_C WBP_Loading.Default__WBP_Loading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Loading_C* UWBP_Loading_C::GetDefaultObj()
{
	static class UWBP_Loading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Loading_C*>(UWBP_Loading_C::StaticClass()->DefaultObject);

	return Default;
}

}


