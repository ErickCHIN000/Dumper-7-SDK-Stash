#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FootstepComponent.BP_FootstepComponent_C
// (None)

class UClass* UBP_FootstepComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FootstepComponent_C");

	return Clss;
}


// BP_FootstepComponent_C BP_FootstepComponent.Default__BP_FootstepComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FootstepComponent_C* UBP_FootstepComponent_C::GetDefaultObj()
{
	static class UBP_FootstepComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FootstepComponent_C*>(UBP_FootstepComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FootstepComponent.BP_FootstepComponent_C.TryQueryFootstepAffinityTable
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                InLocomotionTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InFootstepTypeTag                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FFootstepAudioData          OutFootstepAudioData                                             (Parm, OutParm)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_FootstepAudioEventData   CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// struct FFootstepAudioData          K2Node_MakeStruct_FootstepAudioData                              (None)

bool UBP_FootstepComponent_C::TryQueryFootstepAffinityTable(struct FGameplayTag& InLocomotionTag, struct FGameplayTag& InFootstepTypeTag, struct FFootstepAudioData* OutFootstepAudioData, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_FootstepAudioEventData& CallFunc_GetTableCellData_OutData, const struct FFootstepAudioData& K2Node_MakeStruct_FootstepAudioData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FootstepComponent_C", "TryQueryFootstepAffinityTable");

	Params::UBP_FootstepComponent_C_TryQueryFootstepAffinityTable_Params Parms{};

	Parms.InLocomotionTag = InLocomotionTag;
	Parms.InFootstepTypeTag = InFootstepTypeTag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.K2Node_MakeStruct_FootstepAudioData = K2Node_MakeStruct_FootstepAudioData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFootstepAudioData != nullptr)
		*OutFootstepAudioData = std::move(Parms.OutFootstepAudioData);

	return Parms.ReturnValue;

}


// Function BP_FootstepComponent.BP_FootstepComponent_C.FootstepSpawnVFXDisplay
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      SteppingActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        FootstepSocket                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FootstepStypeTag                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                              WaterDepth                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaterHitNormal                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WaterHitLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LocomotionTag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FootstepComponent_C::FootstepSpawnVFXDisplay(class AActor* SteppingActor, class USkeletalMeshComponent* MeshComp, class FName& FootstepSocket, struct FGameplayTag& FootstepStypeTag, float WaterDepth, struct FVector& WaterHitNormal, struct FVector& WaterHitLocation, struct FGameplayTag& LocomotionTag, double CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FootstepComponent_C", "FootstepSpawnVFXDisplay");

	Params::UBP_FootstepComponent_C_FootstepSpawnVFXDisplay_Params Parms{};

	Parms.SteppingActor = SteppingActor;
	Parms.MeshComp = MeshComp;
	Parms.FootstepSocket = FootstepSocket;
	Parms.FootstepStypeTag = FootstepStypeTag;
	Parms.WaterDepth = WaterDepth;
	Parms.WaterHitNormal = WaterHitNormal;
	Parms.WaterHitLocation = WaterHitLocation;
	Parms.LocomotionTag = LocomotionTag;
	Parms.CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast = CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FootstepComponent.BP_FootstepComponent_C.SetSurfaceWetnessRTPC
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              SurfaceSwitch                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Wetness_RTPC_for_Surface_Surface_Wetness            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FootstepComponent_C::SetSurfaceWetnessRTPC(class UAkComponent* AkComponent, class UPhysicalMaterial* PhysMat, class UAkSwitchValue* SurfaceSwitch, double CallFunc_Set_Wetness_RTPC_for_Surface_Surface_Wetness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FootstepComponent_C", "SetSurfaceWetnessRTPC");

	Params::UBP_FootstepComponent_C_SetSurfaceWetnessRTPC_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.PhysMat = PhysMat;
	Parms.SurfaceSwitch = SurfaceSwitch;
	Parms.CallFunc_Set_Wetness_RTPC_for_Surface_Surface_Wetness = CallFunc_Set_Wetness_RTPC_for_Surface_Surface_Wetness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FootstepComponent.BP_FootstepComponent_C.GetAudioBucketForFoot
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// uint8                              FootType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// enum class EFootType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UComponentAudioBucket* UBP_FootstepComponent_C::GetAudioBucketForFoot(uint8 FootType, enum class EFootType Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FootstepComponent_C", "GetAudioBucketForFoot");

	Params::UBP_FootstepComponent_C_GetAudioBucketForFoot_Params Parms{};

	Parms.FootType = FootType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
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
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


