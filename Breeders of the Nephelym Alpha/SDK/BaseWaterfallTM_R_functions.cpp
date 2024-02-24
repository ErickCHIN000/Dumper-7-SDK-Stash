#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTM_R.BaseWaterfallTM_R_C
// (None)

class UClass* UBaseWaterfallTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTM_R_C");

	return Clss;
}


// BaseWaterfallTM_R_C BaseWaterfallTM_R.Default__BaseWaterfallTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTM_R_C* UBaseWaterfallTM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTM_R_C*>(UBaseWaterfallTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


