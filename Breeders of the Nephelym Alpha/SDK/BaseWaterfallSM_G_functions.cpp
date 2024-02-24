#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSM_G.BaseWaterfallSM_G_C
// (None)

class UClass* UBaseWaterfallSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSM_G_C");

	return Clss;
}


// BaseWaterfallSM_G_C BaseWaterfallSM_G.Default__BaseWaterfallSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSM_G_C* UBaseWaterfallSM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSM_G_C*>(UBaseWaterfallSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


