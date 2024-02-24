#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Trader3.NPC_Trader3_C
// (Actor, Pawn)

class UClass* ANPC_Trader3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Trader3_C");

	return Clss;
}


// NPC_Trader3_C NPC_Trader3.Default__NPC_Trader3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Trader3_C* ANPC_Trader3_C::GetDefaultObj()
{
	static class ANPC_Trader3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Trader3_C*>(ANPC_Trader3_C::StaticClass()->DefaultObject);

	return Default;
}

}


