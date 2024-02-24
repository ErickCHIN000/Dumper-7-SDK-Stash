#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNN_G.WaterfallNN_G_C
// (None)

class UClass* UWaterfallNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNN_G_C");

	return Clss;
}


// WaterfallNN_G_C WaterfallNN_G.Default__WaterfallNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNN_G_C* UWaterfallNN_G_C::GetDefaultObj()
{
	static class UWaterfallNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNN_G_C*>(UWaterfallNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


