#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Trader1_2.NPC_Trader1_2_C
// (Actor, Pawn)

class UClass* ANPC_Trader1_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Trader1_2_C");

	return Clss;
}


// NPC_Trader1_2_C NPC_Trader1_2.Default__NPC_Trader1_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Trader1_2_C* ANPC_Trader1_2_C::GetDefaultObj()
{
	static class ANPC_Trader1_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Trader1_2_C*>(ANPC_Trader1_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


