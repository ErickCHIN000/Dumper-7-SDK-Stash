#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSN_G.LapDanceSN_G_C
// (None)

class UClass* ULapDanceSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSN_G_C");

	return Clss;
}


// LapDanceSN_G_C LapDanceSN_G.Default__LapDanceSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSN_G_C* ULapDanceSN_G_C::GetDefaultObj()
{
	static class ULapDanceSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSN_G_C*>(ULapDanceSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


