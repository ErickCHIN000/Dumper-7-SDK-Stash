#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSL_G.WaterfallSL_G_C
// (None)

class UClass* UWaterfallSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSL_G_C");

	return Clss;
}


// WaterfallSL_G_C WaterfallSL_G.Default__WaterfallSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSL_G_C* UWaterfallSL_G_C::GetDefaultObj()
{
	static class UWaterfallSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSL_G_C*>(UWaterfallSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


