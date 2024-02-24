#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLM_G.LapDanceLM_G_C
// (None)

class UClass* ULapDanceLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLM_G_C");

	return Clss;
}


// LapDanceLM_G_C LapDanceLM_G.Default__LapDanceLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLM_G_C* ULapDanceLM_G_C::GetDefaultObj()
{
	static class ULapDanceLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLM_G_C*>(ULapDanceLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


