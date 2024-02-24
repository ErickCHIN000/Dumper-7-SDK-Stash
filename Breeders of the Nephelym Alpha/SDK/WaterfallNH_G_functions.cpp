#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNH_G.WaterfallNH_G_C
// (None)

class UClass* UWaterfallNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNH_G_C");

	return Clss;
}


// WaterfallNH_G_C WaterfallNH_G.Default__WaterfallNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNH_G_C* UWaterfallNH_G_C::GetDefaultObj()
{
	static class UWaterfallNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNH_G_C*>(UWaterfallNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


