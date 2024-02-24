#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTN_G.WaterfallTN_G_C
// (None)

class UClass* UWaterfallTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTN_G_C");

	return Clss;
}


// WaterfallTN_G_C WaterfallTN_G.Default__WaterfallTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTN_G_C* UWaterfallTN_G_C::GetDefaultObj()
{
	static class UWaterfallTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTN_G_C*>(UWaterfallTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


