#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSM_G.WaterfallSM_G_C
// (None)

class UClass* UWaterfallSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSM_G_C");

	return Clss;
}


// WaterfallSM_G_C WaterfallSM_G.Default__WaterfallSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSM_G_C* UWaterfallSM_G_C::GetDefaultObj()
{
	static class UWaterfallSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSM_G_C*>(UWaterfallSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


