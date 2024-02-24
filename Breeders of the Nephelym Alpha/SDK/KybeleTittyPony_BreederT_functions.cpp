#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPony_BreederT.KybeleTittyPony_BreederT_C
// (None)

class UClass* UKybeleTittyPony_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPony_BreederT_C");

	return Clss;
}


// KybeleTittyPony_BreederT_C KybeleTittyPony_BreederT.Default__KybeleTittyPony_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPony_BreederT_C* UKybeleTittyPony_BreederT_C::GetDefaultObj()
{
	static class UKybeleTittyPony_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPony_BreederT_C*>(UKybeleTittyPony_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


