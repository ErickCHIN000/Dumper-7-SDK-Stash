#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleCentaur.KybeleCentaur_C
// (None)

class UClass* UKybeleCentaur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleCentaur_C");

	return Clss;
}


// KybeleCentaur_C KybeleCentaur.Default__KybeleCentaur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleCentaur_C* UKybeleCentaur_C::GetDefaultObj()
{
	static class UKybeleCentaur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleCentaur_C*>(UKybeleCentaur_C::StaticClass()->DefaultObject);

	return Default;
}

}


