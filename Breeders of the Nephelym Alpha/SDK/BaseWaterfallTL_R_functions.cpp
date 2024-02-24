#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTL_R.BaseWaterfallTL_R_C
// (None)

class UClass* UBaseWaterfallTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTL_R_C");

	return Clss;
}


// BaseWaterfallTL_R_C BaseWaterfallTL_R.Default__BaseWaterfallTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTL_R_C* UBaseWaterfallTL_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTL_R_C*>(UBaseWaterfallTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


