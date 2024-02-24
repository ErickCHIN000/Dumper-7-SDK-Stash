#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNL_G.WaterfallNL_G_C
// (None)

class UClass* UWaterfallNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNL_G_C");

	return Clss;
}


// WaterfallNL_G_C WaterfallNL_G.Default__WaterfallNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNL_G_C* UWaterfallNL_G_C::GetDefaultObj()
{
	static class UWaterfallNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNL_G_C*>(UWaterfallNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


