#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallMH_G.WaterfallMH_G_C
// (None)

class UClass* UWaterfallMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallMH_G_C");

	return Clss;
}


// WaterfallMH_G_C WaterfallMH_G.Default__WaterfallMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallMH_G_C* UWaterfallMH_G_C::GetDefaultObj()
{
	static class UWaterfallMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallMH_G_C*>(UWaterfallMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


