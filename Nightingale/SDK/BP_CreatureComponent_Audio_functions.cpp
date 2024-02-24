#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C
// (None)

class UClass* UBP_CreatureComponent_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureComponent_Audio_C");

	return Clss;
}


// BP_CreatureComponent_Audio_C BP_CreatureComponent_Audio.Default__BP_CreatureComponent_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CreatureComponent_Audio_C* UBP_CreatureComponent_Audio_C::GetDefaultObj()
{
	static class UBP_CreatureComponent_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CreatureComponent_Audio_C*>(UBP_CreatureComponent_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.On Creature Audio Loaded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_4                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_5                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       K2Node_MakeArray_Array                                           (ReferenceParm)

void UBP_CreatureComponent_Audio_C::On_Creature_Audio_Loaded(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_2, bool K2Node_DynamicCast_bSuccess_2, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_3, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_4, bool K2Node_DynamicCast_bSuccess_4, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_5, bool K2Node_DynamicCast_bSuccess_5, TArray<class UAkAudioEvent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "On Creature Audio Loaded");

	Params::UBP_CreatureComponent_Audio_C_On_Creature_Audio_Loaded_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_1 = K2Node_DynamicCast_AsAk_Audio_Event_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_2 = K2Node_DynamicCast_AsAk_Audio_Event_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_3 = K2Node_DynamicCast_AsAk_Audio_Event_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_4 = K2Node_DynamicCast_AsAk_Audio_Event_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_5 = K2Node_DynamicCast_AsAk_Audio_Event_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.LoadAndCacheCreatureAudio
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UAkAudioEvent>>ReactionSoftPtrs                                                 (Edit, BlueprintVisible)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::LoadAndCacheCreatureAudio(const TArray<TSoftObjectPtr<class UAkAudioEvent>>& ReactionSoftPtrs, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "LoadAndCacheCreatureAudio");

	Params::UBP_CreatureComponent_Audio_C_LoadAndCacheCreatureAudio_Params Parms{};

	Parms.ReactionSoftPtrs = ReactionSoftPtrs;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_3 = CallFunc_IsValidSoftObjectReference_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_4 = CallFunc_IsValidSoftObjectReference_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_5 = CallFunc_Array_AddUnique_ReturnValue_5;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_5 = CallFunc_IsValidSoftObjectReference_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.GetAudioAggregator
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponentAggregatorComponent*AudioAggregator                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::GetAudioAggregator(class UAudioComponentAggregatorComponent** AudioAggregator, class AActor* CallFunc_GetOwner_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "GetAudioAggregator");

	Params::UBP_CreatureComponent_Audio_C_GetAudioAggregator_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioAggregator != nullptr)
		*AudioAggregator = Parms.AudioAggregator;

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.AddFootstepComponent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_FootstepComponent_C*     CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_FootstepComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::AddFootstepComponent(bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_FootstepComponent_C* CallFunc_AddComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBP_FootstepComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "AddFootstepComponent");

	Params::UBP_CreatureComponent_Audio_C_AddFootstepComponent_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.GetDamageReactionSFX
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             HitReactStrength                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>DamageEventOut                                                   (Parm, OutParm, HasGetValueTypeHash)
// enum class EHitReactType           PredictedHitReactType                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHitReactType           CallFunc_GetHitReactTypeFromStrength_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHitReactTypeFromStrength_Strength_ImplicitCast       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::GetDamageReactionSFX(double HitReactStrength, TSoftObjectPtr<class UAkAudioEvent>* DamageEventOut, enum class EHitReactType PredictedHitReactType, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class EHitReactType CallFunc_GetHitReactTypeFromStrength_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHitReactTypeFromStrength_Strength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "GetDamageReactionSFX");

	Params::UBP_CreatureComponent_Audio_C_GetDamageReactionSFX_Params Parms{};

	Parms.HitReactStrength = HitReactStrength;
	Parms.PredictedHitReactType = PredictedHitReactType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetHitReactTypeFromStrength_ReturnValue = CallFunc_GetHitReactTypeFromStrength_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHitReactTypeFromStrength_Strength_ImplicitCast = CallFunc_GetHitReactTypeFromStrength_Strength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageEventOut != nullptr)
		*DamageEventOut = Parms.DamageEventOut;

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.DissolveAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DissolveIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*AudioAggregator                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetAudioAggregator_AudioAggregator                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Human_C*    K2Node_DynamicCast_AsBP_Creature_NPC_Human                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::DissolveAudio(bool DissolveIn, class UAudioComponentAggregatorComponent* AudioAggregator, class UAkComponent* AkComponent, bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetAudioAggregator_AudioAggregator, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Creature_NPC_Human_C* K2Node_DynamicCast_AsBP_Creature_NPC_Human, bool K2Node_DynamicCast_bSuccess, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "DissolveAudio");

	Params::UBP_CreatureComponent_Audio_C_DissolveAudio_Params Parms{};

	Parms.DissolveIn = DissolveIn;
	Parms.AudioAggregator = AudioAggregator;
	Parms.AkComponent = AkComponent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAudioAggregator_AudioAggregator = CallFunc_GetAudioAggregator_AudioAggregator;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_Human = K2Node_DynamicCast_AsBP_Creature_NPC_Human;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.Load All Footstep Assets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioPreloadSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::Load_All_Footstep_Assets(class UAudioPreloadSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "Load All Footstep Assets");

	Params::UBP_CreatureComponent_Audio_C_Load_All_Footstep_Assets_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.Cache Footsteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::Cache_Footsteps(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "Cache Footsteps");

	Params::UBP_CreatureComponent_Audio_C_Cache_Footsteps_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.SetFootstepParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TempDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepSoundType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_14                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::SetFootstepParameters(double TempDistance, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* Temp_object_Variable_3, class UAkSwitchValue* Temp_object_Variable_4, class UAkSwitchValue* Temp_object_Variable_5, class UAkSwitchValue* Temp_object_Variable_6, class UAkSwitchValue* Temp_object_Variable_7, class UAkSwitchValue* Temp_object_Variable_8, class UAkSwitchValue* Temp_object_Variable_9, class UAkSwitchValue* Temp_object_Variable_10, class UAkSwitchValue* Temp_object_Variable_11, class UAkSwitchValue* Temp_object_Variable_12, class UAkSwitchValue* Temp_object_Variable_13, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EFootstepSoundType Temp_byte_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UAkSwitchValue* Temp_object_Variable_14, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class UAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "SetFootstepParameters");

	Params::UBP_CreatureComponent_Audio_C_SetFootstepParameters_Params Parms{};

	Parms.TempDistance = TempDistance;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.CreatureDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          CreatureAkComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UScopedAkComponent*>  AllCreatureAkComponents                                          (Edit, BlueprintVisible, ContainsInstancedReference)
