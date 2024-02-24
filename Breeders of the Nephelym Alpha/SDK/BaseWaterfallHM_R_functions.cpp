#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHM_R.BaseWaterfallHM_R_C
// (None)

class UClass* UBaseWaterfallHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHM_R_C");

	return Clss;
}


// BaseWaterfallHM_R_C BaseWaterfallHM_R.Default__BaseWaterfallHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHM_R_C* UBaseWaterfallHM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHM_R_C*>(UBaseWaterfallHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


