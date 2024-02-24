#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallMH_R.BaseWaterfallMH_R_C
// (None)

class UClass* UBaseWaterfallMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallMH_R_C");

	return Clss;
}


// BaseWaterfallMH_R_C BaseWaterfallMH_R.Default__BaseWaterfallMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallMH_R_C* UBaseWaterfallMH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallMH_R_C*>(UBaseWaterfallMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


