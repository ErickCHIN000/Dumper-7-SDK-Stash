#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTH_R.BaseWaterfallTH_R_C
// (None)

class UClass* UBaseWaterfallTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTH_R_C");

	return Clss;
}


// BaseWaterfallTH_R_C BaseWaterfallTH_R.Default__BaseWaterfallTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTH_R_C* UBaseWaterfallTH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTH_R_C*>(UBaseWaterfallTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