// class UBP_Creature_Audio_Looping_C*LoopingAudioComponent                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          HeadScopedAk                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponentForBucket_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSuspended_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Creature_Audio_Looping_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UScopedAkComponent*>  CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)

void UBP_CreatureComponent_Audio_C::CreatureDeath(class UScopedAkComponent* CreatureAkComponent, const TArray<class UScopedAkComponent*>& AllCreatureAkComponents, class UBP_Creature_Audio_Looping_C* LoopingAudioComponent, class UScopedAkComponent* HeadScopedAk, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsSuspended_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UScopedAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBP_Creature_Audio_Looping_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class UScopedAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "CreatureDeath");

	Params::UBP_CreatureComponent_Audio_C_CreatureDeath_Params Parms{};

	Parms.CreatureAkComponent = CreatureAkComponent;
	Parms.AllCreatureAkComponents = AllCreatureAkComponents;
	Parms.LoopingAudioComponent = LoopingAudioComponent;
	Parms.HeadScopedAk = HeadScopedAk;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAudioComponentForBucket_ReturnValue = CallFunc_GetAudioComponentForBucket_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsSuspended_ReturnValue = CallFunc_IsSuspended_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.CreatureEnterAlertState_Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponentAggregatorComponent*AudioAggregator                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetAudioAggregator_AudioAggregator                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::CreatureEnterAlertState_Audio(class UAudioComponentAggregatorComponent* AudioAggregator, class UScopedAkComponent* AkComponent, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetAudioAggregator_AudioAggregator, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "CreatureEnterAlertState_Audio");

	Params::UBP_CreatureComponent_Audio_C_CreatureEnterAlertState_Audio_Params Parms{};

	Parms.AudioAggregator = AudioAggregator;
	Parms.AkComponent = AkComponent;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAudioAggregator_AudioAggregator = CallFunc_GetAudioAggregator_AudioAggregator;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.CreatureTakeDamage_Audio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DamageTaken                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HitReactStrength                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          ReducedAk                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          HeadAk                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*AudioAggregator                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          AggregateHeadAk                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>LReactionSFX                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetAudioAggregator_AudioAggregator                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateModifiedStrength_ReturnValue                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_GetDamageReactionSFX_DamageEventOut                     (HasGetValueTypeHash)
