#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSS_G.BaseWaterfallSS_G_C
// (None)

class UClass* UBaseWaterfallSS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSS_G_C");

	return Clss;
}


// BaseWaterfallSS_G_C BaseWaterfallSS_G.Default__BaseWaterfallSS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSS_G_C* UBaseWaterfallSS_G_C::GetDefaultObj()
{
	static class UBaseWaterfallSS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSS_G_C*>(UBaseWaterfallSS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


