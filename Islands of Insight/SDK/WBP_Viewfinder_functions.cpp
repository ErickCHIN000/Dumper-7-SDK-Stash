#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Viewfinder.WBP_Viewfinder_C
// (None)

class UClass* UWBP_Viewfinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Viewfinder_C");

	return Clss;
}


// WBP_Viewfinder_C WBP_Viewfinder.Default__WBP_Viewfinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Viewfinder_C* UWBP_Viewfinder_C::GetDefaultObj()
{
	static class UWBP_Viewfinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Viewfinder_C*>(UWBP_Viewfinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


