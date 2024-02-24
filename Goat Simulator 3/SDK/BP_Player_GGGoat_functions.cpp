#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player_GGGoat.BP_Player_GGGoat_C
// (Actor, Pawn)

class UClass* ABP_Player_GGGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_GGGoat_C");

	return Clss;
}


// BP_Player_GGGoat_C BP_Player_GGGoat.Default__BP_Player_GGGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Player_GGGoat_C* ABP_Player_GGGoat_C::GetDefaultObj()
{
	static class ABP_Player_GGGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Player_GGGoat_C*>(ABP_Player_GGGoat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Player_GGGoat.BP_Player_GGGoat_C.TEST__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Player_GGGoat_C::TEST__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Player_GGGoat_C", "TEST__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


