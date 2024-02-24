#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNT_R.BaseWaterfallNT_R_C
// (None)

class UClass* UBaseWaterfallNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNT_R_C");

	return Clss;
}


// BaseWaterfallNT_R_C BaseWaterfallNT_R.Default__BaseWaterfallNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNT_R_C* UBaseWaterfallNT_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNT_R_C*>(UBaseWaterfallNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


