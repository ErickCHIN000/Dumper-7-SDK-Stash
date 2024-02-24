#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallST_R.WaterfallST_R_C
// (None)

class UClass* UWaterfallST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallST_R_C");

	return Clss;
}


// WaterfallST_R_C WaterfallST_R.Default__WaterfallST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallST_R_C* UWaterfallST_R_C::GetDefaultObj()
{
	static class UWaterfallST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallST_R_C*>(UWaterfallST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


