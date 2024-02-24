#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNH_R.BaseWaterfallNH_R_C
// (None)

class UClass* UBaseWaterfallNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNH_R_C");

	return Clss;
}


// BaseWaterfallNH_R_C BaseWaterfallNH_R.Default__BaseWaterfallNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNH_R_C* UBaseWaterfallNH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNH_R_C*>(UBaseWaterfallNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


