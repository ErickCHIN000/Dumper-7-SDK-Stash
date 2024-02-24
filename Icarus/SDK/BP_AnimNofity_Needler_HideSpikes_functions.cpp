#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimNofity_Needler_HideSpikes.BP_AnimNofity_Needler_HideSpikes_C
// (None)

class UClass* UBP_AnimNofity_Needler_HideSpikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimNofity_Needler_HideSpikes_C");

	return Clss;
}


// BP_AnimNofity_Needler_HideSpikes_C BP_AnimNofity_Needler_HideSpikes.Default__BP_AnimNofity_Needler_HideSpikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimNofity_Needler_HideSpikes_C* UBP_AnimNofity_Needler_HideSpikes_C::GetDefaultObj()
{
	static class UBP_AnimNofity_Needler_HideSpikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimNofity_Needler_HideSpikes_C*>(UBP_AnimNofity_Needler_HideSpikes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimNofity_Needler_HideSpikes.BP_AnimNofity_Needler_HideSpikes_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_AnimNofity_Needler_HideSpikes_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNofity_Needler_HideSpikes_C", "Received_Notify");

	Params::UBP_AnimNofity_Needler_HideSpikes_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPC_Needler_Character = K2Node_DynamicCast_AsBP_NPC_Needler_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AnimNofity_Needler_HideSpikes.BP_AnimNofity_Needler_HideSpikes_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_AnimNofity_Needler_HideSpikes_C::GetNotifyName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNofity_Needler_HideSpikes_C", "GetNotifyName");

	Params::UBP_AnimNofity_Needler_HideSpikes_C_GetNotifyName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


