#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHH_G.BaseWaterfallHH_G_C
// (None)

class UClass* UBaseWaterfallHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHH_G_C");

	return Clss;
}


// BaseWaterfallHH_G_C BaseWaterfallHH_G.Default__BaseWaterfallHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHH_G_C* UBaseWaterfallHH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHH_G_C*>(UBaseWaterfallHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


