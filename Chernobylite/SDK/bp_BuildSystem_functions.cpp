#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_BuildSystem.bp_BuildSystem_C
// (Actor)

class UClass* Abp_BuildSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_BuildSystem_C");

	return Clss;
}


// bp_BuildSystem_C bp_BuildSystem.Default__bp_BuildSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_BuildSystem_C* Abp_BuildSystem_C::GetDefaultObj()
{
	static class Abp_BuildSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_BuildSystem_C*>(Abp_BuildSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_BuildSystem.bp_BuildSystem_C.IsTrash
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Buliding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseBuildSystemEntity*      K2Node_DynamicCast_AsBase_Build_System_Entity                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetBuildID_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildEntryInternal         CallFunc_BuildSystemGetEntityInfo_ReturnValue                    (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::IsTrash(class AActor* Buliding, bool* Result, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ABaseBuildSystemEntity* K2Node_DynamicCast_AsBase_Build_System_Entity, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBuildID_ReturnValue, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "IsTrash");

	Params::Abp_BuildSystem_C_IsTrash_Params Parms{};

	Parms.Buliding = Buliding;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_AsBase_Build_System_Entity = K2Node_DynamicCast_AsBase_Build_System_Entity;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuildID_ReturnValue = CallFunc_GetBuildID_ReturnValue;
	Parms.CallFunc_BuildSystemGetEntityInfo_ReturnValue = CallFunc_BuildSystemGetEntityInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function bp_BuildSystem.bp_BuildSystem_C.IsBuildingOnTheGround
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              ActorsToIgnore                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      Building                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresFall                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      OnTopOfBuilding                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Up_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Down_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      K2Node_DynamicCast_AsBase_Build_System_Entity                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::IsBuildingOnTheGround(TArray<class AActor*>& ActorsToIgnore, class AActor* Building, bool* RequiresFall, class ABaseBuildSystemEntity** OnTopOfBuilding, struct FVector* Location, const struct FVector& CallFunc_Vector_Up_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Vector_Down_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Greater_FloatFloat_ReturnValue, class ABaseBuildSystemEntity* K2Node_DynamicCast_AsBase_Build_System_Entity, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "IsBuildingOnTheGround");

	Params::Abp_BuildSystem_C_IsBuildingOnTheGround_Params Parms{};

	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.Building = Building;
	Parms.CallFunc_Vector_Up_ReturnValue = CallFunc_Vector_Up_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Vector_Down_ReturnValue = CallFunc_Vector_Down_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Build_System_Entity = K2Node_DynamicCast_AsBase_Build_System_Entity;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresFall != nullptr)
		*RequiresFall = Parms.RequiresFall;

	if (OnTopOfBuilding != nullptr)
		*OnTopOfBuilding = Parms.OnTopOfBuilding;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function bp_BuildSystem.bp_BuildSystem_C.GetAllBuildingsFallDownInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class AActor*, struct FBuildSystemFallInfo>Falling                                                          (Parm, OutParm)
// class ACh_Hero_00_C*               CachedPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundAtLeastOnce                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBuildSystemFallActorOnActorInfo>RemainingBuildingsOnTop                                          (Edit, BlueprintVisible)
// TMap<class AActor*, struct FBuildSystemFallInfo>FallingBuildingsOnTopOf                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<struct FBuildSystemFallActorOnActorInfo>BuildingsOnTopOf                                                 (Edit, BlueprintVisible)
// TMap<class AActor*, struct FBuildSystemFallInfo>FallingBuildings                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              TraceIgnoreActors                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildSystemFallActorOnActorInfoCallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildSystemFallInfo        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseBuildSystemEntity*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABaseBuildSystemEntity*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildSystemFallInfo        K2Node_MakeStruct_BuildSystemFallInfo                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildSystemFallInfo        K2Node_MakeStruct_BuildSystemFallInfo_1                          (None)
// bool                               CallFunc_IsBuildingOnTheGround_RequiresFall                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      CallFunc_IsBuildingOnTheGround_OnTopOfBuilding                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_IsBuildingOnTheGround_Location                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildSystemFallActorOnActorInfoK2Node_MakeStruct_BuildSystemFallActorOnActorInfo                (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTrash_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllChildActors_ChildActors                           (ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)

void Abp_BuildSystem_C::GetAllBuildingsFallDownInfo(TMap<class AActor*, struct FBuildSystemFallInfo>* Falling, class ACh_Hero_00_C* CachedPawn, bool FoundAtLeastOnce, const TArray<struct FBuildSystemFallActorOnActorInfo>& RemainingBuildingsOnTop, TMap<class AActor*, struct FBuildSystemFallInfo> FallingBuildingsOnTopOf, const TArray<struct FBuildSystemFallActorOnActorInfo>& BuildingsOnTopOf, TMap<class AActor*, struct FBuildSystemFallInfo> FallingBuildings, const TArray<class AActor*>& TraceIgnoreActors, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const struct FBuildSystemFallActorOnActorInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const struct FBuildSystemFallInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class ABaseBuildSystemEntity*>& CallFunc_GetAllActorsOfClass_OutActors, class ABaseBuildSystemEntity* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FBuildSystemFallInfo& K2Node_MakeStruct_BuildSystemFallInfo, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FBuildSystemFallInfo& K2Node_MakeStruct_BuildSystemFallInfo_1, bool CallFunc_IsBuildingOnTheGround_RequiresFall, class ABaseBuildSystemEntity* CallFunc_IsBuildingOnTheGround_OnTopOfBuilding, const struct FVector& CallFunc_IsBuildingOnTheGround_Location, const struct FBuildSystemFallActorOnActorInfo& K2Node_MakeStruct_BuildSystemFallActorOnActorInfo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsTrash_Result, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, TArray<class AActor*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "GetAllBuildingsFallDownInfo");

	Params::Abp_BuildSystem_C_GetAllBuildingsFallDownInfo_Params Parms{};

	Parms.CachedPawn = CachedPawn;
	Parms.FoundAtLeastOnce = FoundAtLeastOnce;
	Parms.RemainingBuildingsOnTop = RemainingBuildingsOnTop;
	Parms.FallingBuildingsOnTopOf = FallingBuildingsOnTopOf;
	Parms.BuildingsOnTopOf = BuildingsOnTopOf;
	Parms.FallingBuildings = FallingBuildings;
	Parms.TraceIgnoreActors = TraceIgnoreActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_BuildSystemFallInfo = K2Node_MakeStruct_BuildSystemFallInfo;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_BuildSystemFallInfo_1 = K2Node_MakeStruct_BuildSystemFallInfo_1;
	Parms.CallFunc_IsBuildingOnTheGround_RequiresFall = CallFunc_IsBuildingOnTheGround_RequiresFall;
	Parms.CallFunc_IsBuildingOnTheGround_OnTopOfBuilding = CallFunc_IsBuildingOnTheGround_OnTopOfBuilding;
	Parms.CallFunc_IsBuildingOnTheGround_Location = CallFunc_IsBuildingOnTheGround_Location;
	Parms.K2Node_MakeStruct_BuildSystemFallActorOnActorInfo = K2Node_MakeStruct_BuildSystemFallActorOnActorInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsTrash_Result = CallFunc_IsTrash_Result;
	Parms.CallFunc_GetAllChildActors_ChildActors = CallFunc_GetAllChildActors_ChildActors;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Falling != nullptr)
		*Falling = Parms.Falling;

}


