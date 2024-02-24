#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleDragonMatriarch.KybeleDragonMatriarch_C
// (None)

class UClass* UKybeleDragonMatriarch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleDragonMatriarch_C");

	return Clss;
}


// KybeleDragonMatriarch_C KybeleDragonMatriarch.Default__KybeleDragonMatriarch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleDragonMatriarch_C* UKybeleDragonMatriarch_C::GetDefaultObj()
{
	static class UKybeleDragonMatriarch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleDragonMatriarch_C*>(UKybeleDragonMatriarch_C::StaticClass()->DefaultObject);

	return Default;
}

}


