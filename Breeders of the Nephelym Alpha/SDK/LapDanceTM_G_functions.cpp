#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTM_G.LapDanceTM_G_C
// (None)

class UClass* ULapDanceTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTM_G_C");

	return Clss;
}


// LapDanceTM_G_C LapDanceTM_G.Default__LapDanceTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTM_G_C* ULapDanceTM_G_C::GetDefaultObj()
{
	static class ULapDanceTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTM_G_C*>(ULapDanceTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


