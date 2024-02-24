#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNM_G.BaseWaterfallNM_G_C
// (None)

class UClass* UBaseWaterfallNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNM_G_C");

	return Clss;
}


// BaseWaterfallNM_G_C BaseWaterfallNM_G.Default__BaseWaterfallNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNM_G_C* UBaseWaterfallNM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNM_G_C*>(UBaseWaterfallNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


