#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNL_R.WaterfallNL_R_C
// (None)

class UClass* UWaterfallNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNL_R_C");

	return Clss;
}


// WaterfallNL_R_C WaterfallNL_R.Default__WaterfallNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNL_R_C* UWaterfallNL_R_C::GetDefaultObj()
{
	static class UWaterfallNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNL_R_C*>(UWaterfallNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


