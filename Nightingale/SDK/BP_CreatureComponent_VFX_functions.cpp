#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C
// (None)

class UClass* UBP_CreatureComponent_VFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureComponent_VFX_C");

	return Clss;
}


// BP_CreatureComponent_VFX_C BP_CreatureComponent_VFX.Default__BP_CreatureComponent_VFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CreatureComponent_VFX_C* UBP_CreatureComponent_VFX_C::GetDefaultObj()
{
	static class UBP_CreatureComponent_VFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CreatureComponent_VFX_C*>(UBP_CreatureComponent_VFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ShouldSpawnVFX
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSpawnVFX                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::ShouldSpawnVFX(bool* ShouldSpawnVFX, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ShouldSpawnVFX");

	Params::UBP_CreatureComponent_VFX_C_ShouldSpawnVFX_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue = CallFunc_ShouldSpawnVFXBasedOnFocusRank_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSpawnVFX != nullptr)
		*ShouldSpawnVFX = Parms.ShouldSpawnVFX;

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.Check Surface Impact
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ImpactTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ScaleOverride                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     SocketLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldSpawnVFX_ShouldSpawnVFX                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NiagaraImpactResponse    CallFunc_GetTableCellData_OutData                                (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterRagdolling_IsRagdolling                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAndSelectRagDollSocketData_bOutIsVfxNeeded         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAndSelectRagDollSocketData_bOutIsSurfaceTagChangeNeeded(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CheckAndSelectRagDollSocketData_OutHitResult            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FLiquidHitData>      CallFunc_CheckAndSelectRagDollSocketData_OutLiquidHits           (ReferenceParm, ContainsInstancedReference)
// float                              CallFunc_CheckAndSelectRagDollSocketData_OutScaledVelocity       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckAndSelectRagDollSocketData_OutScaleOverride        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag                     (NoDestructor, HasGetValueTypeHash)
// struct FLiquidHitData              CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag_1                   (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckAndSelectRagDollSocketData_DeltaTime_ImplicitCast  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Surface_Impact_VFX_Parameters_Velocity_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Surface_Impact_VFX_Parameters_ScaleOverride_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::Check_Surface_Impact(const struct FGameplayTag& ImpactTag, double DeltaTime, double ScaleOverride, const struct FHitResult& HitResult, const struct FVector& SocketLocation, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_ShouldSpawnVFX_ShouldSpawnVFX, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsCharacterRagdolling_IsRagdolling, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckAndSelectRagDollSocketData_bOutIsVfxNeeded, bool CallFunc_CheckAndSelectRagDollSocketData_bOutIsSurfaceTagChangeNeeded, const struct FHitResult& CallFunc_CheckAndSelectRagDollSocketData_OutHitResult, TArray<struct FLiquidHitData>& CallFunc_CheckAndSelectRagDollSocketData_OutLiquidHits, float CallFunc_CheckAndSelectRagDollSocketData_OutScaledVelocity, float CallFunc_CheckAndSelectRagDollSocketData_OutScaleOverride, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag, const struct FLiquidHitData& CallFunc_Array_Get_Item, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem_1, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_CheckAndSelectRagDollSocketData_DeltaTime_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast_1, double CallFunc_Set_Surface_Impact_VFX_Parameters_Velocity_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast_1, double CallFunc_Set_Surface_Impact_VFX_Parameters_ScaleOverride_ImplicitCast, double CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "Check Surface Impact");

	Params::UBP_CreatureComponent_VFX_C_Check_Surface_Impact_Params Parms{};

	Parms.ImpactTag = ImpactTag;
	Parms.DeltaTime = DeltaTime;
	Parms.ScaleOverride = ScaleOverride;
	Parms.HitResult = HitResult;
	Parms.SocketLocation = SocketLocation;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ShouldSpawnVFX_ShouldSpawnVFX = CallFunc_ShouldSpawnVFX_ShouldSpawnVFX;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsCharacterRagdolling_IsRagdolling = CallFunc_IsCharacterRagdolling_IsRagdolling;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_bOutIsVfxNeeded = CallFunc_CheckAndSelectRagDollSocketData_bOutIsVfxNeeded;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_bOutIsSurfaceTagChangeNeeded = CallFunc_CheckAndSelectRagDollSocketData_bOutIsSurfaceTagChangeNeeded;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_OutHitResult = CallFunc_CheckAndSelectRagDollSocketData_OutHitResult;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_OutLiquidHits = CallFunc_CheckAndSelectRagDollSocketData_OutLiquidHits;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_OutScaledVelocity = CallFunc_CheckAndSelectRagDollSocketData_OutScaledVelocity;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_OutScaleOverride = CallFunc_CheckAndSelectRagDollSocketData_OutScaleOverride;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem = CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag = CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem_1 = CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem_1;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag_1 = CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CheckAndSelectRagDollSocketData_DeltaTime_ImplicitCast = CallFunc_CheckAndSelectRagDollSocketData_DeltaTime_ImplicitCast;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast = CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast_1 = CallFunc_Spawn_Surface_Impact_VFX_Velocity_ImplicitCast_1;
	Parms.CallFunc_Set_Surface_Impact_VFX_Parameters_Velocity_ImplicitCast = CallFunc_Set_Surface_Impact_VFX_Parameters_Velocity_ImplicitCast;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast = CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast_1 = CallFunc_Spawn_Surface_Impact_VFX_ScaleOverride_ImplicitCast_1;
	Parms.CallFunc_Set_Surface_Impact_VFX_Parameters_ScaleOverride_ImplicitCast = CallFunc_Set_Surface_Impact_VFX_Parameters_ScaleOverride_ImplicitCast;
	Parms.CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast = CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::Initialize(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "Initialize");

	Params::UBP_CreatureComponent_VFX_C_Initialize_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.CreatureDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_VFX_C::CreatureDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "CreatureDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ClientCreatureComponentUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_VFX_C::ClientCreatureComponentUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ClientCreatureComponentUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_VFX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ReceiveTick");

	Params::UBP_CreatureComponent_VFX_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ReceiveEndPlay");

	Params::UBP_CreatureComponent_VFX_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureComponent_VFX.BP_CreatureComponent_VFX_C.ExecuteUbergraph_BP_CreatureComponent_VFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Check_Surface_Impact_DeltaTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_VFX_C::ExecuteUbergraph_BP_CreatureComponent_VFX(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_Check_Surface_Impact_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_VFX_C", "ExecuteUbergraph_BP_CreatureComponent_VFX");

	Params::UBP_CreatureComponent_VFX_C_ExecuteUbergraph_BP_CreatureComponent_VFX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Check_Surface_Impact_DeltaTime_ImplicitCast = CallFunc_Check_Surface_Impact_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


