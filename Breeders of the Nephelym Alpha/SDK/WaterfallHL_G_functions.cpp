#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallHL_G.WaterfallHL_G_C
// (None)

class UClass* UWaterfallHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallHL_G_C");

	return Clss;
}


// WaterfallHL_G_C WaterfallHL_G.Default__WaterfallHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallHL_G_C* UWaterfallHL_G_C::GetDefaultObj()
{
	static class UWaterfallHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallHL_G_C*>(UWaterfallHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


