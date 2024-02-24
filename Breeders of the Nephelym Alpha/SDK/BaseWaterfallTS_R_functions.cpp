#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTS_R.BaseWaterfallTS_R_C
// (None)

class UClass* UBaseWaterfallTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTS_R_C");

	return Clss;
}


// BaseWaterfallTS_R_C BaseWaterfallTS_R.Default__BaseWaterfallTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTS_R_C* UBaseWaterfallTS_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTS_R_C*>(UBaseWaterfallTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


