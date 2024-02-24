#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSL_R.BaseWaterfallSL_R_C
// (None)

class UClass* UBaseWaterfallSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSL_R_C");

	return Clss;
}


// BaseWaterfallSL_R_C BaseWaterfallSL_R.Default__BaseWaterfallSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSL_R_C* UBaseWaterfallSL_R_C::GetDefaultObj()
{
	static class UBaseWaterfallSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSL_R_C*>(UBaseWaterfallSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


