#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTN_R.BaseWaterfallTN_R_C
// (None)

class UClass* UBaseWaterfallTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTN_R_C");

	return Clss;
}


// BaseWaterfallTN_R_C BaseWaterfallTN_R.Default__BaseWaterfallTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTN_R_C* UBaseWaterfallTN_R_C::GetDefaultObj()
{
	static class UBaseWaterfallTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTN_R_C*>(UBaseWaterfallTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


