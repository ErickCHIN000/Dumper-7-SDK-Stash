#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_JumpAttackTeleportationPoint.BlindMan_JumpAttackTeleportationPoint_C
// (Actor)

class UClass* ABlindMan_JumpAttackTeleportationPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_JumpAttackTeleportationPoint_C");

	return Clss;
}


// BlindMan_JumpAttackTeleportationPoint_C BlindMan_JumpAttackTeleportationPoint.Default__BlindMan_JumpAttackTeleportationPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_JumpAttackTeleportationPoint_C* ABlindMan_JumpAttackTeleportationPoint_C::GetDefaultObj()
{
	static class ABlindMan_JumpAttackTeleportationPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_JumpAttackTeleportationPoint_C*>(ABlindMan_JumpAttackTeleportationPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


