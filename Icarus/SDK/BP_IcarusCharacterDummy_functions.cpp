#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusCharacterDummy.BP_IcarusCharacterDummy_C
// (Actor, Pawn)

class UClass* ABP_IcarusCharacterDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusCharacterDummy_C");

	return Clss;
}


// BP_IcarusCharacterDummy_C BP_IcarusCharacterDummy.Default__BP_IcarusCharacterDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusCharacterDummy_C* ABP_IcarusCharacterDummy_C::GetDefaultObj()
{
	static class ABP_IcarusCharacterDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusCharacterDummy_C*>(ABP_IcarusCharacterDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


