#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleTittyPonyT.KybeleTittyPonyT_C
// (None)

class UClass* UKybeleTittyPonyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleTittyPonyT_C");

	return Clss;
}


// KybeleTittyPonyT_C KybeleTittyPonyT.Default__KybeleTittyPonyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleTittyPonyT_C* UKybeleTittyPonyT_C::GetDefaultObj()
{
	static class UKybeleTittyPonyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleTittyPonyT_C*>(UKybeleTittyPonyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


