#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MortalShellEQSPawn.MortalShellEQSPawn_C
// (Actor, Pawn)

class UClass* AMortalShellEQSPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MortalShellEQSPawn_C");

	return Clss;
}


// MortalShellEQSPawn_C MortalShellEQSPawn.Default__MortalShellEQSPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMortalShellEQSPawn_C* AMortalShellEQSPawn_C::GetDefaultObj()
{
	static class AMortalShellEQSPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMortalShellEQSPawn_C*>(AMortalShellEQSPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


