#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTH_G.LapDanceTH_G_C
// (None)

class UClass* ULapDanceTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTH_G_C");

	return Clss;
}


// LapDanceTH_G_C LapDanceTH_G.Default__LapDanceTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTH_G_C* ULapDanceTH_G_C::GetDefaultObj()
{
	static class ULapDanceTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTH_G_C*>(ULapDanceTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


