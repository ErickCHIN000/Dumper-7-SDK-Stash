#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SprintSimpleEnd.GA_SprintSimpleEnd_C
// (None)

class UClass* UGA_SprintSimpleEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SprintSimpleEnd_C");

	return Clss;
}


// GA_SprintSimpleEnd_C GA_SprintSimpleEnd.Default__GA_SprintSimpleEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SprintSimpleEnd_C* UGA_SprintSimpleEnd_C::GetDefaultObj()
{
	static class UGA_SprintSimpleEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SprintSimpleEnd_C*>(UGA_SprintSimpleEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SprintSimpleEnd.GA_SprintSimpleEnd_C.IsValidInDeathStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SprintSimpleEnd_C::IsValidInDeathStates(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SprintSimpleEnd_C", "IsValidInDeathStates");

	Params::UGA_SprintSimpleEnd_C_IsValidInDeathStates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function GA_SprintSimpleEnd.GA_SprintSimpleEnd_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SprintSimpleEnd_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SprintSimpleEnd_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SprintSimpleEnd.GA_SprintSimpleEnd_C.ExecuteUbergraph_GA_SprintSimpleEnd
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovementSpeedActive_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWX_CharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Emote_Component_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_SprintSimpleEnd_C::ExecuteUbergraph_GA_SprintSimpleEnd(int32 EntryPoint, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMovementSpeedActive_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UNWX_CharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class UBP_Emote_Component_C* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SprintSimpleEnd_C", "ExecuteUbergraph_GA_SprintSimpleEnd");

	Params::UGA_SprintSimpleEnd_C_ExecuteUbergraph_GA_SprintSimpleEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsMovementSpeedActive_ReturnValue = CallFunc_IsMovementSpeedActive_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


