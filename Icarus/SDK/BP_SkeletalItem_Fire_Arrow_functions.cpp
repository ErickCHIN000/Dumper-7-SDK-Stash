#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C
// (Actor)

class UClass* ABP_SkeletalItem_Fire_Arrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Fire_Arrow_C");

	return Clss;
}


// BP_SkeletalItem_Fire_Arrow_C BP_SkeletalItem_Fire_Arrow.Default__BP_SkeletalItem_Fire_Arrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Fire_Arrow_C* ABP_SkeletalItem_Fire_Arrow_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Fire_Arrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Fire_Arrow_C*>(ABP_SkeletalItem_Fire_Arrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.SFX_KnockedFireMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocCurrent                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Fire_Arrow_C::SFX_KnockedFireMovement(const struct FVector& LocCurrent, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "SFX_KnockedFireMovement");

	Params::ABP_SkeletalItem_Fire_Arrow_C_SFX_KnockedFireMovement_Params Parms{};

	Parms.LocCurrent = LocCurrent;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue = CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.OnRep_PreviewType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Fire_Arrow_C::OnRep_PreviewType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "OnRep_PreviewType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.LightFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Fire_Arrow_C::LightFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "LightFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.LightFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Fire_Arrow_C::LightFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "LightFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Fire_Arrow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.InitArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Fire_Arrow_C::InitArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "InitArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Fire_Arrow_C::BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature");

	Params::ABP_SkeletalItem_Fire_Arrow_C_BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature_Params Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C.ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BallisticBehaviour_Base_C*CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPreviewActorType       Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Fire_Arrow_C::ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, enum class EValid CallFunc_GetTrait_Paths, class UBP_BallisticBehaviour_Base_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPreviewActorType Temp_wildcard_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_Lerp_ReturnValue, class UActorComponent* K2Node_ComponentBoundEvent_Component, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Fire_Arrow_C", "ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow");

	Params::ABP_SkeletalItem_Fire_Arrow_C_ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


