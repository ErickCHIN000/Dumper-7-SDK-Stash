#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNL_R.BaseWaterfallNL_R_C
// (None)

class UClass* UBaseWaterfallNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNL_R_C");

	return Clss;
}


// BaseWaterfallNL_R_C BaseWaterfallNL_R.Default__BaseWaterfallNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNL_R_C* UBaseWaterfallNL_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNL_R_C*>(UBaseWaterfallNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


