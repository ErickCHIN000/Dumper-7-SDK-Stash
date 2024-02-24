#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QueenBee.QueenBee_C
// (Actor, Pawn)

class UClass* AQueenBee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QueenBee_C");

	return Clss;
}


// QueenBee_C QueenBee.Default__QueenBee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQueenBee_C* AQueenBee_C::GetDefaultObj()
{
	static class AQueenBee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQueenBee_C*>(AQueenBee_C::StaticClass()->DefaultObject);

	return Default;
}

}


