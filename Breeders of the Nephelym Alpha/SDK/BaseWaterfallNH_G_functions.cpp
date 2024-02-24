#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNH_G.BaseWaterfallNH_G_C
// (None)

class UClass* UBaseWaterfallNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNH_G_C");

	return Clss;
}


// BaseWaterfallNH_G_C BaseWaterfallNH_G.Default__BaseWaterfallNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNH_G_C* UBaseWaterfallNH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNH_G_C*>(UBaseWaterfallNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


