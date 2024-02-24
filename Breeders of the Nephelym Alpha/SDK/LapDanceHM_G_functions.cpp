#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceHM_G.LapDanceHM_G_C
// (None)

class UClass* ULapDanceHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceHM_G_C");

	return Clss;
}


// LapDanceHM_G_C LapDanceHM_G.Default__LapDanceHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceHM_G_C* ULapDanceHM_G_C::GetDefaultObj()
{
	static class ULapDanceHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceHM_G_C*>(ULapDanceHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


