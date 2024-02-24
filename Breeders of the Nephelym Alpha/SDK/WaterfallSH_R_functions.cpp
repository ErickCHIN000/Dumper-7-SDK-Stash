#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSH_R.WaterfallSH_R_C
// (None)

class UClass* UWaterfallSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSH_R_C");

	return Clss;
}


// WaterfallSH_R_C WaterfallSH_R.Default__WaterfallSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSH_R_C* UWaterfallSH_R_C::GetDefaultObj()
{
	static class UWaterfallSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSH_R_C*>(UWaterfallSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


