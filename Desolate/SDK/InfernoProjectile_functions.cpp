#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InfernoProjectile.InfernoProjectile_C
// (Actor)

class UClass* AInfernoProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfernoProjectile_C");

	return Clss;
}


// InfernoProjectile_C InfernoProjectile.Default__InfernoProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInfernoProjectile_C* AInfernoProjectile_C::GetDefaultObj()
{
	static class AInfernoProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInfernoProjectile_C*>(AInfernoProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


