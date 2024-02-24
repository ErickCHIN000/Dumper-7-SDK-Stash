#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTH_G.WaterfallTH_G_C
// (None)

class UClass* UWaterfallTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTH_G_C");

	return Clss;
}


// WaterfallTH_G_C WaterfallTH_G.Default__WaterfallTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTH_G_C* UWaterfallTH_G_C::GetDefaultObj()
{
	static class UWaterfallTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTH_G_C*>(UWaterfallTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


