#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLL_G.BaseWaterfallLL_G_C
// (None)

class UClass* UBaseWaterfallLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLL_G_C");

	return Clss;
}


// BaseWaterfallLL_G_C BaseWaterfallLL_G.Default__BaseWaterfallLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLL_G_C* UBaseWaterfallLL_G_C::GetDefaultObj()
{
	static class UBaseWaterfallLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLL_G_C*>(UBaseWaterfallLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


