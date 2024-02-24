#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallMM_R.BaseWaterfallMM_R_C
// (None)

class UClass* UBaseWaterfallMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallMM_R_C");

	return Clss;
}


// BaseWaterfallMM_R_C BaseWaterfallMM_R.Default__BaseWaterfallMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallMM_R_C* UBaseWaterfallMM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallMM_R_C*>(UBaseWaterfallMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


