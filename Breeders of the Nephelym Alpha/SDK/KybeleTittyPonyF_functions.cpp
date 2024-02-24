#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPonyF.KybeleTittyPonyF_C
// (None)

class UClass* UKybeleTittyPonyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPonyF_C");

	return Clss;
}


// KybeleTittyPonyF_C KybeleTittyPonyF.Default__KybeleTittyPonyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPonyF_C* UKybeleTittyPonyF_C::GetDefaultObj()
{
	static class UKybeleTittyPonyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPonyF_C*>(UKybeleTittyPonyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