// Function bp_BuildSystem.bp_BuildSystem_C.SetEnterActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::SetEnterActionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SetEnterActionEnabled");

	Params::Abp_BuildSystem_C_SetEnterActionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.SetExitActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::SetExitActionEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SetExitActionEnabled");

	Params::Abp_BuildSystem_C_SetExitActionEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.IsBuildableAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsBuildableAvailable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Abp_BuildSystem_C::IsBuildableAvailable(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetIsBuildableAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "IsBuildableAvailable");

	Params::Abp_BuildSystem_C_IsBuildableAvailable_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetIsBuildableAvailable_ReturnValue = CallFunc_GetIsBuildableAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_BuildSystem.bp_BuildSystem_C.CanBePlacedDueToQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanPlaceQuantityCheckCached_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Abp_BuildSystem_C::CanBePlacedDueToQuantity(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetCanPlaceQuantityCheckCached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "CanBePlacedDueToQuantity");

	Params::Abp_BuildSystem_C_CanBePlacedDueToQuantity_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCanPlaceQuantityCheckCached_ReturnValue = CallFunc_GetCanPlaceQuantityCheckCached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function bp_BuildSystem.bp_BuildSystem_C.GetBuildIdOnMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BuildID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentBuildID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::GetBuildIdOnMarker(class FName* BuildID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentBuildID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "GetBuildIdOnMarker");

	Params::Abp_BuildSystem_C_GetBuildIdOnMarker_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentBuildID_ReturnValue = CallFunc_GetCurrentBuildID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildID != nullptr)
		*BuildID = Parms.BuildID;

}


