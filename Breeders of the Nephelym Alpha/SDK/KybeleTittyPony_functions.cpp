#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPony.KybeleTittyPony_C
// (None)

class UClass* UKybeleTittyPony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPony_C");

	return Clss;
}


// KybeleTittyPony_C KybeleTittyPony.Default__KybeleTittyPony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPony_C* UKybeleTittyPony_C::GetDefaultObj()
{
	static class UKybeleTittyPony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPony_C*>(UKybeleTittyPony_C::StaticClass()->DefaultObject);

	return Default;
}

}


