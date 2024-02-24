#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPony_BreederF.KybeleTittyPony_BreederF_C
// (None)

class UClass* UKybeleTittyPony_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPony_BreederF_C");

	return Clss;
}


// KybeleTittyPony_BreederF_C KybeleTittyPony_BreederF.Default__KybeleTittyPony_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPony_BreederF_C* UKybeleTittyPony_BreederF_C::GetDefaultObj()
{
	static class UKybeleTittyPony_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPony_BreederF_C*>(UKybeleTittyPony_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


