#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSL_R.WaterfallSL_R_C
// (None)

class UClass* UWaterfallSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSL_R_C");

	return Clss;
}


// WaterfallSL_R_C WaterfallSL_R.Default__WaterfallSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSL_R_C* UWaterfallSL_R_C::GetDefaultObj()
{
	static class UWaterfallSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSL_R_C*>(UWaterfallSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


