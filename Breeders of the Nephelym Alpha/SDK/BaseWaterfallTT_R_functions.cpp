#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTT_R.BaseWaterfallTT_R_C
// (None)

class UClass* UBaseWaterfallTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTT_R_C");

	return Clss;
}


// BaseWaterfallTT_R_C BaseWaterfallTT_R.Default__BaseWaterfallTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTT_R_C* UBaseWaterfallTT_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTT_R_C*>(UBaseWaterfallTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


