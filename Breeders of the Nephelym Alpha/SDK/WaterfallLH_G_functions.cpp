#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLH_G.WaterfallLH_G_C
// (None)

class UClass* UWaterfallLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLH_G_C");

	return Clss;
}


// WaterfallLH_G_C WaterfallLH_G.Default__WaterfallLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLH_G_C* UWaterfallLH_G_C::GetDefaultObj()
{
	static class UWaterfallLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLH_G_C*>(UWaterfallLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


