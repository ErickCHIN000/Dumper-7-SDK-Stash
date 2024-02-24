#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSH_R.BaseWaterfallSH_R_C
// (None)

class UClass* UBaseWaterfallSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSH_R_C");

	return Clss;
}


// BaseWaterfallSH_R_C BaseWaterfallSH_R.Default__BaseWaterfallSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSH_R_C* UBaseWaterfallSH_R_C::GetDefaultObj()
{
	static class UBaseWaterfallSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSH_R_C*>(UBaseWaterfallSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


