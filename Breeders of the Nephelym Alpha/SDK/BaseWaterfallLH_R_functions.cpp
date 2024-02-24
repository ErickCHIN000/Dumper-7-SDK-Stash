#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLH_R.BaseWaterfallLH_R_C
// (None)

class UClass* UBaseWaterfallLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLH_R_C");

	return Clss;
}


// BaseWaterfallLH_R_C BaseWaterfallLH_R.Default__BaseWaterfallLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLH_R_C* UBaseWaterfallLH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLH_R_C*>(UBaseWaterfallLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