// Function bp_BuildSystem.bp_BuildSystem_C.CanBePlaced
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanBePlaced                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePlaced_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::CanBePlaced(bool* CanBePlaced, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CanBePlaced_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "CanBePlaced");

	Params::Abp_BuildSystem_C_CanBePlaced_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CanBePlaced_ReturnValue = CallFunc_CanBePlaced_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanBePlaced != nullptr)
		*CanBePlaced = Parms.CanBePlaced;

}


// Function bp_BuildSystem.bp_BuildSystem_C.HasEnoughResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEnough                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasEnoughResourcesCached_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::HasEnoughResources(bool* HasEnough, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetHasEnoughResourcesCached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "HasEnoughResources");

	Params::Abp_BuildSystem_C_HasEnoughResources_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetHasEnoughResourcesCached_ReturnValue = CallFunc_GetHasEnoughResourcesCached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEnough != nullptr)
		*HasEnough = Parms.HasEnough;

}


// Function bp_BuildSystem.bp_BuildSystem_C.ChangedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBuilding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::ChangedState(bool IsBuilding, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "ChangedState");

	Params::Abp_BuildSystem_C_ChangedState_Params Parms{};

	Parms.IsBuilding = IsBuilding;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.PlayerAquiredOrLostEditingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseBuildSystemEntity*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::PlayerAquiredOrLostEditingTarget(class ABaseBuildSystemEntity* Target, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "PlayerAquiredOrLostEditingTarget");

	Params::Abp_BuildSystem_C_PlayerAquiredOrLostEditingTarget_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.RotateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBuildMarker*                Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::RotateItem(class UBuildMarker* Self2, float Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "RotateItem");

	Params::Abp_BuildSystem_C_RotateItem_Params Parms{};

	Parms.Self2 = Self2;
	Parms.Yaw = Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.CreateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_BuildSystem_Main_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::CreateWidget(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_BuildSystem_Main_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "CreateWidget");

	Params::Abp_BuildSystem_C_CreateWidget_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.UpdateRotation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::UpdateRotation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "UpdateRotation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.UpdateRotation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::UpdateRotation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "UpdateRotation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputDownPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputDownPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputLeftPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputLeftPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputRightPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputRightPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputUpPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputUpPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.Start
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> StartingCatalog                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsInWorkshop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::Start(TArray<struct FDataTableRowHandle>& StartingCatalog, bool IsInWorkshop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "Start");

	Params::Abp_BuildSystem_C_Start_Params Parms{};

	Parms.StartingCatalog = StartingCatalog;
	Parms.IsInWorkshop = IsInWorkshop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.SetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 NewMesh                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::SetMesh(class UStaticMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SetMesh");

	Params::Abp_BuildSystem_C_SetMesh_Params Parms{};

	Parms.NewMesh = NewMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.SpawnEntity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::SpawnEntity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SpawnEntity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.OnMovementStateChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class ACGMovementState>InPreviousMovementState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>InNewMovementState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Abp_BuildSystem_C::OnMovementStateChanged_Event_0(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "OnMovementStateChanged_Event_0");

	Params::Abp_BuildSystem_C_OnMovementStateChanged_Event_0_Params Parms{};

	Parms.InPreviousMovementState = InPreviousMovementState;
	Parms.InNewMovementState = InNewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputFaceRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputL1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputL1Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputL1Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputR1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputR1Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputR1Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputR2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputR2Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputR2Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputR2Released
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputR2Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputR2Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputL2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputL2Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputL2Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputL2Released
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputL2Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputL2Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputDPadDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputDPadDownPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputDPadDownPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputDPadRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputDPadRightPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputDPadRightPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputDPadLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputDPadLeftPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputDPadLeftPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputDPadUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputDPadUpPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputDPadUpPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputFaceDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.SetBuildID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::SetBuildID(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SetBuildID");

	Params::Abp_BuildSystem_C_SetBuildID_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputFaceUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputFaceLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.ExitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::ExitEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "ExitEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.InputRotationMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InAxis                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::InputRotationMode(float InAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "InputRotationMode");

	Params::Abp_BuildSystem_C_InputRotationMode_Params Parms{};

	Parms.InAxis = InAxis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.On platyer left volume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::On_platyer_left_volume(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "On platyer left volume");

	Params::Abp_BuildSystem_C_On_platyer_left_volume_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "ReceiveTick");

	Params::Abp_BuildSystem_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.SpawnEntityDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::SpawnEntityDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "SpawnEntityDelayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.StopDelayedBuild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeMovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::StopDelayedBuild(bool ChangeMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "StopDelayedBuild");

	Params::Abp_BuildSystem_C_StopDelayedBuild_Params Parms{};

	Parms.ChangeMovementMode = ChangeMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.StopDelayedBuildNoSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeMovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::StopDelayedBuildNoSound(bool ChangeMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "StopDelayedBuildNoSound");

	Params::Abp_BuildSystem_C_StopDelayedBuildNoSound_Params Parms{};

	Parms.ChangeMovementMode = ChangeMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.UpdateFallingBuildings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::UpdateFallingBuildings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "UpdateFallingBuildings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.ResetFallingBuildings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::ResetFallingBuildings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "ResetFallingBuildings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.UpdateShouldUpdateFallingBuildings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::UpdateShouldUpdateFallingBuildings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "UpdateShouldUpdateFallingBuildings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.StopDelayedBuildingNoSoundNoMovementChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::StopDelayedBuildingNoSoundNoMovementChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "StopDelayedBuildingNoSoundNoMovementChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.ExecuteUbergraph_bp_BuildSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_CustomEvent_StartingCatalog                               (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_IsInWorkshop                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGNoisePerceptionPropertiesCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_CustomEvent_NewMesh                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SpawnEntity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGMovementState>K2Node_CustomEvent_InPreviousMovementState                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>K2Node_CustomEvent_InNewMovementState                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAxis                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildMarker*                CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OverlappedActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildSystemVolume*          K2Node_DynamicCast_AsBuild_System_Volume                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      CallFunc_GetBuildEntityInFront_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ChangeMovementMode_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBePlaced_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ChangeMovementMode                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class AActor*, struct FBuildSystemFallInfo>CallFunc_GetAllBuildingsFallDownInfo_Falling                     (None)
// TArray<struct FBuildSystemFallInfo>CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FBuildSystemFallInfo        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBuildingOnTheGround_RequiresFall                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      CallFunc_IsBuildingOnTheGround_OnTopOfBuilding                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_IsBuildingOnTheGround_Location                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
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
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGMovementState>Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGMovementState>K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildSystemFallInfo        K2Node_MakeStruct_BuildSystemFallInfo                            (None)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::ExecuteUbergraph_bp_BuildSystem(int32 EntryPoint, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_StartingCatalog, bool K2Node_CustomEvent_IsInWorkshop, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FCGNoisePerceptionProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UStaticMesh* K2Node_CustomEvent_NewMesh, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SpawnEntity_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_ID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, float K2Node_Event_InAxis, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable, float CallFunc_FInterpTo_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, class UBuildMarker* CallFunc_AddComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class ABuildSystemVolume* K2Node_DynamicCast_AsBuild_System_Volume, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, bool CallFunc_Greater_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, bool CallFunc_IsValid_ReturnValue_2, class ABaseBuildSystemEntity* CallFunc_GetBuildEntityInFront_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEmpty_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_ChangeMovementMode_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, bool CallFunc_IsValid_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_CanBePlaced_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25, float CallFunc_Add_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35, bool K2Node_CustomEvent_ChangeMovementMode, TMap<class AActor*, struct FBuildSystemFallInfo> CallFunc_GetAllBuildingsFallDownInfo_Falling, TArray<struct FBuildSystemFallInfo>& CallFunc_Map_Values_Values, const struct FBuildSystemFallInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, bool CallFunc_IsBuildingOnTheGround_RequiresFall, class ABaseBuildSystemEntity* CallFunc_IsBuildingOnTheGround_OnTopOfBuilding, const struct FVector& CallFunc_IsBuildingOnTheGround_Location, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_2, int32 CallFunc_PostEvent_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_2, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_3, TSubclassOf<class ACGMovementState> Temp_class_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Map_Contains_ReturnValue_1, TSubclassOf<class ACGMovementState> K2Node_Select_Default_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, const struct FBuildSystemFallInfo& K2Node_MakeStruct_BuildSystemFallInfo, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "ExecuteUbergraph_bp_BuildSystem");

	Params::Abp_BuildSystem_C_ExecuteUbergraph_bp_BuildSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StartingCatalog = K2Node_CustomEvent_StartingCatalog;
	Parms.K2Node_CustomEvent_IsInWorkshop = K2Node_CustomEvent_IsInWorkshop;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.K2Node_CustomEvent_NewMesh = K2Node_CustomEvent_NewMesh;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnEntity_ReturnValue = CallFunc_SpawnEntity_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_InPreviousMovementState = K2Node_CustomEvent_InPreviousMovementState;
	Parms.K2Node_CustomEvent_InNewMovementState = K2Node_CustomEvent_InNewMovementState;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.K2Node_Event_InAxis = K2Node_Event_InAxis;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.K2Node_CustomEvent_OverlappedActor = K2Node_CustomEvent_OverlappedActor;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_DynamicCast_AsBuild_System_Volume = K2Node_DynamicCast_AsBuild_System_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBuildEntityInFront_ReturnValue = CallFunc_GetBuildEntityInFront_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_ChangeMovementMode_1 = K2Node_CustomEvent_ChangeMovementMode_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_CanBePlaced_ReturnValue = CallFunc_CanBePlaced_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_33;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_34;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_35;
	Parms.K2Node_CustomEvent_ChangeMovementMode = K2Node_CustomEvent_ChangeMovementMode;
	Parms.CallFunc_GetAllBuildingsFallDownInfo_Falling = CallFunc_GetAllBuildingsFallDownInfo_Falling;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_IsBuildingOnTheGround_RequiresFall = CallFunc_IsBuildingOnTheGround_RequiresFall;
	Parms.CallFunc_IsBuildingOnTheGround_OnTopOfBuilding = CallFunc_IsBuildingOnTheGround_OnTopOfBuilding;
	Parms.CallFunc_IsBuildingOnTheGround_Location = CallFunc_IsBuildingOnTheGround_Location;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
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
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Map_Contains_ReturnValue_1 = CallFunc_Map_Contains_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_BuildSystemFallInfo = K2Node_MakeStruct_BuildSystemFallInfo;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_36;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.Dispatcher_ChangedState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Building                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::Dispatcher_ChangedState__DelegateSignature(bool Is_Building)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "Dispatcher_ChangedState__DelegateSignature");

	Params::Abp_BuildSystem_C_Dispatcher_ChangedState__DelegateSignature_Params Parms{};

	Parms.Is_Building = Is_Building;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.Dispatcher_PlayerAquiredOrLostEditingTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseBuildSystemEntity*      New_Target                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_BuildSystem_C::Dispatcher_PlayerAquiredOrLostEditingTarget__DelegateSignature(bool HasTarget, class ABaseBuildSystemEntity* New_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "Dispatcher_PlayerAquiredOrLostEditingTarget__DelegateSignature");

	Params::Abp_BuildSystem_C_Dispatcher_PlayerAquiredOrLostEditingTarget__DelegateSignature_Params Parms{};

	Parms.HasTarget = HasTarget;
	Parms.New_Target = New_Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_BuildSystem.bp_BuildSystem_C.Started__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::Started__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "Started__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_BuildSystem_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_BuildSystem.bp_BuildSystem_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SpawnedAnything                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_BuildSystem_C::Finished__DelegateSignature(bool SpawnedAnything)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_BuildSystem_C", "Finished__DelegateSignature");

	Params::Abp_BuildSystem_C_Finished__DelegateSignature_Params Parms{};

	Parms.SpawnedAnything = SpawnedAnything;

	UObject::ProcessEvent(Func, &Parms);

}

}


