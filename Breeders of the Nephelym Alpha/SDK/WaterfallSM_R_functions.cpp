#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSM_R.WaterfallSM_R_C
// (None)

class UClass* UWaterfallSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSM_R_C");

	return Clss;
}


// WaterfallSM_R_C WaterfallSM_R.Default__WaterfallSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSM_R_C* UWaterfallSM_R_C::GetDefaultObj()
{
	static class UWaterfallSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSM_R_C*>(UWaterfallSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


