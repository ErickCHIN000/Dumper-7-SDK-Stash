#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Trader2.NPC_Trader2_C
// (Actor, Pawn)

class UClass* ANPC_Trader2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Trader2_C");

	return Clss;
}


// NPC_Trader2_C NPC_Trader2.Default__NPC_Trader2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Trader2_C* ANPC_Trader2_C::GetDefaultObj()
{
	static class ANPC_Trader2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Trader2_C*>(ANPC_Trader2_C::StaticClass()->DefaultObject);

	return Default;
}

}


