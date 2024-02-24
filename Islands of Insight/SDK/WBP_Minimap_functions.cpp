#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Minimap.WBP_Minimap_C
// (None)

class UClass* UWBP_Minimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Minimap_C");

	return Clss;
}


// WBP_Minimap_C WBP_Minimap.Default__WBP_Minimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Minimap_C* UWBP_Minimap_C::GetDefaultObj()
{
	static class UWBP_Minimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Minimap_C*>(UWBP_Minimap_C::StaticClass()->DefaultObject);

	return Default;
}

}


