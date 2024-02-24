#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPony_T.KybeleTittyPony_T_C
// (None)

class UClass* UKybeleTittyPony_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPony_T_C");

	return Clss;
}


// KybeleTittyPony_T_C KybeleTittyPony_T.Default__KybeleTittyPony_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPony_T_C* UKybeleTittyPony_T_C::GetDefaultObj()
{
	static class UKybeleTittyPony_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPony_T_C*>(UKybeleTittyPony_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


