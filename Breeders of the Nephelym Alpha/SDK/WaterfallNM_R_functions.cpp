#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNM_R.WaterfallNM_R_C
// (None)

class UClass* UWaterfallNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNM_R_C");

	return Clss;
}


// WaterfallNM_R_C WaterfallNM_R.Default__WaterfallNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNM_R_C* UWaterfallNM_R_C::GetDefaultObj()
{
	static class UWaterfallNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNM_R_C*>(UWaterfallNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


