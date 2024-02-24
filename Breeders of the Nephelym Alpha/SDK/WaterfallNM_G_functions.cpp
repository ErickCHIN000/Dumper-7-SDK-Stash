#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNM_G.WaterfallNM_G_C
// (None)

class UClass* UWaterfallNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNM_G_C");

	return Clss;
}


// WaterfallNM_G_C WaterfallNM_G.Default__WaterfallNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNM_G_C* UWaterfallNM_G_C::GetDefaultObj()
{
	static class UWaterfallNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNM_G_C*>(UWaterfallNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


