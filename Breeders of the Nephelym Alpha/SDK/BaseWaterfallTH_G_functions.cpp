#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTH_G.BaseWaterfallTH_G_C
// (None)

class UClass* UBaseWaterfallTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTH_G_C");

	return Clss;
}


// BaseWaterfallTH_G_C BaseWaterfallTH_G.Default__BaseWaterfallTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTH_G_C* UBaseWaterfallTH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTH_G_C*>(UBaseWaterfallTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


