#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAnimNotify_PlaySoundAndRegister.BPAnimNotify_PlaySoundAndRegister_C
// (None)

class UClass* UBPAnimNotify_PlaySoundAndRegister_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnimNotify_PlaySoundAndRegister_C");

	return Clss;
}


// BPAnimNotify_PlaySoundAndRegister_C BPAnimNotify_PlaySoundAndRegister.Default__BPAnimNotify_PlaySoundAndRegister_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnimNotify_PlaySoundAndRegister_C* UBPAnimNotify_PlaySoundAndRegister_C::GetDefaultObj()
{
	static class UBPAnimNotify_PlaySoundAndRegister_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnimNotify_PlaySoundAndRegister_C*>(UBPAnimNotify_PlaySoundAndRegister_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnimNotify_PlaySoundAndRegister.BPAnimNotify_PlaySoundAndRegister_C.OnSoundSpawned
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Spawned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Local_SoundBase                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_Owner                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Local_Audio                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Local_Mesh                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Location                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ControllerAudio_C>K2Node_DynamicCast_AsBPI_Controller_Audio                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_ControllerAudio_C>K2Node_DynamicCast_AsBPI_Controller_Audio_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnimNotify_PlaySoundAndRegister_C::OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned, class USoundBase* Local_SoundBase, class AActor* Local_Owner, class UAudioComponent* Local_Audio, class USkeletalMeshComponent* Local_Mesh, const struct FVector& Local_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, TScriptInterface<class IBPI_ControllerAudio_C> K2Node_DynamicCast_AsBPI_Controller_Audio_1, bool K2Node_DynamicCast_bSuccess_1, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class USoundBase* K2Node_Select_Default_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnimNotify_PlaySoundAndRegister_C", "OnSoundSpawned");

	Params::UBPAnimNotify_PlaySoundAndRegister_C_OnSoundSpawned_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Spawned = Spawned;
	Parms.Local_SoundBase = Local_SoundBase;
	Parms.Local_Owner = Local_Owner;
	Parms.Local_Audio = Local_Audio;
	Parms.Local_Mesh = Local_Mesh;
	Parms.Local_Location = Local_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Controller_Audio = K2Node_DynamicCast_AsBPI_Controller_Audio;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Controller_Audio_1 = K2Node_DynamicCast_AsBPI_Controller_Audio_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


