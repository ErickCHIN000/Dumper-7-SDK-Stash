#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLM_G.WaterfallLM_G_C
// (None)

class UClass* UWaterfallLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLM_G_C");

	return Clss;
}


// WaterfallLM_G_C WaterfallLM_G.Default__WaterfallLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLM_G_C* UWaterfallLM_G_C::GetDefaultObj()
{
	static class UWaterfallLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLM_G_C*>(UWaterfallLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


