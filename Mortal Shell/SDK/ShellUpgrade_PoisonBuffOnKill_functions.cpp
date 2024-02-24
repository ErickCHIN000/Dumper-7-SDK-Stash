#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C
// (None)

class UClass* UShellUpgrade_PoisonBuffOnKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_PoisonBuffOnKill_C");

	return Clss;
}


// ShellUpgrade_PoisonBuffOnKill_C ShellUpgrade_PoisonBuffOnKill.Default__ShellUpgrade_PoisonBuffOnKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_PoisonBuffOnKill_C* UShellUpgrade_PoisonBuffOnKill_C::GetDefaultObj()
{
	static class UShellUpgrade_PoisonBuffOnKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_PoisonBuffOnKill_C*>(UShellUpgrade_PoisonBuffOnKill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.OnDmgApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::OnDmgApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "OnDmgApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.OnDmgTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::OnDmgTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "OnDmgTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.RemoveBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::RemoveBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "RemoveBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.AddBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::AddBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "AddBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_PoisonBuffOnKill_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_PoisonBuffOnKill.ShellUpgrade_PoisonBuffOnKill_C.ExecuteUbergraph_ShellUpgrade_PoisonBuffOnKill
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasKilledThisFrame_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_PoisonBuffOnKill_C::ExecuteUbergraph_ShellUpgrade_PoisonBuffOnKill(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WasKilledThisFrame_bYes, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_PoisonBuffOnKill_C", "ExecuteUbergraph_ShellUpgrade_PoisonBuffOnKill");

	Params::UShellUpgrade_PoisonBuffOnKill_C_ExecuteUbergraph_ShellUpgrade_PoisonBuffOnKill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
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
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WasKilledThisFrame_bYes = CallFunc_WasKilledThisFrame_bYes;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


