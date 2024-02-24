#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLM_G.BaseWaterfallLM_G_C
// (None)

class UClass* UBaseWaterfallLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLM_G_C");

	return Clss;
}


// BaseWaterfallLM_G_C BaseWaterfallLM_G.Default__BaseWaterfallLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLM_G_C* UBaseWaterfallLM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLM_G_C*>(UBaseWaterfallLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


