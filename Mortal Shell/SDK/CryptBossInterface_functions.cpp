#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CryptBossInterface.CryptBossInterface_C
// (None)

class UClass* ICryptBossInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CryptBossInterface_C");

	return Clss;
}


// CryptBossInterface_C CryptBossInterface.Default__CryptBossInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICryptBossInterface_C* ICryptBossInterface_C::GetDefaultObj()
{
	static class ICryptBossInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICryptBossInterface_C*>(ICryptBossInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CryptBossInterface.CryptBossInterface_C.PlayerFrozen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICryptBossInterface_C::PlayerFrozen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CryptBossInterface_C", "PlayerFrozen");



	UObject::ProcessEvent(Func, nullptr);

}

}


