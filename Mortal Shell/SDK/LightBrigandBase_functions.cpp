#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase.LightBrigandBase_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_C");

	return Clss;
}


// LightBrigandBase_C LightBrigandBase.Default__LightBrigandBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_C* ALightBrigandBase_C::GetDefaultObj()
{
	static class ALightBrigandBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_C*>(ALightBrigandBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase.LightBrigandBase_C.SetupSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               Skeletal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::SetupSkeletalMesh(class USkeletalMesh* Skeletal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SetupSkeletalMesh");

	Params::ALightBrigandBase_C_SetupSkeletalMesh_Params Parms{};

	Parms.Skeletal = Skeletal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.Death_HandleStormModeMilestones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "Death_HandleStormModeMilestones");

	Params::ALightBrigandBase_C_Death_HandleStormModeMilestones_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.SetupFrozenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::SetupFrozenState(class AAdvancedEnemySpawner_C* Spawner, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SetupFrozenState");

	Params::ALightBrigandBase_C_SetupFrozenState_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.CheckForPumpkinHead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHalloweenSeasonalContentEnabled_Return                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::CheckForPumpkinHead(class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_IsHalloweenSeasonalContentEnabled_Return, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "CheckForPumpkinHead");

	Params::ALightBrigandBase_C_CheckForPumpkinHead_Params Parms{};

	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_IsHalloweenSeasonalContentEnabled_Return = CallFunc_IsHalloweenSeasonalContentEnabled_Return;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.GetOffHandComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        OffhandComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::GetOffHandComponent(class UStaticMeshComponent** OffhandComponent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "GetOffHandComponent");

	Params::ALightBrigandBase_C_GetOffHandComponent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OffhandComponent != nullptr)
		*OffhandComponent = Parms.OffhandComponent;

}


// Function LightBrigandBase.LightBrigandBase_C.SetupHelmet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBrigandHelmetMeshes    HelmetType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::SetupHelmet(enum class EBrigandHelmetMeshes HelmetType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SetupHelmet");

	Params::ALightBrigandBase_C_SetupHelmet_Params Parms{};

	Parms.HelmetType = HelmetType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.CheckPlayerInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TestingRange                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayerInRange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::CheckPlayerInRange(float TestingRange, bool* IsPlayerInRange, class APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "CheckPlayerInRange");

	Params::ALightBrigandBase_C_CheckPlayerInRange_Params Parms{};

	Parms.TestingRange = TestingRange;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerInRange != nullptr)
		*IsPlayerInRange = Parms.IsPlayerInRange;

}


// Function LightBrigandBase.LightBrigandBase_C.SecondAggroNearbyBrigands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::SecondAggroNearbyBrigands(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SecondAggroNearbyBrigands");

	Params::ALightBrigandBase_C_SecondAggroNearbyBrigands_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
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
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base = K2Node_DynamicCast_AsLight_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.AggroNearbyBrigands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::AggroNearbyBrigands(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "AggroNearbyBrigands");

	Params::ALightBrigandBase_C_AggroNearbyBrigands_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
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
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base = K2Node_DynamicCast_AsLight_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.CheckForAmbush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasAmbush_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::CheckForAmbush(bool* WasAmbush_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "CheckForAmbush");

	Params::ALightBrigandBase_C_CheckForAmbush_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WasAmbush_ != nullptr)
		*WasAmbush_ = Parms.WasAmbush_;

}


// Function LightBrigandBase.LightBrigandBase_C.RunAway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::RunAway(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "RunAway");

	Params::ALightBrigandBase_C_RunAway_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*              WeaponMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::GetWeaponMesh(class UMeshComponent** WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "GetWeaponMesh");

	Params::ALightBrigandBase_C_GetWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponMesh != nullptr)
		*WeaponMesh = Parms.WeaponMesh;

}


