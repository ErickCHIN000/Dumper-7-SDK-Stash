#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSM_R.BaseWaterfallSM_R_C
// (None)

class UClass* UBaseWaterfallSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSM_R_C");

	return Clss;
}


// BaseWaterfallSM_R_C BaseWaterfallSM_R.Default__BaseWaterfallSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSM_R_C* UBaseWaterfallSM_R_C::GetDefaultObj()
{
	static class UBaseWaterfallSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSM_R_C*>(UBaseWaterfallSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