// bool                               CallFunc_IsSuspended_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSuspended_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateModifiedStrength_Strength_ImplicitCast         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDamageReactionSFX_HitReactStrength_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::CreatureTakeDamage_Audio(double DamageTaken, double HitReactStrength, class UScopedAkComponent* ReducedAk, class UScopedAkComponent* HeadAk, class UAudioComponentAggregatorComponent* AudioAggregator, class UScopedAkComponent* AggregateHeadAk, TSoftObjectPtr<class UAkAudioEvent> LReactionSFX, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAudioComponentAggregatorComponent* CallFunc_GetAudioAggregator_AudioAggregator, float CallFunc_CalculateModifiedStrength_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_GetDamageReactionSFX_DamageEventOut, bool CallFunc_IsSuspended_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSuspended_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue_1, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue_2, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_CalculateModifiedStrength_Strength_ImplicitCast, double CallFunc_GetDamageReactionSFX_HitReactStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "CreatureTakeDamage_Audio");

	Params::UBP_CreatureComponent_Audio_C_CreatureTakeDamage_Audio_Params Parms{};

	Parms.DamageTaken = DamageTaken;
	Parms.HitReactStrength = HitReactStrength;
	Parms.ReducedAk = ReducedAk;
	Parms.HeadAk = HeadAk;
	Parms.AudioAggregator = AudioAggregator;
	Parms.AggregateHeadAk = AggregateHeadAk;
	Parms.LReactionSFX = LReactionSFX;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetAudioAggregator_AudioAggregator = CallFunc_GetAudioAggregator_AudioAggregator;
	Parms.CallFunc_CalculateModifiedStrength_ReturnValue = CallFunc_CalculateModifiedStrength_ReturnValue;
	Parms.CallFunc_GetDamageReactionSFX_DamageEventOut = CallFunc_GetDamageReactionSFX_DamageEventOut;
	Parms.CallFunc_IsSuspended_ReturnValue = CallFunc_IsSuspended_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsSuspended_ReturnValue_1 = CallFunc_IsSuspended_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue_1 = CallFunc_PostAkEventScoped_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_GetAudioComponent_ReturnValue_1 = CallFunc_GetAudioComponent_ReturnValue_1;
	Parms.CallFunc_GetAudioComponent_ReturnValue_2 = CallFunc_GetAudioComponent_ReturnValue_2;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CalculateModifiedStrength_Strength_ImplicitCast = CallFunc_CalculateModifiedStrength_Strength_ImplicitCast;
	Parms.CallFunc_GetDamageReactionSFX_HitReactStrength_ImplicitCast = CallFunc_GetDamageReactionSFX_HitReactStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.GetAkHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::GetAkHead(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UAkComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "GetAkHead");

	Params::UBP_CreatureComponent_Audio_C_GetAkHead_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.AlertCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::AlertCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "AlertCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.TakeDamageCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::TakeDamageCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "TakeDamageCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.SpyglassState_Wildlife_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::SpyglassState_Wildlife_Enter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "SpyglassState_Wildlife_Enter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.SpyglassState_Wildlife_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::SpyglassState_Wildlife_Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "SpyglassState_Wildlife_Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "ReceiveTick");

	Params::UBP_CreatureComponent_Audio_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.AlertSpawnCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_Audio_C::AlertSpawnCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "AlertSpawnCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_Audio.BP_CreatureComponent_Audio_C.ExecuteUbergraph_BP_CreatureComponent_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRTPCValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERTPCValueType          CallFunc_GetRTPCValue_OutputValueType                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRTPCValue_Value_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERTPCValueType          CallFunc_GetRTPCValue_OutputValueType_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRTPCValue_Value_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERTPCValueType          CallFunc_GetRTPCValue_OutputValueType_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_DynamicCast_AsNWXAICharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_Audio_C::ExecuteUbergraph_BP_CreatureComponent_Audio(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAmbienceManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetRTPCValue_Value, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetRTPCValue_Value_1, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType_1, float CallFunc_GetRTPCValue_Value_2, enum class ERTPCValueType CallFunc_GetRTPCValue_OutputValueType_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_Audio_C", "ExecuteUbergraph_BP_CreatureComponent_Audio");

	Params::UBP_CreatureComponent_Audio_C_ExecuteUbergraph_BP_CreatureComponent_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetRTPCValue_Value = CallFunc_GetRTPCValue_Value;
	Parms.CallFunc_GetRTPCValue_OutputValueType = CallFunc_GetRTPCValue_OutputValueType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRTPCValue_Value_1 = CallFunc_GetRTPCValue_Value_1;
	Parms.CallFunc_GetRTPCValue_OutputValueType_1 = CallFunc_GetRTPCValue_OutputValueType_1;
	Parms.CallFunc_GetRTPCValue_Value_2 = CallFunc_GetRTPCValue_Value_2;
	Parms.CallFunc_GetRTPCValue_OutputValueType_2 = CallFunc_GetRTPCValue_OutputValueType_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAICharacter = K2Node_DynamicCast_AsNWXAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast = CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


