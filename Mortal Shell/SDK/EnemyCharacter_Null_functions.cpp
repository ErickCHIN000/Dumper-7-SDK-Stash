#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCharacter_Null.EnemyCharacter_Null_C
// (Actor, Pawn)

class UClass* AEnemyCharacter_Null_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCharacter_Null_C");

	return Clss;
}


// EnemyCharacter_Null_C EnemyCharacter_Null.Default__EnemyCharacter_Null_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnemyCharacter_Null_C* AEnemyCharacter_Null_C::GetDefaultObj()
{
	static class AEnemyCharacter_Null_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnemyCharacter_Null_C*>(AEnemyCharacter_Null_C::StaticClass()->DefaultObject);

	return Default;
}

}


