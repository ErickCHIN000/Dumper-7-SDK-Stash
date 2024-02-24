#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHM_G.BaseWaterfallHM_G_C
// (None)

class UClass* UBaseWaterfallHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHM_G_C");

	return Clss;
}


// BaseWaterfallHM_G_C BaseWaterfallHM_G.Default__BaseWaterfallHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHM_G_C* UBaseWaterfallHM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHM_G_C*>(UBaseWaterfallHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


