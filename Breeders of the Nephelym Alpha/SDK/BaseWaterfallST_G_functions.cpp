#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallST_G.BaseWaterfallST_G_C
// (None)

class UClass* UBaseWaterfallST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallST_G_C");

	return Clss;
}


// BaseWaterfallST_G_C BaseWaterfallST_G.Default__BaseWaterfallST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallST_G_C* UBaseWaterfallST_G_C::GetDefaultObj()
{
	static class UBaseWaterfallST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallST_G_C*>(UBaseWaterfallST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


