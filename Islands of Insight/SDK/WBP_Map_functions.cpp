#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Map.WBP_Map_C
// (None)

class UClass* UWBP_Map_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Map_C");

	return Clss;
}


// WBP_Map_C WBP_Map.Default__WBP_Map_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Map_C* UWBP_Map_C::GetDefaultObj()
{
	static class UWBP_Map_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Map_C*>(UWBP_Map_C::StaticClass()->DefaultObject);

	return Default;
}

}


