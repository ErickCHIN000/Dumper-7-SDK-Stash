#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_FallDamage_Chunk_2.Effects_FallDamage_Chunk_2_C
// (Actor)

class UClass* AEffects_FallDamage_Chunk_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_FallDamage_Chunk_2_C");

	return Clss;
}


// Effects_FallDamage_Chunk_2_C Effects_FallDamage_Chunk_2.Default__Effects_FallDamage_Chunk_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_FallDamage_Chunk_2_C* AEffects_FallDamage_Chunk_2_C::GetDefaultObj()
{
	static class AEffects_FallDamage_Chunk_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_FallDamage_Chunk_2_C*>(AEffects_FallDamage_Chunk_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


