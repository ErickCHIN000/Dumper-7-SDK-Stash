#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C
// (Actor)

class UClass* ADroneProjectile_HammerAnvil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroneProjectile_HammerAnvil_C");

	return Clss;
}


// DroneProjectile_HammerAnvil_C DroneProjectile_HammerAnvil.Default__DroneProjectile_HammerAnvil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADroneProjectile_HammerAnvil_C* ADroneProjectile_HammerAnvil_C::GetDefaultObj()
{
	static class ADroneProjectile_HammerAnvil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroneProjectile_HammerAnvil_C*>(ADroneProjectile_HammerAnvil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.SearchForNearbyTargets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetNextTarget_FoundEnemyTarget                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetNextTarget_CurrentTarget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::SearchForNearbyTargets(bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "SearchForNearbyTargets");

	Params::ADroneProjectile_HammerAnvil_C_SearchForNearbyTargets_Params Parms{};

	Parms.CallFunc_GetNextTarget_FoundEnemyTarget = CallFunc_GetNextTarget_FoundEnemyTarget;
	Parms.CallFunc_GetNextTarget_CurrentTarget = CallFunc_GetNextTarget_CurrentTarget;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.SetDroneMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnemyTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::SetDroneMovement(bool EnemyTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "SetDroneMovement");

	Params::ADroneProjectile_HammerAnvil_C_SetDroneMovement_Params Parms{};

	Parms.EnemyTarget = EnemyTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.GetNextTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundEnemyTarget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CurrentTarget                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakDamageComponent*         CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextTarget_FoundEnemyTarget                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetNextTarget_CurrentTarget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isValidHammerTarget_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::GetNextTarget(bool* FoundEnemyTarget, class AActor** CurrentTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, bool CallFunc_isValidHammerTarget_Res, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "GetNextTarget");

	Params::ADroneProjectile_HammerAnvil_C_GetNextTarget_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetNextTarget_FoundEnemyTarget = CallFunc_GetNextTarget_FoundEnemyTarget;
	Parms.CallFunc_GetNextTarget_CurrentTarget = CallFunc_GetNextTarget_CurrentTarget;
	Parms.CallFunc_isValidHammerTarget_Res = CallFunc_isValidHammerTarget_Res;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundEnemyTarget != nullptr)
		*FoundEnemyTarget = Parms.FoundEnemyTarget;

	if (CurrentTarget != nullptr)
		*CurrentTarget = Parms.CurrentTarget;

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.isValidHammerTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTargetableComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::IsValidHammerTarget(bool* Res, bool CallFunc_IsAlive_ReturnValue, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "isValidHammerTarget");

	Params::ADroneProjectile_HammerAnvil_C_IsValidHammerTarget_Params Parms{};

	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTargetableByActor_ReturnValue = CallFunc_IsTargetableByActor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.RotateSideways__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::RotateSideways__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "RotateSideways__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.RotateSideways__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::RotateSideways__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "RotateSideways__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.OnAnimEnd_B759926B4C477DA7CA2306841F6C7EB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::OnAnimEnd_B759926B4C477DA7CA2306841F6C7EB1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "OnAnimEnd_B759926B4C477DA7CA2306841F6C7EB1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.OnEnd_B759926B4C477DA7CA2306841F6C7EB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProjectile_HammerAnvil_C::OnEnd_B759926B4C477DA7CA2306841F6C7EB1(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "OnEnd_B759926B4C477DA7CA2306841F6C7EB1");

	Params::ADroneProjectile_HammerAnvil_C_OnEnd_B759926B4C477DA7CA2306841F6C7EB1_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.OnAnimEnd_5151F88A424E1BC2CB92AEA036F01C5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::OnAnimEnd_5151F88A424E1BC2CB92AEA036F01C5D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "OnAnimEnd_5151F88A424E1BC2CB92AEA036F01C5D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.OnEnd_5151F88A424E1BC2CB92AEA036F01C5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProjectile_HammerAnvil_C::OnEnd_5151F88A424E1BC2CB92AEA036F01C5D(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "OnEnd_5151F88A424E1BC2CB92AEA036F01C5D");

	Params::ADroneProjectile_HammerAnvil_C_OnEnd_5151F88A424E1BC2CB92AEA036F01C5D_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.Despawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               EquipInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProjectile_HammerAnvil_C::Despawn(class AOakCharacter* EquipInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "Despawn");

	Params::ADroneProjectile_HammerAnvil_C_Despawn_Params Parms{};

	Parms.EquipInstigator = EquipInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.ReturnToOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::ReturnToOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "ReturnToOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.Audio_StartSwinging
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::Audio_StartSwinging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "Audio_StartSwinging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.Audio_Stop_Swinging
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::Audio_Stop_Swinging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "Audio_Stop_Swinging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADroneProjectile_HammerAnvil_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_DroneProjectile_HammerAnvil
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADroneProjectile_HammerAnvil_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_DroneProjectile_HammerAnvil(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_DroneProjectile_HammerAnvil");

	Params::ADroneProjectile_HammerAnvil_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_DroneProjectile_HammerAnvil_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.SetHammerRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StartSpin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::SetHammerRotation(bool StartSpin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "SetHammerRotation");

	Params::ADroneProjectile_HammerAnvil_C_SetHammerRotation_Params Parms{};

	Parms.StartSpin = StartSpin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.MoveToNextEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      EnemyTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProjectile_HammerAnvil_C::MoveToNextEnemy(class AActor* EnemyTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "MoveToNextEnemy");

	Params::ADroneProjectile_HammerAnvil_C_MoveToNextEnemy_Params Parms{};

	Parms.EnemyTarget = EnemyTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.TargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProjectile_HammerAnvil_C::TargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "TargetDied");

	Params::ADroneProjectile_HammerAnvil_C_TargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C.ExecuteUbergraph_DroneProjectile_HammerAnvil
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValue_OutValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_CustomEvent_EquipInstigator                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetDamageType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBaseShieldDamage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextTarget_FoundEnemyTarget                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetNextTarget_CurrentTarget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetDamageType_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetBaseShieldDamage_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_StartSpin                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// class AActor*                      K2Node_CustomEvent_EnemyTarget                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNextTarget_FoundEnemyTarget1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetNextTarget_CurrentTarget1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue1                                (NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable2                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue1                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult1                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable3                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProjectile_HammerAnvil_C::ExecuteUbergraph_DroneProjectile_HammerAnvil(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, const struct FHitResult& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState1, class AActor* K2Node_CustomEvent_Actor1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* Temp_object_Variable1, enum class EGbxActionEndState Temp_byte_Variable1, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AOakCharacter* K2Node_CustomEvent_EquipInstigator, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UClass* CallFunc_GetDamageType_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UClass* CallFunc_GetDamageType_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool K2Node_CustomEvent_StartSpin, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* K2Node_CustomEvent_EnemyTarget, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_GetNextTarget_FoundEnemyTarget1, class AActor* CallFunc_GetNextTarget_CurrentTarget1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, TArray<struct FGbxActionRegister>& Temp_struct_Variable2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FRotator& CallFunc_RLerp_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, TArray<struct FGbxActionRegister>& Temp_struct_Variable3, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProjectile_HammerAnvil_C", "ExecuteUbergraph_DroneProjectile_HammerAnvil");

	Params::ADroneProjectile_HammerAnvil_C_ExecuteUbergraph_DroneProjectile_HammerAnvil_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EndState1 = K2Node_CustomEvent_EndState1;
	Parms.K2Node_CustomEvent_Actor1 = K2Node_CustomEvent_Actor1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_EndState = K2Node_CustomEvent_EndState;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_CustomEvent_EquipInstigator = K2Node_CustomEvent_EquipInstigator;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_GetBaseShieldDamage_ReturnValue = CallFunc_GetBaseShieldDamage_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetNextTarget_FoundEnemyTarget = CallFunc_GetNextTarget_FoundEnemyTarget;
	Parms.CallFunc_GetNextTarget_CurrentTarget = CallFunc_GetNextTarget_CurrentTarget;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_GetDamageType_ReturnValue1 = CallFunc_GetDamageType_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetBaseShieldDamage_ReturnValue1 = CallFunc_GetBaseShieldDamage_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_CustomEvent_StartSpin = K2Node_CustomEvent_StartSpin;
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
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_EnemyTarget = K2Node_CustomEvent_EnemyTarget;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.CallFunc_GetNextTarget_FoundEnemyTarget1 = CallFunc_GetNextTarget_FoundEnemyTarget1;
	Parms.CallFunc_GetNextTarget_CurrentTarget1 = CallFunc_GetNextTarget_CurrentTarget1;
	Parms.CallFunc_K2_SetTimer_ReturnValue1 = CallFunc_K2_SetTimer_ReturnValue1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_PlayGbxAction_ReturnValue = CallFunc_PlayGbxAction_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetRelativeTransform_ReturnValue1 = CallFunc_GetRelativeTransform_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_RLerp_ReturnValue1 = CallFunc_RLerp_ReturnValue1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult1 = CallFunc_K2_SetRelativeRotation_SweepHitResult1;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_PlayGbxAction_ReturnValue1 = CallFunc_PlayGbxAction_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


