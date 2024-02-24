#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallST_R.BaseWaterfallST_R_C
// (None)

class UClass* UBaseWaterfallST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallST_R_C");

	return Clss;
}


// BaseWaterfallST_R_C BaseWaterfallST_R.Default__BaseWaterfallST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallST_R_C* UBaseWaterfallST_R_C::GetDefaultObj()
{
	static class UBaseWaterfallST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallST_R_C*>(UBaseWaterfallST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


