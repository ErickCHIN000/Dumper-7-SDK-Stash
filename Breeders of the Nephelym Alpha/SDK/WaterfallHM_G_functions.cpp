#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallHM_G.WaterfallHM_G_C
// (None)

class UClass* UWaterfallHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallHM_G_C");

	return Clss;
}


// WaterfallHM_G_C WaterfallHM_G.Default__WaterfallHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallHM_G_C* UWaterfallHM_G_C::GetDefaultObj()
{
	static class UWaterfallHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallHM_G_C*>(UWaterfallHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


