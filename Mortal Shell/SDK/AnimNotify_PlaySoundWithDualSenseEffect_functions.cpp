#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_PlaySoundWithDualSenseEffect.AnimNotify_PlaySoundWithDualSenseEffect_C
// (None)

class UClass* UAnimNotify_PlaySoundWithDualSenseEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlaySoundWithDualSenseEffect_C");

	return Clss;
}


// AnimNotify_PlaySoundWithDualSenseEffect_C AnimNotify_PlaySoundWithDualSenseEffect.Default__AnimNotify_PlaySoundWithDualSenseEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_PlaySoundWithDualSenseEffect_C* UAnimNotify_PlaySoundWithDualSenseEffect_C::GetDefaultObj()
{
	static class UAnimNotify_PlaySoundWithDualSenseEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlaySoundWithDualSenseEffect_C*>(UAnimNotify_PlaySoundWithDualSenseEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_PlaySoundWithDualSenseEffect.AnimNotify_PlaySoundWithDualSenseEffect_C.OnSoundSpawned
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Spawned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Local_SoundBase                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Location                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_Owner                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Local_Audio                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Local_Mesh                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_ControllerAudio_C>K2Node_DynamicCast_AsBPI_Controller_Audio                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_PlaySoundWithDualSenseEffect_C::OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned, class USoundBase* Local_SoundBase, const struct FVector& Local_Location, class AActor* Local_Owner, class UAudioComponent* Local_Audio, class USkeletalMeshComponent* Local_Mesh, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio, bool K2Node_DynamicCast_bSuccess, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class USoundBase* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_PlaySoundWithDualSenseEffect_C", "OnSoundSpawned");

	Params::UAnimNotify_PlaySoundWithDualSenseEffect_C_OnSoundSpawned_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Spawned = Spawned;
	Parms.Local_SoundBase = Local_SoundBase;
	Parms.Local_Location = Local_Location;
	Parms.Local_Owner = Local_Owner;
	Parms.Local_Audio = Local_Audio;
	Parms.Local_Mesh = Local_Mesh;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Controller_Audio = K2Node_DynamicCast_AsBPI_Controller_Audio;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


