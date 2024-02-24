#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNM_G.LapDanceNM_G_C
// (None)

class UClass* ULapDanceNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNM_G_C");

	return Clss;
}


// LapDanceNM_G_C LapDanceNM_G.Default__LapDanceNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNM_G_C* ULapDanceNM_G_C::GetDefaultObj()
{
	static class ULapDanceNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNM_G_C*>(ULapDanceNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


