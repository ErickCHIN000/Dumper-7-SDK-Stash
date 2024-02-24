#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNT_G.WaterfallNT_G_C
// (None)

class UClass* UWaterfallNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNT_G_C");

	return Clss;
}


// WaterfallNT_G_C WaterfallNT_G.Default__WaterfallNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNT_G_C* UWaterfallNT_G_C::GetDefaultObj()
{
	static class UWaterfallNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNT_G_C*>(UWaterfallNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


