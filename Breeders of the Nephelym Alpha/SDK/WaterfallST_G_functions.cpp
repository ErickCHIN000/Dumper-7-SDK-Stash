#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallST_G.WaterfallST_G_C
// (None)

class UClass* UWaterfallST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallST_G_C");

	return Clss;
}


// WaterfallST_G_C WaterfallST_G.Default__WaterfallST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallST_G_C* UWaterfallST_G_C::GetDefaultObj()
{
	static class UWaterfallST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallST_G_C*>(UWaterfallST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


