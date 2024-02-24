#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLH_G.LapDanceLH_G_C
// (None)

class UClass* ULapDanceLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLH_G_C");

	return Clss;
}


// LapDanceLH_G_C LapDanceLH_G.Default__LapDanceLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLH_G_C* ULapDanceLH_G_C::GetDefaultObj()
{
	static class ULapDanceLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLH_G_C*>(ULapDanceLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


