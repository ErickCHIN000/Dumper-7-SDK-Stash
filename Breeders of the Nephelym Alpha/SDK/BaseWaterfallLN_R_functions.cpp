#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLN_R.BaseWaterfallLN_R_C
// (None)

class UClass* UBaseWaterfallLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLN_R_C");

	return Clss;
}


// BaseWaterfallLN_R_C BaseWaterfallLN_R.Default__BaseWaterfallLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLN_R_C* UBaseWaterfallLN_R_C::GetDefaultObj()
{
	static class UBaseWaterfallLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLN_R_C*>(UBaseWaterfallLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


