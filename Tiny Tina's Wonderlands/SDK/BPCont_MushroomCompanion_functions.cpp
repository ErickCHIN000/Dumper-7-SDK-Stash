#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCont_MushroomCompanion.BPCont_MushroomCompanion_C
// (Actor)

class UClass* ABPCont_MushroomCompanion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCont_MushroomCompanion_C");

	return Clss;
}


// BPCont_MushroomCompanion_C BPCont_MushroomCompanion.Default__BPCont_MushroomCompanion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCont_MushroomCompanion_C* ABPCont_MushroomCompanion_C::GetDefaultObj()
{
	static class ABPCont_MushroomCompanion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCont_MushroomCompanion_C*>(ABPCont_MushroomCompanion_C::StaticClass()->DefaultObject);

	return Default;
}

}


