#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OreDeposit.BP_OreDeposit_C
// (Actor)

class UClass* ABP_OreDeposit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OreDeposit_C");

	return Clss;
}


// BP_OreDeposit_C BP_OreDeposit.Default__BP_OreDeposit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OreDeposit_C* ABP_OreDeposit_C::GetDefaultObj()
{
	static class ABP_OreDeposit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OreDeposit_C*>(ABP_OreDeposit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OreDeposit.BP_OreDeposit_C.IsDepleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Depleted                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_OreDeposit_C::IsDepleted(bool* Depleted, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OreDeposit_C", "IsDepleted");

	Params::ABP_OreDeposit_C_IsDepleted_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Depleted != nullptr)
		*Depleted = Parms.Depleted;

}

}


