#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSN_R.BaseWaterfallSN_R_C
// (None)

class UClass* UBaseWaterfallSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSN_R_C");

	return Clss;
}


// BaseWaterfallSN_R_C BaseWaterfallSN_R.Default__BaseWaterfallSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSN_R_C* UBaseWaterfallSN_R_C::GetDefaultObj()
{
	static class UBaseWaterfallSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSN_R_C*>(UBaseWaterfallSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


