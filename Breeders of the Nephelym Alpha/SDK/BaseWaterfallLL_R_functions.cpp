#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLL_R.BaseWaterfallLL_R_C
// (None)

class UClass* UBaseWaterfallLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLL_R_C");

	return Clss;
}


// BaseWaterfallLL_R_C BaseWaterfallLL_R.Default__BaseWaterfallLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLL_R_C* UBaseWaterfallLL_R_C::GetDefaultObj()
{
	static class UBaseWaterfallLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLL_R_C*>(UBaseWaterfallLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


