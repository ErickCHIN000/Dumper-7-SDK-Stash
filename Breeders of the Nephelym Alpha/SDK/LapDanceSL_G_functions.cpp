#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSL_G.LapDanceSL_G_C
// (None)

class UClass* ULapDanceSL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSL_G_C");

	return Clss;
}


// LapDanceSL_G_C LapDanceSL_G.Default__LapDanceSL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSL_G_C* ULapDanceSL_G_C::GetDefaultObj()
{
	static class ULapDanceSL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSL_G_C*>(ULapDanceSL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


