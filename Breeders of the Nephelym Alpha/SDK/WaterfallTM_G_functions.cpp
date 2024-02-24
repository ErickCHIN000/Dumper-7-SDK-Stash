#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTM_G.WaterfallTM_G_C
// (None)

class UClass* UWaterfallTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTM_G_C");

	return Clss;
}


// WaterfallTM_G_C WaterfallTM_G.Default__WaterfallTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTM_G_C* UWaterfallTM_G_C::GetDefaultObj()
{
	static class UWaterfallTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTM_G_C*>(UWaterfallTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


