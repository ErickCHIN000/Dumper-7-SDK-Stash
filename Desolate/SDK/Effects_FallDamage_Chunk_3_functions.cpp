#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_FallDamage_Chunk_3.Effects_FallDamage_Chunk_3_C
// (Actor)

class UClass* AEffects_FallDamage_Chunk_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_FallDamage_Chunk_3_C");

	return Clss;
}


// Effects_FallDamage_Chunk_3_C Effects_FallDamage_Chunk_3.Default__Effects_FallDamage_Chunk_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_FallDamage_Chunk_3_C* AEffects_FallDamage_Chunk_3_C::GetDefaultObj()
{
	static class AEffects_FallDamage_Chunk_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_FallDamage_Chunk_3_C*>(AEffects_FallDamage_Chunk_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


