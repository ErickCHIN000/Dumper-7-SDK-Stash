#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTN_G.LapDanceTN_G_C
// (None)

class UClass* ULapDanceTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTN_G_C");

	return Clss;
}


// LapDanceTN_G_C LapDanceTN_G.Default__LapDanceTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTN_G_C* ULapDanceTN_G_C::GetDefaultObj()
{
	static class ULapDanceTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTN_G_C*>(ULapDanceTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


