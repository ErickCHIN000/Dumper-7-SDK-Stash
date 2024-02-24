#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C
// (None)

class UClass* UBP_AudioFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AudioFunctionLibrary_C");

	return Clss;
}


// BP_AudioFunctionLibrary_C BP_AudioFunctionLibrary.Default__BP_AudioFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AudioFunctionLibrary_C* UBP_AudioFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_AudioFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AudioFunctionLibrary_C*>(UBP_AudioFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.ShouldHitAudioBeSuppressedByCritZone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCriticalHitAreasEnum       CallFunc_IsCriticalHit_CriticalHitType                           (HasGetValueTypeHash)
// bool                               CallFunc_IsCriticalHit_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCriticalHitAreasRowHandle  CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FCriticalHitArea            CallFunc_GetCriticalHitAreasStruct_CriticalHitAreas              (None)
// enum class EValid                  CallFunc_GetCriticalHitAreasStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCriticalHitAreaAudioData   CallFunc_GetCriticalHitAreaAudioDataStruct_CriticalHitAreaAudioData(None)
// enum class EValid                  CallFunc_GetCriticalHitAreaAudioDataStruct_Paths                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::ShouldHitAudioBeSuppressedByCritZone(struct FHitResult& Hit, class UObject* __WorldContext, bool* Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FCriticalHitAreasEnum& CallFunc_IsCriticalHit_CriticalHitType, bool CallFunc_IsCriticalHit_ReturnValue, const struct FCriticalHitAreasRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FCriticalHitArea& CallFunc_GetCriticalHitAreasStruct_CriticalHitAreas, enum class EValid CallFunc_GetCriticalHitAreasStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FCriticalHitAreaAudioData& CallFunc_GetCriticalHitAreaAudioDataStruct_CriticalHitAreaAudioData, enum class EValid CallFunc_GetCriticalHitAreaAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "ShouldHitAudioBeSuppressedByCritZone");

	Params::UBP_AudioFunctionLibrary_C_ShouldHitAudioBeSuppressedByCritZone_Params Parms{};

	Parms.Hit = Hit;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsCriticalHit_CriticalHitType = CallFunc_IsCriticalHit_CriticalHitType;
	Parms.CallFunc_IsCriticalHit_ReturnValue = CallFunc_IsCriticalHit_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetCriticalHitAreasStruct_CriticalHitAreas = CallFunc_GetCriticalHitAreasStruct_CriticalHitAreas;
	Parms.CallFunc_GetCriticalHitAreasStruct_Paths = CallFunc_GetCriticalHitAreasStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCriticalHitAreaAudioDataStruct_CriticalHitAreaAudioData = CallFunc_GetCriticalHitAreaAudioDataStruct_CriticalHitAreaAudioData;
	Parms.CallFunc_GetCriticalHitAreaAudioDataStruct_Paths = CallFunc_GetCriticalHitAreaAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.GetDamageTypeFMODParam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EIcarusDamageType       DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    FMODParamValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDamageTypeFMODParam    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioFunctionLibrary_C::GetDamageTypeFMODParam(enum class EIcarusDamageType DamageType, class UObject* __WorldContext, enum class EDamageTypeFMODParam* FMODParamValue, enum class EIcarusDamageType Temp_byte_Variable, enum class EDamageTypeFMODParam Temp_byte_Variable_1, enum class EDamageTypeFMODParam Temp_byte_Variable_2, enum class EDamageTypeFMODParam Temp_byte_Variable_3, enum class EDamageTypeFMODParam Temp_byte_Variable_4, enum class EDamageTypeFMODParam Temp_byte_Variable_5, enum class EDamageTypeFMODParam Temp_byte_Variable_6, enum class EDamageTypeFMODParam Temp_byte_Variable_7, enum class EDamageTypeFMODParam Temp_byte_Variable_8, enum class EDamageTypeFMODParam Temp_byte_Variable_9, enum class EDamageTypeFMODParam Temp_byte_Variable_10, enum class EDamageTypeFMODParam Temp_byte_Variable_11, enum class EDamageTypeFMODParam Temp_byte_Variable_12, enum class EDamageTypeFMODParam Temp_byte_Variable_13, enum class EDamageTypeFMODParam Temp_byte_Variable_14, enum class EDamageTypeFMODParam Temp_byte_Variable_15, enum class EDamageTypeFMODParam Temp_byte_Variable_16, enum class EDamageTypeFMODParam K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "GetDamageTypeFMODParam");

	Params::UBP_AudioFunctionLibrary_C_GetDamageTypeFMODParam_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (FMODParamValue != nullptr)
		*FMODParamValue = Parms.FMODParamValue;

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.IsPlayerInAudioPerspective
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAudioPlayerPerspective Perspective                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::IsPlayerInAudioPerspective(class AIcarusPlayerCharacter* Player, enum class EAudioPlayerPerspective Perspective, class UObject* __WorldContext, bool* Result, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "IsPlayerInAudioPerspective");

	Params::UBP_AudioFunctionLibrary_C_IsPlayerInAudioPerspective_Params Parms{};

	Parms.Player = Player;
	Parms.Perspective = Perspective;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetFMODAudioComponentEvent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODAudioComponent*         AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetPlayStatePlaying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::SetFMODAudioComponentEvent(class UFMODAudioComponent* AudioComponent, class UFMODEvent* Event, bool SetPlayStatePlaying, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "SetFMODAudioComponentEvent");

	Params::UBP_AudioFunctionLibrary_C_SetFMODAudioComponentEvent_Params Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.Event = Event;
	Parms.SetPlayStatePlaying = SetPlayStatePlaying;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.GetPlayerTypeFMODParam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerTypeFMODParam    PlayerTypeFMODParam                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerTypeFMODParam    Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerTypeFMODParam    Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AudioFunctionLibrary_C::GetPlayerTypeFMODParam(class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, enum class EPlayerTypeFMODParam* PlayerTypeFMODParam, enum class EPlayerTypeFMODParam Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsThirdPerson_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, enum class EPlayerTypeFMODParam Temp_wildcard_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "GetPlayerTypeFMODParam");

	Params::UBP_AudioFunctionLibrary_C_GetPlayerTypeFMODParam_Params Parms{};

	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerTypeFMODParam != nullptr)
		*PlayerTypeFMODParam = Parms.PlayerTypeFMODParam;

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.GetSurfaceFMODParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPhysicalSurface        Surface                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESurfaceFMODParam       SurfaceFMODParam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSurfacesRowHandle          CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// struct FSurfacesData               CallFunc_GetSurfacesStruct_Surfaces                              (None)
// enum class EValid                  CallFunc_GetSurfacesStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::GetSurfaceFMODParam(enum class EPhysicalSurface Surface, class UObject* __WorldContext, enum class ESurfaceFMODParam* SurfaceFMODParam, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue, const struct FSurfacesData& CallFunc_GetSurfacesStruct_Surfaces, enum class EValid CallFunc_GetSurfacesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "GetSurfaceFMODParam");

	Params::UBP_AudioFunctionLibrary_C_GetSurfaceFMODParam_Params Parms{};

	Parms.Surface = Surface;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue = CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue;
	Parms.CallFunc_GetSurfacesStruct_Surfaces = CallFunc_GetSurfacesStruct_Surfaces;
	Parms.CallFunc_GetSurfacesStruct_Paths = CallFunc_GetSurfacesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceFMODParam != nullptr)
		*SurfaceFMODParam = Parms.SurfaceFMODParam;

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetPlayerTypeParameter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          EventInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerTypeFMODParam    CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::SetPlayerTypeParameter(const struct FFMODEventInstance& EventInstance, class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, bool CallFunc_EventInstanceIsValid_ReturnValue, enum class EPlayerTypeFMODParam CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "SetPlayerTypeParameter");

	Params::UBP_AudioFunctionLibrary_C_SetPlayerTypeParameter_Params Parms{};

	Parms.EventInstance = EventInstance;
	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;
	Parms.CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam = CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C.SetPlayerTypeParameterAttached
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODAudioComponent*         AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerTypeFMODParam    CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AudioFunctionLibrary_C::SetPlayerTypeParameterAttached(class UFMODAudioComponent* AudioComponent, class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, enum class EPlayerTypeFMODParam CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AudioFunctionLibrary_C", "SetPlayerTypeParameterAttached");

	Params::UBP_AudioFunctionLibrary_C_SetPlayerTypeParameterAttached_Params Parms{};

	Parms.AudioComponent = AudioComponent;
	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam = CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


