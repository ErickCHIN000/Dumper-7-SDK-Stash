#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLM_R.BaseWaterfallLM_R_C
// (None)

class UClass* UBaseWaterfallLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLM_R_C");

	return Clss;
}


// BaseWaterfallLM_R_C BaseWaterfallLM_R.Default__BaseWaterfallLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLM_R_C* UBaseWaterfallLM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLM_R_C*>(UBaseWaterfallLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


