#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTL_G.WaterfallTL_G_C
// (None)

class UClass* UWaterfallTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTL_G_C");

	return Clss;
}


// WaterfallTL_G_C WaterfallTL_G.Default__WaterfallTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTL_G_C* UWaterfallTL_G_C::GetDefaultObj()
{
	static class UWaterfallTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTL_G_C*>(UWaterfallTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


