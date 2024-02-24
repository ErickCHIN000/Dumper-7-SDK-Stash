#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLN_G.WaterfallLN_G_C
// (None)

class UClass* UWaterfallLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLN_G_C");

	return Clss;
}


// WaterfallLN_G_C WaterfallLN_G.Default__WaterfallLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLN_G_C* UWaterfallLN_G_C::GetDefaultObj()
{
	static class UWaterfallLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLN_G_C*>(UWaterfallLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


