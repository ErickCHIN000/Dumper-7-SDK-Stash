#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSN_R.WaterfallSN_R_C
// (None)

class UClass* UWaterfallSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSN_R_C");

	return Clss;
}


// WaterfallSN_R_C WaterfallSN_R.Default__WaterfallSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSN_R_C* UWaterfallSN_R_C::GetDefaultObj()
{
	static class UWaterfallSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSN_R_C*>(UWaterfallSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


