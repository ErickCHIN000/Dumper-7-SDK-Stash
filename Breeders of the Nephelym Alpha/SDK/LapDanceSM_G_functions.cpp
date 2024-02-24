#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSM_G.LapDanceSM_G_C
// (None)

class UClass* ULapDanceSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSM_G_C");

	return Clss;
}


// LapDanceSM_G_C LapDanceSM_G.Default__LapDanceSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSM_G_C* ULapDanceSM_G_C::GetDefaultObj()
{
	static class ULapDanceSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSM_G_C*>(ULapDanceSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


