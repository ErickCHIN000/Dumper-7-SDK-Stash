#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewEnemySpawner.NewEnemySpawner_C
// (Actor)

class UClass* ANewEnemySpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewEnemySpawner_C");

	return Clss;
}


// NewEnemySpawner_C NewEnemySpawner.Default__NewEnemySpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewEnemySpawner_C* ANewEnemySpawner_C::GetDefaultObj()
{
	static class ANewEnemySpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewEnemySpawner_C*>(ANewEnemySpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewEnemySpawner.NewEnemySpawner_C.SpawnEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsPawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_SpawnAIFromClass_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class APawn* ANewEnemySpawner_C::SpawnEnemy(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPawn, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APawn* CallFunc_SpawnAIFromClass_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "SpawnEnemy");

	Params::ANewEnemySpawner_C_SpawnEnemy_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPawn = K2Node_ClassDynamicCast_AsPawn;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_SpawnAIFromClass_ReturnValue = CallFunc_SpawnAIFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NewEnemySpawner.NewEnemySpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANewEnemySpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewEnemySpawner.NewEnemySpawner_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANewEnemySpawner_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ANewEnemySpawner_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewEnemySpawner.NewEnemySpawner_C.ClientUpdateEnemyMat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewEnemySpawner_C::ClientUpdateEnemyMat(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "ClientUpdateEnemyMat");

	Params::ANewEnemySpawner_C_ClientUpdateEnemyMat_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewEnemySpawner.NewEnemySpawner_C.ExecuteUbergraph_NewEnemySpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_SpawnEnemy_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_SpawnEnemy_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewEnemySpawner_C::ExecuteUbergraph_NewEnemySpawner(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_HasAuthority_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Clamp_ReturnValue, class APawn* K2Node_CustomEvent_Pawn, int32 K2Node_Select_Default, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_SpawnEnemy_ReturnValue, class APawn* CallFunc_SpawnEnemy_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "ExecuteUbergraph_NewEnemySpawner");

	Params::ANewEnemySpawner_C_ExecuteUbergraph_NewEnemySpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_SpawnEnemy_ReturnValue = CallFunc_SpawnEnemy_ReturnValue;
	Parms.CallFunc_SpawnEnemy_ReturnValue_1 = CallFunc_SpawnEnemy_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewEnemySpawner.NewEnemySpawner_C.HasSpawnedEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANewEnemySpawner_C::HasSpawnedEnemy__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewEnemySpawner_C", "HasSpawnedEnemy__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


