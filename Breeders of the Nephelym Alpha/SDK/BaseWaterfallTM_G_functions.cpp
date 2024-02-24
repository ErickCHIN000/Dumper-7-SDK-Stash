#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTM_G.BaseWaterfallTM_G_C
// (None)

class UClass* UBaseWaterfallTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTM_G_C");

	return Clss;
}


// BaseWaterfallTM_G_C BaseWaterfallTM_G.Default__BaseWaterfallTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTM_G_C* UBaseWaterfallTM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTM_G_C*>(UBaseWaterfallTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


