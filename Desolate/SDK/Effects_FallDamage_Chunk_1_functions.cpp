#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_FallDamage_Chunk_1.Effects_FallDamage_Chunk_1_C
// (Actor)

class UClass* AEffects_FallDamage_Chunk_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_FallDamage_Chunk_1_C");

	return Clss;
}


// Effects_FallDamage_Chunk_1_C Effects_FallDamage_Chunk_1.Default__Effects_FallDamage_Chunk_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_FallDamage_Chunk_1_C* AEffects_FallDamage_Chunk_1_C::GetDefaultObj()
{
	static class AEffects_FallDamage_Chunk_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_FallDamage_Chunk_1_C*>(AEffects_FallDamage_Chunk_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


