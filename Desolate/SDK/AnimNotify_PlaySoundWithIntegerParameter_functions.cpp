#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlaySoundWithIntegerParameter.AnimNotify_PlaySoundWithIntegerParameter_C
// (None)

class UClass* UAnimNotify_PlaySoundWithIntegerParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlaySoundWithIntegerParameter_C");

	return Clss;
}


// AnimNotify_PlaySoundWithIntegerParameter_C AnimNotify_PlaySoundWithIntegerParameter.Default__AnimNotify_PlaySoundWithIntegerParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlaySoundWithIntegerParameter_C* UAnimNotify_PlaySoundWithIntegerParameter_C::GetDefaultObj()
{
	static class UAnimNotify_PlaySoundWithIntegerParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlaySoundWithIntegerParameter_C*>(UAnimNotify_PlaySoundWithIntegerParameter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlaySoundWithIntegerParameter.AnimNotify_PlaySoundWithIntegerParameter_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHAICharacter*              K2Node_DynamicCast_AsSHAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotify_PlaySoundWithIntegerParameter_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ASHAICharacter* K2Node_DynamicCast_AsSHAICharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlaySoundWithIntegerParameter_C", "Received_Notify");

	Params::UAnimNotify_PlaySoundWithIntegerParameter_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHAICharacter = K2Node_DynamicCast_AsSHAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


