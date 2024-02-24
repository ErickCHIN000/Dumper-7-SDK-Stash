#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSL_G.BaseWaterfallSL_G_C
// (None)

class UClass* UBaseWaterfallSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSL_G_C");

	return Clss;
}


// BaseWaterfallSL_G_C BaseWaterfallSL_G.Default__BaseWaterfallSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSL_G_C* UBaseWaterfallSL_G_C::GetDefaultObj()
{
	static class UBaseWaterfallSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSL_G_C*>(UBaseWaterfallSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


