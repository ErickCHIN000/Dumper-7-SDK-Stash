#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallSH_G.WaterfallSH_G_C
// (None)

class UClass* UWaterfallSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallSH_G_C");

	return Clss;
}


// WaterfallSH_G_C WaterfallSH_G.Default__WaterfallSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallSH_G_C* UWaterfallSH_G_C::GetDefaultObj()
{
	static class UWaterfallSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallSH_G_C*>(UWaterfallSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


