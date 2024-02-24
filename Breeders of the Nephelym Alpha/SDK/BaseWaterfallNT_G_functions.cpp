#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNT_G.BaseWaterfallNT_G_C
// (None)

class UClass* UBaseWaterfallNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNT_G_C");

	return Clss;
}


// BaseWaterfallNT_G_C BaseWaterfallNT_G.Default__BaseWaterfallNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNT_G_C* UBaseWaterfallNT_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNT_G_C*>(UBaseWaterfallNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