// Function LightBrigandBase.LightBrigandBase_C.ScareNearbyBrigands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::ScareNearbyBrigands(bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAnimMontage* K2Node_Select_Default, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ScareNearbyBrigands");

	Params::ALightBrigandBase_C_ScareNearbyBrigands_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
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
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base = K2Node_DynamicCast_AsLight_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.GetMeleeAtkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        MeleeAtkComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "GetMeleeAtkComponent");

	Params::ALightBrigandBase_C_GetMeleeAtkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MeleeAtkComponent != nullptr)
		*MeleeAtkComponent = Parms.MeleeAtkComponent;

}


// Function LightBrigandBase.LightBrigandBase_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "GetMeleeTraceEnd");

	Params::ALightBrigandBase_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function LightBrigandBase.LightBrigandBase_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "GetMeleeTraceStart");

	Params::ALightBrigandBase_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_97E646154C9BD65D8219E48B66F562C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_97E646154C9BD65D8219E48B66F562C6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_97E646154C9BD65D8219E48B66F562C6");

	Params::ALightBrigandBase_C_OnNotifyEnd_97E646154C9BD65D8219E48B66F562C6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_97E646154C9BD65D8219E48B66F562C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_97E646154C9BD65D8219E48B66F562C6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_97E646154C9BD65D8219E48B66F562C6");

	Params::ALightBrigandBase_C_OnNotifyBegin_97E646154C9BD65D8219E48B66F562C6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_97E646154C9BD65D8219E48B66F562C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_97E646154C9BD65D8219E48B66F562C6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_97E646154C9BD65D8219E48B66F562C6");

	Params::ALightBrigandBase_C_OnInterrupted_97E646154C9BD65D8219E48B66F562C6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_97E646154C9BD65D8219E48B66F562C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_97E646154C9BD65D8219E48B66F562C6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_97E646154C9BD65D8219E48B66F562C6");

	Params::ALightBrigandBase_C_OnBlendOut_97E646154C9BD65D8219E48B66F562C6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_97E646154C9BD65D8219E48B66F562C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_97E646154C9BD65D8219E48B66F562C6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_97E646154C9BD65D8219E48B66F562C6");

	Params::ALightBrigandBase_C_OnCompleted_97E646154C9BD65D8219E48B66F562C6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_33EE7757441018399A014DA155F371DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_33EE7757441018399A014DA155F371DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_33EE7757441018399A014DA155F371DF");

	Params::ALightBrigandBase_C_OnNotifyEnd_33EE7757441018399A014DA155F371DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_33EE7757441018399A014DA155F371DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_33EE7757441018399A014DA155F371DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_33EE7757441018399A014DA155F371DF");

	Params::ALightBrigandBase_C_OnNotifyBegin_33EE7757441018399A014DA155F371DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_33EE7757441018399A014DA155F371DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_33EE7757441018399A014DA155F371DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_33EE7757441018399A014DA155F371DF");

	Params::ALightBrigandBase_C_OnInterrupted_33EE7757441018399A014DA155F371DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_33EE7757441018399A014DA155F371DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_33EE7757441018399A014DA155F371DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_33EE7757441018399A014DA155F371DF");

	Params::ALightBrigandBase_C_OnBlendOut_33EE7757441018399A014DA155F371DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_33EE7757441018399A014DA155F371DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_33EE7757441018399A014DA155F371DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_33EE7757441018399A014DA155F371DF");

	Params::ALightBrigandBase_C_OnCompleted_33EE7757441018399A014DA155F371DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_4CBE500542D0DA2ECDDB28B64810A98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_4CBE500542D0DA2ECDDB28B64810A98A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_4CBE500542D0DA2ECDDB28B64810A98A");

	Params::ALightBrigandBase_C_OnNotifyEnd_4CBE500542D0DA2ECDDB28B64810A98A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_4CBE500542D0DA2ECDDB28B64810A98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_4CBE500542D0DA2ECDDB28B64810A98A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_4CBE500542D0DA2ECDDB28B64810A98A");

	Params::ALightBrigandBase_C_OnNotifyBegin_4CBE500542D0DA2ECDDB28B64810A98A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_4CBE500542D0DA2ECDDB28B64810A98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_4CBE500542D0DA2ECDDB28B64810A98A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_4CBE500542D0DA2ECDDB28B64810A98A");

	Params::ALightBrigandBase_C_OnInterrupted_4CBE500542D0DA2ECDDB28B64810A98A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_4CBE500542D0DA2ECDDB28B64810A98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_4CBE500542D0DA2ECDDB28B64810A98A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_4CBE500542D0DA2ECDDB28B64810A98A");

	Params::ALightBrigandBase_C_OnBlendOut_4CBE500542D0DA2ECDDB28B64810A98A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_4CBE500542D0DA2ECDDB28B64810A98A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_4CBE500542D0DA2ECDDB28B64810A98A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_4CBE500542D0DA2ECDDB28B64810A98A");

	Params::ALightBrigandBase_C_OnCompleted_4CBE500542D0DA2ECDDB28B64810A98A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_674C01AC464ADC90FA72C9A8942E27F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_674C01AC464ADC90FA72C9A8942E27F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_674C01AC464ADC90FA72C9A8942E27F7");

	Params::ALightBrigandBase_C_OnNotifyEnd_674C01AC464ADC90FA72C9A8942E27F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_674C01AC464ADC90FA72C9A8942E27F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_674C01AC464ADC90FA72C9A8942E27F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_674C01AC464ADC90FA72C9A8942E27F7");

	Params::ALightBrigandBase_C_OnNotifyBegin_674C01AC464ADC90FA72C9A8942E27F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_674C01AC464ADC90FA72C9A8942E27F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_674C01AC464ADC90FA72C9A8942E27F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_674C01AC464ADC90FA72C9A8942E27F7");

	Params::ALightBrigandBase_C_OnInterrupted_674C01AC464ADC90FA72C9A8942E27F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_674C01AC464ADC90FA72C9A8942E27F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_674C01AC464ADC90FA72C9A8942E27F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_674C01AC464ADC90FA72C9A8942E27F7");

	Params::ALightBrigandBase_C_OnBlendOut_674C01AC464ADC90FA72C9A8942E27F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_674C01AC464ADC90FA72C9A8942E27F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_674C01AC464ADC90FA72C9A8942E27F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_674C01AC464ADC90FA72C9A8942E27F7");

	Params::ALightBrigandBase_C_OnCompleted_674C01AC464ADC90FA72C9A8942E27F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_AABD956C4E4C54748EB7ECB9F18E210B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_AABD956C4E4C54748EB7ECB9F18E210B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_AABD956C4E4C54748EB7ECB9F18E210B");

	Params::ALightBrigandBase_C_OnNotifyEnd_AABD956C4E4C54748EB7ECB9F18E210B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_AABD956C4E4C54748EB7ECB9F18E210B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_AABD956C4E4C54748EB7ECB9F18E210B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_AABD956C4E4C54748EB7ECB9F18E210B");

	Params::ALightBrigandBase_C_OnNotifyBegin_AABD956C4E4C54748EB7ECB9F18E210B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_AABD956C4E4C54748EB7ECB9F18E210B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_AABD956C4E4C54748EB7ECB9F18E210B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_AABD956C4E4C54748EB7ECB9F18E210B");

	Params::ALightBrigandBase_C_OnInterrupted_AABD956C4E4C54748EB7ECB9F18E210B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_AABD956C4E4C54748EB7ECB9F18E210B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_AABD956C4E4C54748EB7ECB9F18E210B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_AABD956C4E4C54748EB7ECB9F18E210B");

	Params::ALightBrigandBase_C_OnBlendOut_AABD956C4E4C54748EB7ECB9F18E210B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_AABD956C4E4C54748EB7ECB9F18E210B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_AABD956C4E4C54748EB7ECB9F18E210B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_AABD956C4E4C54748EB7ECB9F18E210B");

	Params::ALightBrigandBase_C_OnCompleted_AABD956C4E4C54748EB7ECB9F18E210B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_01A47BA54D72D105A6C547B8E3B44C0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_01A47BA54D72D105A6C547B8E3B44C0B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_01A47BA54D72D105A6C547B8E3B44C0B");

	Params::ALightBrigandBase_C_OnNotifyEnd_01A47BA54D72D105A6C547B8E3B44C0B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_01A47BA54D72D105A6C547B8E3B44C0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_01A47BA54D72D105A6C547B8E3B44C0B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_01A47BA54D72D105A6C547B8E3B44C0B");

	Params::ALightBrigandBase_C_OnNotifyBegin_01A47BA54D72D105A6C547B8E3B44C0B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_01A47BA54D72D105A6C547B8E3B44C0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_01A47BA54D72D105A6C547B8E3B44C0B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_01A47BA54D72D105A6C547B8E3B44C0B");

	Params::ALightBrigandBase_C_OnInterrupted_01A47BA54D72D105A6C547B8E3B44C0B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_01A47BA54D72D105A6C547B8E3B44C0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_01A47BA54D72D105A6C547B8E3B44C0B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_01A47BA54D72D105A6C547B8E3B44C0B");

	Params::ALightBrigandBase_C_OnBlendOut_01A47BA54D72D105A6C547B8E3B44C0B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_01A47BA54D72D105A6C547B8E3B44C0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_01A47BA54D72D105A6C547B8E3B44C0B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_01A47BA54D72D105A6C547B8E3B44C0B");

	Params::ALightBrigandBase_C_OnCompleted_01A47BA54D72D105A6C547B8E3B44C0B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyEnd_D4931082400250A83BC31CB8F5536182
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyEnd_D4931082400250A83BC31CB8F5536182(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyEnd_D4931082400250A83BC31CB8F5536182");

	Params::ALightBrigandBase_C_OnNotifyEnd_D4931082400250A83BC31CB8F5536182_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnNotifyBegin_D4931082400250A83BC31CB8F5536182
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnNotifyBegin_D4931082400250A83BC31CB8F5536182(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnNotifyBegin_D4931082400250A83BC31CB8F5536182");

	Params::ALightBrigandBase_C_OnNotifyBegin_D4931082400250A83BC31CB8F5536182_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnInterrupted_D4931082400250A83BC31CB8F5536182
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnInterrupted_D4931082400250A83BC31CB8F5536182(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnInterrupted_D4931082400250A83BC31CB8F5536182");

	Params::ALightBrigandBase_C_OnInterrupted_D4931082400250A83BC31CB8F5536182_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnBlendOut_D4931082400250A83BC31CB8F5536182
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnBlendOut_D4931082400250A83BC31CB8F5536182(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnBlendOut_D4931082400250A83BC31CB8F5536182");

	Params::ALightBrigandBase_C_OnBlendOut_D4931082400250A83BC31CB8F5536182_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.OnCompleted_D4931082400250A83BC31CB8F5536182
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::OnCompleted_D4931082400250A83BC31CB8F5536182(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnCompleted_D4931082400250A83BC31CB8F5536182");

	Params::ALightBrigandBase_C_OnCompleted_D4931082400250A83BC31CB8F5536182_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "EnemyDeath");

	Params::ALightBrigandBase_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.PlayHitReactionMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PlayHitReactionMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PlayHitReactionMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.PlayAggroMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PlayAggroMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PlayAggroMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ReceiveTick");

	Params::ALightBrigandBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.CheckDistanceToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::CheckDistanceToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "CheckDistanceToPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ExecuteMidAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ExecuteMidAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ExecuteMidAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ExecuteShortAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ExecuteShortAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ExecuteShortAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ExecuteLongAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ExecuteLongAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ExecuteLongAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.SetCurrentAttackDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::SetCurrentAttackDistance(float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SetCurrentAttackDistance");

	Params::ALightBrigandBase_C_SetCurrentAttackDistance_Params Parms{};

	Parms.FloatValue = FloatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.CheckSecondAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::CheckSecondAggro(float DistanceToPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "CheckSecondAggro");

	Params::ALightBrigandBase_C_CheckSecondAggro_Params Parms{};

	Parms.DistanceToPlayer = DistanceToPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.PrintFwdAtkDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PrintFwdAtkDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PrintFwdAtkDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "InitAfterSpawn");

	Params::ALightBrigandBase_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.UpdateAggroPoseFromSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::UpdateAggroPoseFromSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "UpdateAggroPoseFromSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.AggroedByOtherBrigand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::AggroedByOtherBrigand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "AggroedByOtherBrigand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ForceSecondAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ForceSecondAggro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ForceSecondAggro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.Force Dodge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::Force_Dodge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "Force Dodge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.OnAggroDelayOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::OnAggroDelayOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "OnAggroDelayOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.TickMovementSoundLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::TickMovementSoundLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "TickMovementSoundLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.PlayRunAwayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PlayRunAwayMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PlayRunAwayMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.SetDistanceCheckTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::SetDistanceCheckTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SetDistanceCheckTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.DropGuitar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::DropGuitar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "DropGuitar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.StopPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "StopPlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.AggroAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::AggroAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "AggroAnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ThrowRat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::ThrowRat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ThrowRat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.AggroAnimInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::AggroAnimInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "AggroAnimInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ForceHeavyStaggerDamage");

	Params::ALightBrigandBase_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.DropWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::DropWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "DropWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.SwitchSkinMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsePaleSkin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::SwitchSkinMaterial(bool UsePaleSkin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "SwitchSkinMaterial");

	Params::ALightBrigandBase_C_SwitchSkinMaterial_Params Parms{};

	Parms.UsePaleSkin = UsePaleSkin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase.LightBrigandBase_C.AggroOnPlayerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PlayerToAggro                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFromLute_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "AggroOnPlayerDamage");

	Params::ALightBrigandBase_C_AggroOnPlayerDamage_Params Parms{};

	Parms.PlayerToAggro = PlayerToAggro;
	Parms.bIsFromLute_ = bIsFromLute_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.EnableFrozenRiverLightRig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::EnableFrozenRiverLightRig(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "EnableFrozenRiverLightRig");

	Params::ALightBrigandBase_C_EnableFrozenRiverLightRig_Params Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase.LightBrigandBase_C.ExecuteUbergraph_LightBrigandBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enable_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBrigandWeapons         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBrigandWeapons         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FloatValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DistanceToPlayer                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class ULight_Brigand_Melee_AnimBlueprint_C*K2Node_DynamicCast_AsLight_Brigand_Melee_Anim_Blueprint          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForAmbush_WasAmbush_                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForAmbush_WasAmbush__1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UsePaleSkin                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_PlayerToAggro                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFromLute_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// class AAdvancedEnemySpawner_StormMode_C*K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// class ALightBrigandSpawner_C*      K2Node_DynamicCast_AsLight_Brigand_Spawner                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_C::ExecuteUbergraph_LightBrigandBase(int32 EntryPoint, bool K2Node_Event_Enable_, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName Temp_name_Variable_4, int32 Temp_int_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, enum class EBrigandWeapons Temp_byte_Variable, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, class UStaticMesh* Temp_object_Variable_6, bool Temp_bool_Variable, float Temp_float_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable_7, class UAnimMontage* Temp_object_Variable_8, class UAnimMontage* Temp_object_Variable_9, class UAnimMontage* Temp_object_Variable_10, class UAnimMontage* Temp_object_Variable_11, class UAnimMontage* Temp_object_Variable_12, class UAnimMontage* Temp_object_Variable_13, class UAnimMontage* Temp_object_Variable_14, enum class EBrigandWeapons Temp_byte_Variable_1, class UStaticMesh* Temp_object_Variable_15, class UStaticMesh* Temp_object_Variable_16, class UStaticMesh* Temp_object_Variable_17, class UStaticMesh* Temp_object_Variable_18, class AController* CallFunc_GetController_ReturnValue, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_32, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_4, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_2, float K2Node_CustomEvent_FloatValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, float K2Node_CustomEvent_DistanceToPlayer, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, class FName K2Node_CustomEvent_NotifyName_33, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class ULight_Brigand_Melee_AnimBlueprint_C* K2Node_DynamicCast_AsLight_Brigand_Melee_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_24, bool CallFunc_CheckForAmbush_WasAmbush_, bool CallFunc_CheckForAmbush_WasAmbush__1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, float CallFunc_PlayAnimMontage_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_11, class FName CallFunc_MakeLiteralName_ReturnValue_3, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_VSize_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_34, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, const struct FVector& K2Node_Event_DirectionToSource, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class UAnimMontage* K2Node_Select_Default, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_13, float K2Node_Select_Default_1, class FName Temp_name_Variable_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, bool K2Node_CustomEvent_UsePaleSkin, class FName K2Node_CustomEvent_NotifyName_25, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UAnimMontage* K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue, class AActor* K2Node_Event_PlayerToAggro, bool K2Node_Event_bIsFromLute_, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class AAdvancedEnemySpawner_StormMode_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode, bool K2Node_DynamicCast_bSuccess_2, class FName K2Node_CustomEvent_NotifyName_27, class UStaticMesh* K2Node_Select_Default_3, class FName K2Node_CustomEvent_NotifyName_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class FName K2Node_CustomEvent_NotifyName_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, bool CallFunc_SetStaticMesh_ReturnValue, class FName Temp_name_Variable_6, class FName K2Node_CustomEvent_NotifyName_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class ALightBrigandSpawner_C* K2Node_DynamicCast_AsLight_Brigand_Spawner, bool K2Node_DynamicCast_bSuccess_3, class UStaticMesh* K2Node_Select_Default_4, bool CallFunc_SetStaticMesh_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_31, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_C", "ExecuteUbergraph_LightBrigandBase");

	Params::ALightBrigandBase_C_ExecuteUbergraph_LightBrigandBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Enable_ = K2Node_Event_Enable_;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_32 = K2Node_CustomEvent_NotifyName_32;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.K2Node_CustomEvent_FloatValue = K2Node_CustomEvent_FloatValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_CustomEvent_DistanceToPlayer = K2Node_CustomEvent_DistanceToPlayer;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_33 = K2Node_CustomEvent_NotifyName_33;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Melee_Anim_Blueprint = K2Node_DynamicCast_AsLight_Brigand_Melee_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.CallFunc_CheckForAmbush_WasAmbush_ = CallFunc_CheckForAmbush_WasAmbush_;
	Parms.CallFunc_CheckForAmbush_WasAmbush__1 = CallFunc_CheckForAmbush_WasAmbush__1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue_5 = CallFunc_GetController_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetBlackboard_ReturnValue_3 = CallFunc_GetBlackboard_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_2 = CallFunc_VSize_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_34 = K2Node_CustomEvent_NotifyName_34;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_3 = CallFunc_RandomIntegerInRange_ReturnValue_3;
	Parms.K2Node_CustomEvent_UsePaleSkin = K2Node_CustomEvent_UsePaleSkin;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue = CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue;
	Parms.K2Node_Event_PlayerToAggro = K2Node_Event_PlayerToAggro;
	Parms.K2Node_Event_bIsFromLute_ = K2Node_Event_bIsFromLute_;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_CustomEvent_NotifyName_30 = K2Node_CustomEvent_NotifyName_30;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_DynamicCast_AsLight_Brigand_Spawner = K2Node_DynamicCast_AsLight_Brigand_Spawner;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_31 = K2Node_CustomEvent_NotifyName_31;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


