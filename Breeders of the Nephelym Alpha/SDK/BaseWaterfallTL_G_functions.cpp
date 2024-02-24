#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTL_G.BaseWaterfallTL_G_C
// (None)

class UClass* UBaseWaterfallTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTL_G_C");

	return Clss;
}


// BaseWaterfallTL_G_C BaseWaterfallTL_G.Default__BaseWaterfallTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTL_G_C* UBaseWaterfallTL_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTL_G_C*>(UBaseWaterfallTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


