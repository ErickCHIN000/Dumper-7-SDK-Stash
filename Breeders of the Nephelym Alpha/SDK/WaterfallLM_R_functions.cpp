#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLM_R.WaterfallLM_R_C
// (None)

class UClass* UWaterfallLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLM_R_C");

	return Clss;
}


// WaterfallLM_R_C WaterfallLM_R.Default__WaterfallLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLM_R_C* UWaterfallLM_R_C::GetDefaultObj()
{
	static class UWaterfallLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLM_R_C*>(UWaterfallLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


