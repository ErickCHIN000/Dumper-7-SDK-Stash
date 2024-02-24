#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNM_R.BaseWaterfallNM_R_C
// (None)

class UClass* UBaseWaterfallNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNM_R_C");

	return Clss;
}


// BaseWaterfallNM_R_C BaseWaterfallNM_R.Default__BaseWaterfallNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNM_R_C* UBaseWaterfallNM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNM_R_C*>(UBaseWaterfallNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


