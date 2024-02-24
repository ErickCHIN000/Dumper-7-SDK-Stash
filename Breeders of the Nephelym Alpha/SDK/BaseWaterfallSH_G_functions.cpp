#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSH_G.BaseWaterfallSH_G_C
// (None)

class UClass* UBaseWaterfallSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSH_G_C");

	return Clss;
}


// BaseWaterfallSH_G_C BaseWaterfallSH_G.Default__BaseWaterfallSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSH_G_C* UBaseWaterfallSH_G_C::GetDefaultObj()
{
	static class UBaseWaterfallSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSH_G_C*>(UBaseWaterfallSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


