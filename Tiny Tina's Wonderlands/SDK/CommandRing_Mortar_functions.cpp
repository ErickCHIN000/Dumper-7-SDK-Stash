#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CommandRing_Mortar.CommandRing_Mortar_C
// (Actor)

class UClass* ACommandRing_Mortar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommandRing_Mortar_C");

	return Clss;
}


// CommandRing_Mortar_C CommandRing_Mortar.Default__CommandRing_Mortar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACommandRing_Mortar_C* ACommandRing_Mortar_C::GetDefaultObj()
{
	static class ACommandRing_Mortar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACommandRing_Mortar_C*>(ACommandRing_Mortar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACommandRing_Mortar_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACommandRing_Mortar_C::BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar");

	Params::ACommandRing_Mortar_C_BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACommandRing_Mortar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.Handle_Turret_Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent*    PawnAttachSlotComponent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACommandRing_Mortar_C::Handle_Turret_Enter(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "Handle_Turret_Enter");

	Params::ACommandRing_Mortar_C_Handle_Turret_Enter_Params Parms{};

	Parms.PawnAttachSlotComponent = PawnAttachSlotComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.Handle_Turret_Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent*    PawnAttachSlotComponent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACommandRing_Mortar_C::Handle_Turret_Exit(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "Handle_Turret_Exit");

	Params::ACommandRing_Mortar_C_Handle_Turret_Exit_Params Parms{};

	Parms.PawnAttachSlotComponent = PawnAttachSlotComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.Handle_WeaponChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     LastWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACommandRing_Mortar_C::Handle_WeaponChange(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "Handle_WeaponChange");

	Params::ACommandRing_Mortar_C_Handle_WeaponChange_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.LastWeapon = LastWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_HitResult                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnAttachSlotComponent*    K2Node_CustomEvent_PawnAttachSlotComponent1                      (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPawnAttachSlotComponent*    K2Node_CustomEvent_PawnAttachSlotComponent                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_LastWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACommandRing_Mortar_C::ExecuteUbergraph_CommandRing_Mortar(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UPawnAttachSlotComponent* K2Node_CustomEvent_PawnAttachSlotComponent1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPawnAttachSlotComponent* K2Node_CustomEvent_PawnAttachSlotComponent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AWeapon* K2Node_CustomEvent_NewWeapon, class AWeapon* K2Node_CustomEvent_LastWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandRing_Mortar_C", "ExecuteUbergraph_CommandRing_Mortar");

	Params::ACommandRing_Mortar_C_ExecuteUbergraph_CommandRing_Mortar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_HitResult = K2Node_ComponentBoundEvent_HitResult;
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
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_PawnAttachSlotComponent1 = K2Node_CustomEvent_PawnAttachSlotComponent1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PawnAttachSlotComponent = K2Node_CustomEvent_PawnAttachSlotComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_LastWeapon = K2Node_CustomEvent_LastWeapon;

	UObject::ProcessEvent(Func, &Parms);

}

}


