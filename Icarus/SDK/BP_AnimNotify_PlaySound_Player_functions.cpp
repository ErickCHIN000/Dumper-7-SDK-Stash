#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C
// (None)

class UClass* UBP_AnimNotify_PlaySound_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimNotify_PlaySound_Player_C");

	return Clss;
}


// BP_AnimNotify_PlaySound_Player_C BP_AnimNotify_PlaySound_Player.Default__BP_AnimNotify_PlaySound_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimNotify_PlaySound_Player_C* UBP_AnimNotify_PlaySound_Player_C::GetDefaultObj()
{
	static class UBP_AnimNotify_PlaySound_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimNotify_PlaySound_Player_C*>(UBP_AnimNotify_PlaySound_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      Temp_wildcard_Variable                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetNotifyName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_AnimNotify_PlaySound_Player_C::GetNotifyName(const class FString& Temp_wildcard_Variable, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetNotifyName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotify_PlaySound_Player_C", "GetNotifyName");

	Params::UBP_AnimNotify_PlaySound_Player_C_GetNotifyName_Params Parms{};

	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNotifyName_ReturnValue = CallFunc_GetNotifyName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  CallFunc_GetFMODEvent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UFMODEvent*                  Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerInAudioPerspective_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_AnimNotify_PlaySound_Player_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AIcarusPlayerCharacter* Player, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* CallFunc_GetFMODEvent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UFMODEvent* Temp_wildcard_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlayerInAudioPerspective_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotify_PlaySound_Player_C", "Received_Notify");

	Params::UBP_AnimNotify_PlaySound_Player_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.Player = Player;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFMODEvent_ReturnValue = CallFunc_GetFMODEvent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsPlayerInAudioPerspective_Result = CallFunc_IsPlayerInAudioPerspective_Result;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


