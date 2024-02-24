#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSH_G.LapDanceSH_G_C
// (None)

class UClass* ULapDanceSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSH_G_C");

	return Clss;
}


// LapDanceSH_G_C LapDanceSH_G.Default__LapDanceSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSH_G_C* ULapDanceSH_G_C::GetDefaultObj()
{
	static class ULapDanceSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSH_G_C*>(ULapDanceSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


