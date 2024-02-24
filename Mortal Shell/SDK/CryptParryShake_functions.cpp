#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CryptParryShake.CryptParryShake_C
// (None)

class UClass* UCryptParryShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CryptParryShake_C");

	return Clss;
}


// CryptParryShake_C CryptParryShake.Default__CryptParryShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCryptParryShake_C* UCryptParryShake_C::GetDefaultObj()
{
	static class UCryptParryShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCryptParryShake_C*>(UCryptParryShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


