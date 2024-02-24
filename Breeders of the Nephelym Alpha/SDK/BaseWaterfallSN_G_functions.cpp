#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallSN_G.BaseWaterfallSN_G_C
// (None)

class UClass* UBaseWaterfallSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallSN_G_C");

	return Clss;
}


// BaseWaterfallSN_G_C BaseWaterfallSN_G.Default__BaseWaterfallSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallSN_G_C* UBaseWaterfallSN_G_C::GetDefaultObj()
{
	static class UBaseWaterfallSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallSN_G_C*>(UBaseWaterfallSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


