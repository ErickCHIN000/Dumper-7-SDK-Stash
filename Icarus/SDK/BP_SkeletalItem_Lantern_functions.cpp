#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C
// (Actor)

class UClass* ABP_SkeletalItem_Lantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Lantern_C");

	return Clss;
}


// BP_SkeletalItem_Lantern_C BP_SkeletalItem_Lantern.Default__BP_SkeletalItem_Lantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Lantern_C* ABP_SkeletalItem_Lantern_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Lantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Lantern_C*>(ABP_SkeletalItem_Lantern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.SetLightAudioState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Lantern_C::SetLightAudioState(bool IsLit, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "SetLightAudioState");

	Params::ABP_SkeletalItem_Lantern_C_SetLightAudioState_Params Parms{};

	Parms.IsLit = IsLit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue = CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.CanLight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanLight                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Lantern_C::CanLight(bool* CanLight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "CanLight");

	Params::ABP_SkeletalItem_Lantern_C_CanLight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanLight != nullptr)
		*CanLight = Parms.CanLight;

}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.UpdateLightSlotPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkeletalItem_Lantern_C::UpdateLightSlotPosition(const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "UpdateLightSlotPosition");

	Params::ABP_SkeletalItem_Lantern_C_UpdateLightSlotPosition_Params Parms{};

	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Lantern_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Lantern_C::Damage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "Damage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C.ExecuteUbergraph_BP_SkeletalItem_Lantern
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLit_Lit                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DealSelfDamage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Lantern_C::ExecuteUbergraph_BP_SkeletalItem_Lantern(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsLit_Lit, bool CallFunc_DealSelfDamage_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Lantern_C", "ExecuteUbergraph_BP_SkeletalItem_Lantern");

	Params::ABP_SkeletalItem_Lantern_C_ExecuteUbergraph_BP_SkeletalItem_Lantern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsLit_Lit = CallFunc_IsLit_Lit;
	Parms.CallFunc_DealSelfDamage_ReturnValue = CallFunc_DealSelfDamage_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


