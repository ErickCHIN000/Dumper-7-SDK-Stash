#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallMH_G.BaseWaterfallMH_G_C
// (None)

class UClass* UBaseWaterfallMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallMH_G_C");

	return Clss;
}


// BaseWaterfallMH_G_C BaseWaterfallMH_G.Default__BaseWaterfallMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallMH_G_C* UBaseWaterfallMH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallMH_G_C*>(UBaseWaterfallMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


