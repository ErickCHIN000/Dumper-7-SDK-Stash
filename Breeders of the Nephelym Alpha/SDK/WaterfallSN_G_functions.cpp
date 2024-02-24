#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSN_G.WaterfallSN_G_C
// (None)

class UClass* UWaterfallSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSN_G_C");

	return Clss;
}


// WaterfallSN_G_C WaterfallSN_G.Default__WaterfallSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSN_G_C* UWaterfallSN_G_C::GetDefaultObj()
{
	static class UWaterfallSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSN_G_C*>(UWaterfallSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


