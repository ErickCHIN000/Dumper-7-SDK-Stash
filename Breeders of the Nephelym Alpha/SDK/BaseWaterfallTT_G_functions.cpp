#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTT_G.BaseWaterfallTT_G_C
// (None)

class UClass* UBaseWaterfallTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTT_G_C");

	return Clss;
}


// BaseWaterfallTT_G_C BaseWaterfallTT_G.Default__BaseWaterfallTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTT_G_C* UBaseWaterfallTT_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTT_G_C*>(UBaseWaterfallTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


