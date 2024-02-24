#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNS_G.WaterfallNS_G_C
// (None)

class UClass* UWaterfallNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNS_G_C");

	return Clss;
}


// WaterfallNS_G_C WaterfallNS_G.Default__WaterfallNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNS_G_C* UWaterfallNS_G_C::GetDefaultObj()
{
	static class UWaterfallNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNS_G_C*>(UWaterfallNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


