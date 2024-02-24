#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTS_G.WaterfallTS_G_C
// (None)

class UClass* UWaterfallTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTS_G_C");

	return Clss;
}


// WaterfallTS_G_C WaterfallTS_G.Default__WaterfallTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTS_G_C* UWaterfallTS_G_C::GetDefaultObj()
{
	static class UWaterfallTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTS_G_C*>(UWaterfallTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


