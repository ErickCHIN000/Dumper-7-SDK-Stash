#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnimNotify_SwimStroke.BP_AnimNotify_SwimStroke_C
// (None)

class UClass* UBP_AnimNotify_SwimStroke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnimNotify_SwimStroke_C");

	return Clss;
}


// BP_AnimNotify_SwimStroke_C BP_AnimNotify_SwimStroke.Default__BP_AnimNotify_SwimStroke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AnimNotify_SwimStroke_C* UBP_AnimNotify_SwimStroke_C::GetDefaultObj()
{
	static class UBP_AnimNotify_SwimStroke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AnimNotify_SwimStroke_C*>(UBP_AnimNotify_SwimStroke_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnimNotify_SwimStroke.BP_AnimNotify_SwimStroke_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_PlayerAudio_AnimNotify_Interface_C>K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_AnimNotify_SwimStroke_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBP_PlayerAudio_AnimNotify_Interface_C> K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnimNotify_SwimStroke_C", "Received_Notify");

	Params::UBP_AnimNotify_SwimStroke_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface = K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


