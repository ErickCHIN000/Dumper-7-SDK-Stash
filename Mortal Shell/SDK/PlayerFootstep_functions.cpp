#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerFootstep.PlayerFootstep_C
// (None)

class UClass* UPlayerFootstep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerFootstep_C");

	return Clss;
}


// PlayerFootstep_C PlayerFootstep.Default__PlayerFootstep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerFootstep_C* UPlayerFootstep_C::GetDefaultObj()
{
	static class UPlayerFootstep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerFootstep_C*>(UPlayerFootstep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerFootstep.PlayerFootstep_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayFootstepAudio_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UPlayerFootstep_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PlayFootstepAudio_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerFootstep_C", "Received_Notify");

	Params::UPlayerFootstep_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayFootstepAudio_Success = CallFunc_PlayFootstepAudio_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


