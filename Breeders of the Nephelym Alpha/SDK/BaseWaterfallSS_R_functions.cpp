#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSS_R.BaseWaterfallSS_R_C
// (None)

class UClass* UBaseWaterfallSS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSS_R_C");

	return Clss;
}


// BaseWaterfallSS_R_C BaseWaterfallSS_R.Default__BaseWaterfallSS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSS_R_C* UBaseWaterfallSS_R_C::GetDefaultObj()
{
	static class UBaseWaterfallSS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSS_R_C*>(UBaseWaterfallSS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


