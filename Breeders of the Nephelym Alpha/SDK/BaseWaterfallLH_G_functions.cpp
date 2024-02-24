#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLH_G.BaseWaterfallLH_G_C
// (None)

class UClass* UBaseWaterfallLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLH_G_C");

	return Clss;
}


// BaseWaterfallLH_G_C BaseWaterfallLH_G.Default__BaseWaterfallLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLH_G_C* UBaseWaterfallLH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLH_G_C*>(UBaseWaterfallLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


