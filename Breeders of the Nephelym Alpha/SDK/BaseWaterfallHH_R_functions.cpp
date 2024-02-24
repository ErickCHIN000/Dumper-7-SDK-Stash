#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHH_R.BaseWaterfallHH_R_C
// (None)

class UClass* UBaseWaterfallHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHH_R_C");

	return Clss;
}


// BaseWaterfallHH_R_C BaseWaterfallHH_R.Default__BaseWaterfallHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHH_R_C* UBaseWaterfallHH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHH_R_C*>(UBaseWaterfallHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


