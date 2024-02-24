#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNL_G.BaseWaterfallNL_G_C
// (None)

class UClass* UBaseWaterfallNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNL_G_C");

	return Clss;
}


// BaseWaterfallNL_G_C BaseWaterfallNL_G.Default__BaseWaterfallNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNL_G_C* UBaseWaterfallNL_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNL_G_C*>(UBaseWaterfallNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


