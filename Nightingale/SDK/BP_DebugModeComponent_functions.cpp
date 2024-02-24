#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DebugModeComponent.BP_DebugModeComponent_C
// (None)

class UClass* UBP_DebugModeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DebugModeComponent_C");

	return Clss;
}


// BP_DebugModeComponent_C BP_DebugModeComponent.Default__BP_DebugModeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DebugModeComponent_C* UBP_DebugModeComponent_C::GetDefaultObj()
{
	static class UBP_DebugModeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DebugModeComponent_C*>(UBP_DebugModeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleImpactInfoModeChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleImpactInfoModeChange(bool CallFunc_ModeIsActive_IsActive, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleImpactInfoModeChange");

	Params::UBP_DebugModeComponent_C_HandleImpactInfoModeChange_Params Parms{};

	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleInstantRefinementModeChange
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleInstantRefinementModeChange(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModeIsActive_IsActive, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleInstantRefinementModeChange");

	Params::UBP_DebugModeComponent_C_HandleInstantRefinementModeChange_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnHitConnected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnHitConnected(const struct FHitResult& HitResult, bool Temp_bool_Variable, bool CallFunc_ModeIsActive_IsActive, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& K2Node_Select_Default, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnHitConnected");

	Params::UBP_DebugModeComponent_C_OnHitConnected_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleFireRangeWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             SpreadDegrees                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ForwardVector                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Start                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ProjectileLaunchDistance                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ShotResultClass                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalculateSpreadDegrees_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetShootVector_ForwardVector                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPTA_ShotResult_C*          CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetProjectileStart_ProjectileStart                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleFireRangeWeapon(const struct FGameplayTag& Tag, class APawn* Pawn, double SpreadDegrees, const struct FVector& ForwardVector, const struct FVector& Start, double ProjectileLaunchDistance, class UClass* ShotResultClass, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, double CallFunc_CalculateSpreadDegrees_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetShootVector_ForwardVector, class ABPTA_ShotResult_C* CallFunc_GetDefaultObject_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetProjectileStart_ProjectileStart, float CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleFireRangeWeapon");

	Params::UBP_DebugModeComponent_C_HandleFireRangeWeapon_Params Parms{};

	Parms.Tag = Tag;
	Parms.Pawn = Pawn;
	Parms.SpreadDegrees = SpreadDegrees;
	Parms.ForwardVector = ForwardVector;
	Parms.Start = Start;
	Parms.ProjectileLaunchDistance = ProjectileLaunchDistance;
	Parms.ShotResultClass = ShotResultClass;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_CalculateSpreadDegrees_ReturnValue = CallFunc_CalculateSpreadDegrees_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShootVector_ForwardVector = CallFunc_GetShootVector_ForwardVector;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User_1 = K2Node_DynamicCast_AsBPI_Weapon_User_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetProjectileStart_ProjectileStart = CallFunc_GetProjectileStart_ProjectileStart;
	Parms.CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast = CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast;
	Parms.CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast = CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnPostAttack
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeSeconds_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnPostAttack(class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnPostAttack");

	Params::UBP_DebugModeComponent_C_OnPostAttack_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue_1 = CallFunc_GetRealTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleHitInfoModeChange
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_3                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleHitInfoModeChange(class ABP_Character_C* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_ModeIsActive_IsActive, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleHitInfoModeChange");

	Params::UBP_DebugModeComponent_C_HandleHitInfoModeChange_Params Parms{};

	Parms.Character = Character;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component_1 = K2Node_DynamicCast_AsNWXAbility_System_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_3 = CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleDebugModeToggleBehaviour
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_DebugModes            DebugModeToggle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleDebugModeToggleBehaviour(enum class E_DebugModes DebugModeToggle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleDebugModeToggleBehaviour");

	Params::UBP_DebugModeComponent_C_HandleDebugModeToggleBehaviour_Params Parms{};

	Parms.DebugModeToggle = DebugModeToggle;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetFoodSlotInfo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFoodSlot                   FoodSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// float                              CurrentItemLevel                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentItemName                                                  (Edit, BlueprintVisible)
// struct FInventoryEntry             CurrentSlotInventoryEntry                                        (Edit, BlueprintVisible)
// class FString                      SEString                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetItemLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Consumable        CallFunc_TryGetItemDataConsumable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataConsumable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FString UBP_DebugModeComponent_C::GetFoodSlotInfo(const struct FFoodSlot& FoodSlot, float CurrentItemLevel, class FText CurrentItemName, const struct FInventoryEntry& CurrentSlotInventoryEntry, const class FString& SEString, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, float CallFunc_GetItemLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Consumable& CallFunc_TryGetItemDataConsumable_OutData, enum class EGetResult CallFunc_TryGetItemDataConsumable_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Array_IsNotEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_GetItemName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetFoodSlotInfo");

	Params::UBP_DebugModeComponent_C_GetFoodSlotInfo_Params Parms{};

	Parms.FoodSlot = FoodSlot;
	Parms.CurrentItemLevel = CurrentItemLevel;
	Parms.CurrentItemName = CurrentItemName;
	Parms.CurrentSlotInventoryEntry = CurrentSlotInventoryEntry;
	Parms.SEString = SEString;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetItemLevel_ReturnValue = CallFunc_GetItemLevel_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataConsumable_OutData = CallFunc_TryGetItemDataConsumable_OutData;
	Parms.CallFunc_TryGetItemDataConsumable_Branches = CallFunc_TryGetItemDataConsumable_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue = CallFunc_Conv_ObjectToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintAllFoodSlotInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SourceString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CurrentFoodSlotIndex                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFoodSlot                   CurrentFoodSlot                                                  (Edit, BlueprintVisible)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UBP_ConsumptionComponent_C*  ConsumptionComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFoodSlotInfo_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFoodSlot>           CallFunc_GetFoodSlots_FoodSlots                                  (ReferenceParm)
// struct FFoodSlot                   CallFunc_Array_Get_Item                                          (None)
// class UBP_ConsumptionComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::PrintAllFoodSlotInfo(const class FString& SourceString, int32 CurrentFoodSlotIndex, const struct FFoodSlot& CurrentFoodSlot, class AActor* Owner, class UBP_ConsumptionComponent_C* ConsumptionComponent, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFoodSlotInfo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TArray<struct FFoodSlot>& CallFunc_GetFoodSlots_FoodSlots, const struct FFoodSlot& CallFunc_Array_Get_Item, class UBP_ConsumptionComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintAllFoodSlotInfo");

	Params::UBP_DebugModeComponent_C_PrintAllFoodSlotInfo_Params Parms{};

	Parms.SourceString = SourceString;
	Parms.CurrentFoodSlotIndex = CurrentFoodSlotIndex;
	Parms.CurrentFoodSlot = CurrentFoodSlot;
	Parms.Owner = Owner;
	Parms.ConsumptionComponent = ConsumptionComponent;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFoodSlotInfo_ReturnValue = CallFunc_GetFoodSlotInfo_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetFoodSlots_FoodSlots = CallFunc_GetFoodSlots_FoodSlots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnFoodSlotOverwritten
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFoodSlot                   FoodSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_GetFoodSlotInfo_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnFoodSlotOverwritten(const struct FFoodSlot& FoodSlot, const class FString& CallFunc_GetFoodSlotInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnFoodSlotOverwritten");

	Params::UBP_DebugModeComponent_C_OnFoodSlotOverwritten_Params Parms{};

	Parms.FoodSlot = FoodSlot;
	Parms.CallFunc_GetFoodSlotInfo_ReturnValue = CallFunc_GetFoodSlotInfo_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnFoodSlotCleared
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoodSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnFoodSlotCleared(int32 FoodSlot, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnFoodSlotCleared");

	Params::UBP_DebugModeComponent_C_OnFoodSlotCleared_Params Parms{};

	Parms.FoodSlot = FoodSlot;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleConsumptionInfoModeChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ConsumptionComponent_C*  ConsumptionComponent                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ConsumptionComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleConsumptionInfoModeChange(class UBP_ConsumptionComponent_C* ConsumptionComponent, class AActor* Owner, bool CallFunc_ModeIsActive_IsActive, bool CallFunc_IsValid_ReturnValue, class UBP_ConsumptionComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleConsumptionInfoModeChange");

	Params::UBP_DebugModeComponent_C_HandleConsumptionInfoModeChange_Params Parms{};

	Parms.ConsumptionComponent = ConsumptionComponent;
	Parms.Owner = Owner;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnTagChanged
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnTagChanged(struct FGameplayTag& Tag, int32 Count, class APawn* Pawn, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ModeIsActive_IsActive, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnTagChanged");

	Params::UBP_DebugModeComponent_C_OnTagChanged_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;
	Parms.Pawn = Pawn;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleAutoRevive
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeathDownedTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HandleAutoRevive(const struct FGameplayTag& Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_DeathDownedTag_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleAutoRevive");

	Params::UBP_DebugModeComponent_C_HandleAutoRevive_Params Parms{};

	Parms.Tag = Tag;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_DeathDownedTag_ReturnValue = CallFunc_DeathDownedTag_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnAutoReviveSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     AbilitySystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnAutoReviveSelected(class APawn* Pawn, class UAbilitySystemComponent* AbilitySystem, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ModeIsActive_IsActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component_1, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnAutoReviveSelected");

	Params::UBP_DebugModeComponent_C_OnAutoReviveSelected_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.AbilitySystem = AbilitySystem;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component_1 = K2Node_DynamicCast_AsNWXAbility_System_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.On Depletion VFXSpawned
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIIMInstance                Instance                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ResourceAVFXTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemRewards                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      DebugInfo                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInteractiveInstancedMeshManager*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class UIIMResourceDataAsset*       CallFunc_GetResourceFromResourceId_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::On_Depletion_VFXSpawned(struct FIIMInstance& Instance, struct FGameplayTag& ResourceAVFXTag, class AActor* DamageCauser, TArray<struct FInventoryEntry>& ItemRewards, const class FString& DebugInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AInteractiveInstancedMeshManager* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_ModeIsActive_IsActive, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, class FText CallFunc_GetItemName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UIIMResourceDataAsset* CallFunc_GetResourceFromResourceId_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "On Depletion VFXSpawned");

	Params::UBP_DebugModeComponent_C_On_Depletion_VFXSpawned_Params Parms{};

	Parms.Instance = Instance;
	Parms.ResourceAVFXTag = ResourceAVFXTag;
	Parms.DamageCauser = DamageCauser;
	Parms.ItemRewards = ItemRewards;
	Parms.DebugInfo = DebugInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetResourceFromResourceId_ReturnValue = CallFunc_GetResourceFromResourceId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HandleHarvestInfoModeChange
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        CurrentIIMNode                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AResourceNodeIIMBase*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModeIsActive_IsActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AResourceNodeIIMBase*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AResourceNodeIIMBase*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)

void UBP_DebugModeComponent_C::HandleHarvestInfoModeChange(class AResourceNodeIIMBase* CurrentIIMNode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AResourceNodeIIMBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ModeIsActive_IsActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AResourceNodeIIMBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class AResourceNodeIIMBase*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HandleHarvestInfoModeChange");

	Params::UBP_DebugModeComponent_C_HandleHarvestInfoModeChange_Params Parms{};

	Parms.CurrentIIMNode = CurrentIIMNode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ModeIsActive_IsActive = CallFunc_ModeIsActive_IsActive;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetGameplayTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameplayTab                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetGameplayTab(int32* GameplayTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetGameplayTab");

	Params::UBP_DebugModeComponent_C_GetGameplayTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GameplayTab != nullptr)
		*GameplayTab = Parms.GameplayTab;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetGameplayTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameplayTab                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SetGameplayTab(int32 GameplayTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetGameplayTab");

	Params::UBP_DebugModeComponent_C_SetGameplayTab_Params Parms{};

	Parms.GameplayTab = GameplayTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetSavedEncounterSelections
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EncounterIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlugIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetSavedEncounterSelections(int32* EncounterIndex, int32* PlugIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetSavedEncounterSelections");

	Params::UBP_DebugModeComponent_C_GetSavedEncounterSelections_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EncounterIndex != nullptr)
		*EncounterIndex = Parms.EncounterIndex;

	if (PlugIndex != nullptr)
		*PlugIndex = Parms.PlugIndex;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetSavedEncounterSelections
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EncounterIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlugIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SetSavedEncounterSelections(int32 EncounterIndex, int32 PlugIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetSavedEncounterSelections");

	Params::UBP_DebugModeComponent_C_SetSavedEncounterSelections_Params Parms{};

	Parms.EncounterIndex = EncounterIndex;
	Parms.PlugIndex = PlugIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnRep_EncounterGym
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::OnRep_EncounterGym()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnRep_EncounterGym");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HealCurses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystem_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HealCurses(class UAbilitySystemComponent* CallFunc_GetAbilitySystem_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HealCurses");

	Params::UBP_DebugModeComponent_C_HealCurses_Params Parms{};

	Parms.CallFunc_GetAbilitySystem_ReturnValue = CallFunc_GetAbilitySystem_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HealInjuries
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>CallFunc_RemoveStatusEffect_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>CallFunc_RemoveStatusEffect_self_CastInput_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::HealInjuries(class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character, TScriptInterface<class IStatusEffectAccessInterface> CallFunc_RemoveStatusEffect_self_CastInput, bool CallFunc_RemoveStatusEffect_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> CallFunc_RemoveStatusEffect_self_CastInput_1, bool CallFunc_RemoveStatusEffect_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HealInjuries");

	Params::UBP_DebugModeComponent_C_HealInjuries_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_AsBP_Character = CallFunc_GetOwnerCharacter_AsBP_Character;
	Parms.CallFunc_RemoveStatusEffect_self_CastInput = CallFunc_RemoveStatusEffect_self_CastInput;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_self_CastInput_1 = CallFunc_RemoveStatusEffect_self_CastInput_1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue_1 = CallFunc_RemoveStatusEffect_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnPlugByName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlugName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        POIName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationInFrontOfPlayer_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPlugByName_bSuccess                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnPlugByName(class FName PlugName, class FName POIName, const struct FVector& CallFunc_GetLocationInFrontOfPlayer_Location, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SpawnPlugByName_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnPlugByName");

	Params::UBP_DebugModeComponent_C_SpawnPlugByName_Params Parms{};

	Parms.PlugName = PlugName;
	Parms.POIName = POIName;
	Parms.CallFunc_GetLocationInFrontOfPlayer_Location = CallFunc_GetLocationInFrontOfPlayer_Location;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnPlugByName_bSuccess = CallFunc_SpawnPlugByName_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnNarrativeInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Narrative_C*LNarrative                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  LTransform                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LNPCData                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCNarrativeData        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_Realm_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Creature_NPC_Narrative              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Narrative_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnNarrativeInternal(const struct FDataTableRowHandle& NPCData, class ABP_Creature_NPC_Narrative_C* LNarrative, const struct FTransform& LTransform, const struct FDataTableRowHandle& LNPCData, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FNWXNPCNarrativeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ABP_CreatureSpawner_NPCGroup_Realm_C* CallFunc_FinishSpawningActor_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_NPC_Narrative, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class ABP_Creature_NPC_Narrative_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnNarrativeInternal");

	Params::UBP_DebugModeComponent_C_SpawnNarrativeInternal_Params Parms{};

	Parms.NPCData = NPCData;
	Parms.LNarrative = LNarrative;
	Parms.LTransform = LTransform;
	Parms.LNPCData = LNPCData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_ClassDynamicCast_AsBP_Creature_NPC_Narrative = K2Node_ClassDynamicCast_AsBP_Creature_NPC_Narrative;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TraceToGetCreature
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutStartPoint                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutEndPoint                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_LineTraceMultiForObjects_OutHits                        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_LineTraceMultiForObjects_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TraceToGetCreature(class ABP_CreatureBase_C** Creature, int32 Temp_int_Array_Index_Variable, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_GetForwardLinecast_OutStartPoint, const struct FVector& CallFunc_GetForwardLinecast_OutEndPoint, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_LineTraceMultiForObjects_OutHits, bool CallFunc_LineTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TraceToGetCreature");

	Params::UBP_DebugModeComponent_C_TraceToGetCreature_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character = CallFunc_GetOwnerCharacter_AsBP_Character;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetForwardLinecast_OutStartPoint = CallFunc_GetForwardLinecast_OutStartPoint;
	Parms.CallFunc_GetForwardLinecast_OutEndPoint = CallFunc_GetForwardLinecast_OutEndPoint;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_LineTraceMultiForObjects_OutHits = CallFunc_LineTraceMultiForObjects_OutHits;
	Parms.CallFunc_LineTraceMultiForObjects_ReturnValue = CallFunc_LineTraceMultiForObjects_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Creature != nullptr)
		*Creature = Parms.Creature;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ClearRenderMapTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ClearRenderMapTarget(class UTextureRenderTarget2D* RenderTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ClearRenderMapTarget");

	Params::UBP_DebugModeComponent_C_ClearRenderMapTarget_Params Parms{};

	Parms.RenderTarget = RenderTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SaveRenderMapTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SaveRenderMapTarget(class UTextureRenderTarget2D* RenderTarget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SaveRenderMapTarget");

	Params::UBP_DebugModeComponent_C_SaveRenderMapTarget_Params Parms{};

	Parms.RenderTarget = RenderTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.UIMapCameraCaptureSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             WaitForCapture                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Render_Target                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASceneCapture2D*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::UIMapCameraCaptureSetup(double WaitForCapture, class UTextureRenderTarget2D* Render_Target, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASceneCapture2D* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "UIMapCameraCaptureSetup");

	Params::UBP_DebugModeComponent_C_UIMapCameraCaptureSetup_Params Parms{};

	Parms.WaitForCapture = WaitForCapture;
	Parms.Render_Target = Render_Target;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AssignMapCameraImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      Render_Target                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Map_Name                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Map_Path                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProjectDirectory_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::AssignMapCameraImage(class UTextureRenderTarget2D* Render_Target, const class FString& Map_Name, const class FString& Map_Path, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetProjectDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AssignMapCameraImage");

	Params::UBP_DebugModeComponent_C_AssignMapCameraImage_Params Parms{};

	Parms.Render_Target = Render_Target;
	Parms.Map_Name = Map_Name;
	Parms.Map_Path = Map_Path;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetProjectDirectory_ReturnValue = CallFunc_GetProjectDirectory_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Apply Debug Loco
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_ApplyAIActions_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Apply_Debug_Loco(class ABP_CreatureBase_C* Creature, TArray<class UClass*>& K2Node_MakeArray_Array, bool CallFunc_ApplyAIActions_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Apply Debug Loco");

	Params::UBP_DebugModeComponent_C_Apply_Debug_Loco_Params Parms{};

	Parms.Creature = Creature;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ApplyAIActions_Success = CallFunc_ApplyAIActions_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetOwnerCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             AsBP_Character                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetOwnerCharacter(class ABP_Character_C** AsBP_Character, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetOwnerCharacter");

	Params::UBP_DebugModeComponent_C_GetOwnerCharacter_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Character != nullptr)
		*AsBP_Character = Parms.AsBP_Character;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.FindTargetStructures
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>          Hits                                                             (Parm, OutParm, ContainsInstancedReference)
// float                              CallFunc_GetPlacementLinecastMax_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectionSphereSweep_OutFoundHits                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_GetSelectionSphereSweep_OutHitResults                   (ReferenceParm, ContainsInstancedReference)

void UBP_DebugModeComponent_C::FindTargetStructures(TArray<struct FHitResult>* Hits, float CallFunc_GetPlacementLinecastMax_ReturnValue, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_GetSelectionSphereSweep_OutFoundHits, TArray<struct FHitResult>& CallFunc_GetSelectionSphereSweep_OutHitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "FindTargetStructures");

	Params::UBP_DebugModeComponent_C_FindTargetStructures_Params Parms{};

	Parms.CallFunc_GetPlacementLinecastMax_ReturnValue = CallFunc_GetPlacementLinecastMax_ReturnValue;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character = CallFunc_GetOwnerCharacter_AsBP_Character;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetSelectionSphereSweep_OutFoundHits = CallFunc_GetSelectionSphereSweep_OutFoundHits;
	Parms.CallFunc_GetSelectionSphereSweep_OutHitResults = CallFunc_GetSelectionSphereSweep_OutHitResults;

	UObject::ProcessEvent(Func, &Parms);

	if (Hits != nullptr)
		*Hits = std::move(Parms.Hits);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.FillAllBars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     LAbilitySystem                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_1                          (None)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_2                          (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2             (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1          (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_2          (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystem_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_3                          (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3             (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_3          (NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::FillAllBars(class UAbilitySystemComponent* LAbilitySystem, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_3, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "FillAllBars");

	Params::UBP_DebugModeComponent_C_FillAllBars_Params Parms{};

	Parms.LAbilitySystem = LAbilitySystem;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_1 = CallFunc_MakeOutgoingSpec_ReturnValue_1;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_2 = CallFunc_MakeOutgoingSpec_ReturnValue_2;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_2;
	Parms.CallFunc_GetAbilitySystem_ReturnValue = CallFunc_GetAbilitySystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_3 = CallFunc_MakeOutgoingSpec_ReturnValue_3;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnFarSpawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         SpawnerHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnVector                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_SpawnSpawner_Spawner                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnFarSpawner(const struct FDataTableRowHandle& SpawnerHandle, const struct FVector& SpawnVector, class APawn* LPawn, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_SpawnSpawner_Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnFarSpawner");

	Params::UBP_DebugModeComponent_C_SpawnFarSpawner_Params Parms{};

	Parms.SpawnerHandle = SpawnerHandle;
	Parms.SpawnVector = SpawnVector;
	Parms.LPawn = LPawn;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_SpawnSpawner_Spawner = CallFunc_SpawnSpawner_Spawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnVillagerInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                LFaction                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InitialTags                                                      (Edit, BlueprintVisible)
// class ABP_Creature_NPC_Villager_C* LVillager                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LNPCData                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCHumanData            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_Realm_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnVillagerInternal(const struct FDataTableRowHandle& NPCData, enum class EFaction LFaction, const struct FGameplayTagContainer& InitialTags, class ABP_Creature_NPC_Villager_C* LVillager, const struct FDataTableRowHandle& LNPCData, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, const struct FNWXNPCHumanData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_NPCGroup_Realm_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnVillagerInternal");

	Params::UBP_DebugModeComponent_C_SpawnVillagerInternal_Params Parms{};

	Parms.NPCData = NPCData;
	Parms.LFaction = LFaction;
	Parms.InitialTags = InitialTags;
	Parms.LVillager = LVillager;
	Parms.LNPCData = LNPCData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetAbilitySystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAbilitySystemComponent* UBP_DebugModeComponent_C::GetAbilitySystem(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetAbilitySystem");

	Params::UBP_DebugModeComponent_C_GetAbilitySystem_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnSpawner
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Row_Handle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   Spawner                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LClass                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LData                                                            (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureSpawner          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnSpawner(const struct FDataTableRowHandle& Row_Handle, const struct FTransform& SpawnTransform, class ABP_CreatureSpawnerBase_C** Spawner, class UClass* LClass, const struct FDataTableRowHandle& LData, const struct FS_CreatureSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawnerBase_C* CallFunc_FinishSpawningActor_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnSpawner");

	Params::UBP_DebugModeComponent_C_SpawnSpawner_Params Parms{};

	Parms.Row_Handle = Row_Handle;
	Parms.SpawnTransform = SpawnTransform;
	Parms.LClass = LClass;
	Parms.LData = LData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base = K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner != nullptr)
		*Spawner = Parms.Spawner;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyGameplayEffectInArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EffectName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             MaxDistanceSqr                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AffectedActor                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     AbilitySystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EffectCenter                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      EffectClass                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class UClass*> AreaEffects                                                      (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TMap<class FString, class UClass*> K2Node_MakeVariable_MakeVariableOutput                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance2DSquared_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ApplyGameplayEffectInArea(const class FString& EffectName, double MaxDistanceSqr, class AActor* AffectedActor, class UAbilitySystemComponent* AbilitySystem, const struct FVector& EffectCenter, class UClass* EffectClass, TMap<class FString, class UClass*> AreaEffects, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TMap<class FString, class UClass*> K2Node_MakeVariable_MakeVariableOutput, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyGameplayEffectInArea");

	Params::UBP_DebugModeComponent_C_ApplyGameplayEffectInArea_Params Parms{};

	Parms.EffectName = EffectName;
	Parms.MaxDistanceSqr = MaxDistanceSqr;
	Parms.AffectedActor = AffectedActor;
	Parms.AbilitySystem = AbilitySystem;
	Parms.EffectCenter = EffectCenter;
	Parms.EffectClass = EffectClass;
	Parms.AreaEffects = AreaEffects;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Vector_Distance2DSquared_ReturnValue = CallFunc_Vector_Distance2DSquared_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AngerCreaturesByTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          Temp_struct_Variable_2                                           (ConstParm)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// TArray<class ABP_CreatureBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>CallFunc_DamageActor_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::AngerCreaturesByTag(const struct FGameplayTag& Tag, int32 Temp_int_Array_Index_Variable, const struct FGameplayTagContainer& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& Temp_struct_Variable_1, const struct FTagValueContainer& Temp_struct_Variable_2, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_3, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AngerCreaturesByTag");

	Params::UBP_DebugModeComponent_C_AngerCreaturesByTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DamageActor_self_CastInput = CallFunc_DamageActor_self_CastInput;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.EndlessMinions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         BPSpawnerData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_BoundMiasma_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::EndlessMinions(const struct FDataTableRowHandle& BPSpawnerData, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_BoundMiasma_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "EndlessMinions");

	Params::UBP_DebugModeComponent_C_EndlessMinions_Params Parms{};

	Parms.BPSpawnerData = BPSpawnerData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintCustomizationData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterCustomization_Component_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerOrNPCName_Name                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugInfo_DebugInfo                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::PrintCustomizationData(class AActor* Actor, class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetPlayerOrNPCName_Name, const class FString& CallFunc_GetDebugInfo_DebugInfo, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintCustomizationData");

	Params::UBP_DebugModeComponent_C_PrintCustomizationData_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPlayerOrNPCName_Name = CallFunc_GetPlayerOrNPCName_Name;
	Parms.CallFunc_GetDebugInfo_DebugInfo = CallFunc_GetDebugInfo_DebugInfo;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.InternalTraceSelfCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::InternalTraceSelfCustomization(class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "InternalTraceSelfCustomization");

	Params::UBP_DebugModeComponent_C_InternalTraceSelfCustomization_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.InternalTraceCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<class AActor*>                HitActors                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutStartPoint                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutEndPoint                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_LineTraceMultiForObjects_OutHits                        (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_LineTraceMultiForObjects_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::InternalTraceCustomization(TSet<class AActor*> HitActors, class APawn* LPawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character, const struct FVector& CallFunc_GetForwardLinecast_OutStartPoint, const struct FVector& CallFunc_GetForwardLinecast_OutEndPoint, TArray<class AActor*>& CallFunc_Set_ToArray_Result, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_LineTraceMultiForObjects_OutHits, bool CallFunc_LineTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "InternalTraceCustomization");

	Params::UBP_DebugModeComponent_C_InternalTraceCustomization_Params Parms{};

	Parms.HitActors = HitActors;
	Parms.LPawn = LPawn;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character = CallFunc_GetOwnerCharacter_AsBP_Character;
	Parms.CallFunc_GetForwardLinecast_OutStartPoint = CallFunc_GetForwardLinecast_OutStartPoint;
	Parms.CallFunc_GetForwardLinecast_OutEndPoint = CallFunc_GetForwardLinecast_OutEndPoint;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_LineTraceMultiForObjects_OutHits = CallFunc_LineTraceMultiForObjects_OutHits;
	Parms.CallFunc_LineTraceMultiForObjects_ReturnValue = CallFunc_LineTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Internal Trace Creature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                LTag                                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          LCreature                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      LArg                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LCommand                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_2                                           (ConstParm)
// class ABP_CreatureBase_C*          CallFunc_TraceToGetCreature_Creature                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable_3                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ANWXActor*                   CallFunc_GetDamageSource_Debug_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          Temp_struct_Variable_4                                           (ConstParm)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_5                                           (ConstParm, ReferenceParm)
// TScriptInterface<class IDamageEventInterface>CallFunc_DamageActor_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Internal_Trace_Creature(const class FString& Command, const struct FGameplayTag& LTag, class ABP_CreatureBase_C* LCreature, class APawn* LPawn, const class FString& LArg, const class FString& LCommand, const struct FGameplayTag& Temp_struct_Variable, const class FString& CallFunc_ToUpper_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_2, class ABP_CreatureBase_C* CallFunc_TraceToGetCreature_Creature, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FHitResult& Temp_struct_Variable_3, class ANWXActor* CallFunc_GetDamageSource_Debug_ReturnValue, const struct FTagValueContainer& Temp_struct_Variable_4, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_5, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Internal Trace Creature");

	Params::UBP_DebugModeComponent_C_Internal_Trace_Creature_Params Parms{};

	Parms.Command = Command;
	Parms.LTag = LTag;
	Parms.LCreature = LCreature;
	Parms.LPawn = LPawn;
	Parms.LArg = LArg;
	Parms.LCommand = LCommand;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_TraceToGetCreature_Creature = CallFunc_TraceToGetCreature_Creature;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetDamageSource_Debug_ReturnValue = CallFunc_GetDamageSource_Debug_ReturnValue;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_DamageActor_self_CastInput = CallFunc_DamageActor_self_CastInput;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetLocationInFrontOfPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetLocationInFrontOfPlayer(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetLocationInFrontOfPlayer");

	Params::UBP_DebugModeComponent_C_GetLocationInFrontOfPlayer_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnPOIByName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        POIName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationInFrontOfPlayer_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnPOIByName_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_SpawnPOIByName_StreamingLevelProxy                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnPOIByName(class FName POIName, const struct FVector& CallFunc_GetLocationInFrontOfPlayer_Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SpawnPOIByName_bSuccess, class AStreamingLevelProxyActor* CallFunc_SpawnPOIByName_StreamingLevelProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnPOIByName");

	Params::UBP_DebugModeComponent_C_SpawnPOIByName_Params Parms{};

	Parms.POIName = POIName;
	Parms.CallFunc_GetLocationInFrontOfPlayer_Location = CallFunc_GetLocationInFrontOfPlayer_Location;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnPOIByName_bSuccess = CallFunc_SpawnPOIByName_bSuccess;
	Parms.CallFunc_SpawnPOIByName_StreamingLevelProxy = CallFunc_SpawnPOIByName_StreamingLevelProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnerDebugDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   LSpawner                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnerIdx                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CreatureIdx                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  SpawnerCreatures                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_CreatureSpawnerBase_C*>Spawners                                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TryGetBlackboardVector_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBlackboardGetResult    CallFunc_TryGetBlackboardVector_Branches                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnerDebugDraw(class ABP_CreatureSpawnerBase_C* LSpawner, class APawn* Character, int32 SpawnerIdx, int32 CreatureIdx, const TArray<class ABP_CreatureBase_C*>& SpawnerCreatures, const TArray<class ABP_CreatureSpawnerBase_C*>& Spawners, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_TryGetBlackboardVector_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardVector_Branches, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnerDebugDraw");

	Params::UBP_DebugModeComponent_C_SpawnerDebugDraw_Params Parms{};

	Parms.LSpawner = LSpawner;
	Parms.Character = Character;
	Parms.SpawnerIdx = SpawnerIdx;
	Parms.CreatureIdx = CreatureIdx;
	Parms.SpawnerCreatures = SpawnerCreatures;
	Parms.Spawners = Spawners;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetBlackboardVector_Value = CallFunc_TryGetBlackboardVector_Value;
	Parms.CallFunc_TryGetBlackboardVector_Branches = CallFunc_TryGetBlackboardVector_Branches;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ToggleSpawnerDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureManager_C*       CreatureManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               StartedTimer                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnerIdx                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CreatureIdx                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  SpawnerCreatures                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_CreatureSpawnerBase_C*>Spawners                                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_CreatureSpawnerBase_C*>CallFunc_GetSpawnersWithTag_Spawners                             (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ToggleSpawnerDebug(class ABP_CreatureManager_C* CreatureManager, const struct FGameplayTag& Tag, bool StartedTimer, class APawn* Character, int32 SpawnerIdx, int32 CreatureIdx, const TArray<class ABP_CreatureBase_C*>& SpawnerCreatures, const TArray<class ABP_CreatureSpawnerBase_C*>& Spawners, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_GetSpawnersWithTag_Spawners, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ToggleSpawnerDebug");

	Params::UBP_DebugModeComponent_C_ToggleSpawnerDebug_Params Parms{};

	Parms.CreatureManager = CreatureManager;
	Parms.Tag = Tag;
	Parms.StartedTimer = StartedTimer;
	Parms.Character = Character;
	Parms.SpawnerIdx = SpawnerIdx;
	Parms.CreatureIdx = CreatureIdx;
	Parms.SpawnerCreatures = SpawnerCreatures;
	Parms.Spawners = Spawners;
	Parms.CallFunc_GetSpawnersWithTag_Spawners = CallFunc_GetSpawnersWithTag_Spawners;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetQuestTrackerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetOwnerPlayerState_AsBP_Player_State                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetQuestTrackerInterface(TScriptInterface<class IQuestTrackerInterface>* QuestTrackerInterface, class ABP_PlayerState_C* CallFunc_GetOwnerPlayerState_AsBP_Player_State, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetQuestTrackerInterface");

	Params::UBP_DebugModeComponent_C_GetQuestTrackerInterface_Params Parms{};

	Parms.CallFunc_GetOwnerPlayerState_AsBP_Player_State = CallFunc_GetOwnerPlayerState_AsBP_Player_State;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestTrackerInterface != nullptr)
		*QuestTrackerInterface = Parms.QuestTrackerInterface;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ZoneDebugStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AbilityZoneVisualizationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ZoneDebugStop(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_AbilityZoneVisualizationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ZoneDebugStop");

	Params::UBP_DebugModeComponent_C_ZoneDebugStop_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ZoneDebugStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AbilityZoneVisualizationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ZoneDebugStart(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_AbilityZoneVisualizationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ZoneDebugStart");

	Params::UBP_DebugModeComponent_C_ZoneDebugStart_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ForceRespawnsIfAvailable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureSpawnerBase_C*>CallFunc_GetSpawnersWithTag_Spawners                             (ReferenceParm)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ForceRespawnsIfAvailable(const struct FGameplayTag& Tag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_GetSpawnersWithTag_Spawners, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ForceRespawnsIfAvailable");

	Params::UBP_DebugModeComponent_C_ForceRespawnsIfAvailable_Params Parms{};

	Parms.Tag = Tag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpawnersWithTag_Spawners = CallFunc_GetSpawnersWithTag_Spawners;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue = CallFunc_Conv_ObjectToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetOwnerPlayerState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           AsBP_Player_State                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetOwnerPlayerState(class ABP_PlayerState_C** AsBP_Player_State, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetOwnerPlayerState");

	Params::UBP_DebugModeComponent_C_GetOwnerPlayerState_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Player_State != nullptr)
		*AsBP_Player_State = Parms.AsBP_Player_State;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ParseItemQuality
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QualityString                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemQuality            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EItemQuality UBP_DebugModeComponent_C::ParseItemQuality(const class FString& QualityString, enum class EItemQuality Quality, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ParseItemQuality");

	Params::UBP_DebugModeComponent_C_ParseItemQuality_Params Parms{};

	Parms.QualityString = QualityString;
	Parms.Quality = Quality;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.FindClosestCraftingBench
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Structure_CraftingBench_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_CraftingBench_C*CurrentBench                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             CurrentDistanceSqr                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DebugOwner                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_CraftingBench_C*FoundBench                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             ClosestDistanceSqr                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSquaredDistanceTo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_CraftingBench_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABP_Structure_CraftingBench_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentDistanceSqr_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABP_Structure_CraftingBench_C* UBP_DebugModeComponent_C::FindClosestCraftingBench(class ABP_Structure_CraftingBench_C* CurrentBench, double CurrentDistanceSqr, class AActor* DebugOwner, class ABP_Structure_CraftingBench_C* FoundBench, double ClosestDistanceSqr, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class ABP_Structure_CraftingBench_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Structure_CraftingBench_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_CurrentDistanceSqr_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "FindClosestCraftingBench");

	Params::UBP_DebugModeComponent_C_FindClosestCraftingBench_Params Parms{};

	Parms.CurrentBench = CurrentBench;
	Parms.CurrentDistanceSqr = CurrentDistanceSqr;
	Parms.DebugOwner = DebugOwner;
	Parms.FoundBench = FoundBench;
	Parms.ClosestDistanceSqr = ClosestDistanceSqr;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSquaredDistanceTo_ReturnValue = CallFunc_GetSquaredDistanceTo_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_VariableSet_CurrentDistanceSqr_ImplicitCast = K2Node_VariableSet_CurrentDistanceSqr_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.CreatureDestroyedFromSpawnedSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::CreatureDestroyedFromSpawnedSpawner(class ABP_CreatureBase_C* Creature, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "CreatureDestroyedFromSpawnedSpawner");

	Params::UBP_DebugModeComponent_C_CreatureDestroyedFromSpawnedSpawner_Params Parms{};

	Parms.Creature = Creature;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToCreatureInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureManager_C*       CreatureManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Character                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnerIdx                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CreatureIdx                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  SpawnerCreatures                                                 (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_CreatureSpawnerBase_C*>Spawners                                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABP_CreatureSpawnerBase_C*>CallFunc_GetSpawnersWithTag_Spawners                             (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToCreatureInternal(class ABP_CreatureManager_C* CreatureManager, const struct FGameplayTag& Tag, class APawn* Character, int32 SpawnerIdx, int32 CreatureIdx, const TArray<class ABP_CreatureBase_C*>& SpawnerCreatures, const TArray<class ABP_CreatureSpawnerBase_C*>& Spawners, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_GetSpawnersWithTag_Spawners, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToCreatureInternal");

	Params::UBP_DebugModeComponent_C_TeleportToCreatureInternal_Params Parms{};

	Parms.CreatureManager = CreatureManager;
	Parms.Tag = Tag;
	Parms.Character = Character;
	Parms.SpawnerIdx = SpawnerIdx;
	Parms.CreatureIdx = CreatureIdx;
	Parms.SpawnerCreatures = SpawnerCreatures;
	Parms.Spawners = Spawners;
	Parms.CallFunc_GetSpawnersWithTag_Spawners = CallFunc_GetSpawnersWithTag_Spawners;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnBoundFromTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfBound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnVector                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_Encounter_Minion5_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnBoundFromTrace(int32 NumberOfBound, const struct FVector& SpawnVector, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawner_Encounter_Minion5_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnBoundFromTrace");

	Params::UBP_DebugModeComponent_C_SpawnBoundFromTrace_Params Parms{};

	Parms.NumberOfBound = NumberOfBound;
	Parms.SpawnVector = SpawnVector;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetPlayerStateByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           Player_State                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetPlayerStateByName(const class FString& Name, class ABP_PlayerState_C** Player_State, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetPlayerStateByName");

	Params::UBP_DebugModeComponent_C_GetPlayerStateByName_Params Parms{};

	Parms.Name = Name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_State != nullptr)
		*Player_State = Parms.Player_State;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetGroupComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGroupComponentBase*         Group_Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetOwnerPlayerState_AsBP_Player_State                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetGroupComponent(class UGroupComponentBase** Group_Component, class ABP_PlayerState_C* CallFunc_GetOwnerPlayerState_AsBP_Player_State, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetGroupComponent");

	Params::UBP_DebugModeComponent_C_GetGroupComponent_Params Parms{};

	Parms.CallFunc_GetOwnerPlayerState_AsBP_Player_State = CallFunc_GetOwnerPlayerState_AsBP_Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Group_Component != nullptr)
		*Group_Component = Parms.Group_Component;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetDebugModeState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_DebugModeStateComponent_C*DebugModeState                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetOwnerPlayerState_AsBP_Player_State                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStateSystems_C>K2Node_DynamicCast_AsBPI_Player_State_Systems                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeStateComponent_C*CallFunc_GetDebugModeStateInterface_DebugModeState               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GetDebugModeState(class UBP_DebugModeStateComponent_C** DebugModeState, class ABP_PlayerState_C* CallFunc_GetOwnerPlayerState_AsBP_Player_State, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class UBP_DebugModeStateComponent_C* CallFunc_GetDebugModeStateInterface_DebugModeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetDebugModeState");

	Params::UBP_DebugModeComponent_C_GetDebugModeState_Params Parms{};

	Parms.CallFunc_GetOwnerPlayerState_AsBP_Player_State = CallFunc_GetOwnerPlayerState_AsBP_Player_State;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_State_Systems = K2Node_DynamicCast_AsBPI_Player_State_Systems;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDebugModeStateInterface_DebugModeState = CallFunc_GetDebugModeStateInterface_DebugModeState;

	UObject::ProcessEvent(Func, &Parms);

	if (DebugModeState != nullptr)
		*DebugModeState = Parms.DebugModeState;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ToggleMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_DebugModes            Bit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ModeString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_DebugModeStateComponent_C*CallFunc_GetDebugModeState_DebugModeState                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ToggleMode(enum class E_DebugModes Bit, const class FString& ModeString, class UBP_DebugModeStateComponent_C* CallFunc_GetDebugModeState_DebugModeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ToggleMode");

	Params::UBP_DebugModeComponent_C_ToggleMode_Params Parms{};

	Parms.Bit = Bit;
	Parms.ModeString = ModeString;
	Parms.CallFunc_GetDebugModeState_DebugModeState = CallFunc_GetDebugModeState_DebugModeState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ModeIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_DebugModes            DebugMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeStateComponent_C*CallFunc_GetDebugModeState_DebugModeState                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsModeActive_IsModeActive                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ModeIsActive(enum class E_DebugModes DebugMode, bool* IsActive, class UBP_DebugModeStateComponent_C* CallFunc_GetDebugModeState_DebugModeState, bool CallFunc_IsModeActive_IsModeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ModeIsActive");

	Params::UBP_DebugModeComponent_C_ModeIsActive_Params Parms{};

	Parms.DebugMode = DebugMode;
	Parms.CallFunc_GetDebugModeState_DebugModeState = CallFunc_GetDebugModeState_DebugModeState;
	Parms.CallFunc_IsModeActive_IsModeActive = CallFunc_IsModeActive_IsModeActive;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DebugGenerateMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::DebugGenerateMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DebugGenerateMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StartRain
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::StartRain(const class FString& Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StartRain");

	Params::UBP_DebugModeComponent_C_StartRain_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StopRain
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::StopRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StopRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ResetWeatherToDefault
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ResetWeatherToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ResetWeatherToDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StartStorm
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::StartStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StartStorm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StopStorm
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::StopStorm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StopStorm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StartRainSpecific
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::StartRainSpecific(double Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StartRainSpecific");

	Params::UBP_DebugModeComponent_C_StartRainSpecific_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.StartStormSpecific
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::StartStormSpecific(double Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "StartStormSpecific");

	Params::UBP_DebugModeComponent_C_StartStormSpecific_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetupWeather
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                 TemperatureCurve                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             TemperatureMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TemperatureMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SetupWeather(class UCurveFloat* TemperatureCurve, double TemperatureMin, double TemperatureMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetupWeather");

	Params::UBP_DebugModeComponent_C_SetupWeather_Params Parms{};

	Parms.TemperatureCurve = TemperatureCurve;
	Parms.TemperatureMin = TemperatureMin;
	Parms.TemperatureMax = TemperatureMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetupWeather_Clients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTemperatureProfile         Temperature_Profile                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_DebugModeComponent_C::SetupWeather_Clients(const struct FTemperatureProfile& Temperature_Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetupWeather_Clients");

	Params::UBP_DebugModeComponent_C_SetupWeather_Clients_Params Parms{};

	Parms.Temperature_Profile = Temperature_Profile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ResetTemperature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ResetTemperature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ResetTemperature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ResetTemperature_Client
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ResetTemperature_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ResetTemperature_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.IsRespiteSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::IsRespiteSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "IsRespiteSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.IsInRespiteRealm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::IsInRespiteRealm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "IsInRespiteRealm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.FillBars
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::FillBars()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "FillBars");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Encumbrance
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Encumbrance(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Encumbrance");

	Params::UBP_DebugModeComponent_C_Encumbrance_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HealAllInjuries
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::HealAllInjuries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HealAllInjuries");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.HealAllCurses
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::HealAllCurses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "HealAllCurses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyStatusEffect
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStatusEffectDataAsset*      Status_Effect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInfinite                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ApplyStatusEffect(class UStatusEffectDataAsset* Status_Effect, uint8 Level, bool IsInfinite, double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyStatusEffect");

	Params::UBP_DebugModeComponent_C_ApplyStatusEffect_Params Parms{};

	Parms.Status_Effect = Status_Effect;
	Parms.Level = Level;
	Parms.IsInfinite = IsInfinite;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveGameplayEffects
// (Net, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTagContainer>Tags                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DebugModeComponent_C::RemoveGameplayEffects(TArray<struct FGameplayTagContainer>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveGameplayEffects");

	Params::UBP_DebugModeComponent_C_RemoveGameplayEffects_Params Parms{};

	Parms.Tags = Tags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DebugCarryCapacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::DebugCarryCapacity(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DebugCarryCapacity");

	Params::UBP_DebugModeComponent_C_DebugCarryCapacity_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AddSpellToItemEntry
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTechniqueDataAsset>SpellRow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::AddSpellToItemEntry(const struct FInventoryEntry& ItemEntry, TSoftObjectPtr<class UTechniqueDataAsset> SpellRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AddSpellToItemEntry");

	Params::UBP_DebugModeComponent_C_AddSpellToItemEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.SpellRow = SpellRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AddPerkToEntry
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FItemPerkDataReference      ItemPerk                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DebugModeComponent_C::AddPerkToEntry(const struct FInventoryEntry& ItemEntry, const struct FItemPerkDataReference& ItemPerk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AddPerkToEntry");

	Params::UBP_DebugModeComponent_C_AddPerkToEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.ItemPerk = ItemPerk;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TraceCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::TraceCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TraceCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TraceSelfCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::TraceSelfCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TraceSelfCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnPOI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        POIRowName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnPOI(class FName POIRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnPOI");

	Params::UBP_DebugModeComponent_C_SpawnPOI_Params Parms{};

	Parms.POIRowName = POIRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ListPOIs
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ListPOIs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ListPOIs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToPOI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToPOI(const class FString& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToPOI");

	Params::UBP_DebugModeComponent_C_TeleportToPOI_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ListPOIBPs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ListPOIBPs(const class FString& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ListPOIBPs");

	Params::UBP_DebugModeComponent_C_ListPOIBPs_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnPlug
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlugName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        POIName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnPlug(class FName PlugName, class FName POIName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnPlug");

	Params::UBP_DebugModeComponent_C_SpawnPlug_Params Parms{};

	Parms.PlugName = PlugName;
	Parms.POIName = POIName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.InstantRefinement
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::InstantRefinement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "InstantRefinement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Bored
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Bored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Bored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Sleepy
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Sleepy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Sleepy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Awake
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Awake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Awake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnVillager
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnVillager(const struct FDataTableRowHandle& NPCData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnVillager");

	Params::UBP_DebugModeComponent_C_SpawnVillager_Params Parms{};

	Parms.NPCData = NPCData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnNarrative
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPCData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnNarrative(const struct FDataTableRowHandle& NPCData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnNarrative");

	Params::UBP_DebugModeComponent_C_SpawnNarrative_Params Parms{};

	Parms.NPCData = NPCData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.BeginPlay_Encounters
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::BeginPlay_Encounters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "BeginPlay_Encounters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_SpawnEncounter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EncounterIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EncounterPlugName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Server_SpawnEncounter(int32 EncounterIndex, class FName EncounterPlugName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_SpawnEncounter");

	Params::UBP_DebugModeComponent_C_Server_SpawnEncounter_Params Parms{};

	Parms.EncounterIndex = EncounterIndex;
	Parms.EncounterPlugName = EncounterPlugName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_ClearEncounter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_ClearEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_ClearEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_ToggleEncounterPlacerVisibility
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_ToggleEncounterPlacerVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_ToggleEncounterPlacerVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_SetPlacerPositionToPlayerTransform
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_SetPlacerPositionToPlayerTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_SetPlacerPositionToPlayerTransform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_SetPlacerPositionToCameraRaycast
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_SetPlacerPositionToCameraRaycast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_SetPlacerPositionToCameraRaycast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnPossessedPawnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnPossessedPawnChanged");

	Params::UBP_DebugModeComponent_C_OnPossessedPawnChanged_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_ApplyFavour
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Selected_Option                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Server_ApplyFavour(const class FString& Selected_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_ApplyFavour");

	Params::UBP_DebugModeComponent_C_Server_ApplyFavour_Params Parms{};

	Parms.Selected_Option = Selected_Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_EncounterDirtyRealmReset
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_EncounterDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_EncounterDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToPortal
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Identifier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToPortal(class FName Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToPortal");

	Params::UBP_DebugModeComponent_C_TeleportToPortal_Params Parms{};

	Parms.Identifier = Identifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ActivateHealAbilityServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ActivateHealAbilityServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ActivateHealAbilityServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ShowCurrentInventory
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DumpToLog                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ShowCurrentInventory(bool DumpToLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ShowCurrentInventory");

	Params::UBP_DebugModeComponent_C_ShowCurrentInventory_Params Parms{};

	Parms.DumpToLog = DumpToLog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToPlayer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToPlayer(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToPlayer");

	Params::UBP_DebugModeComponent_C_TeleportToPlayer_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToLocation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToLocation");

	Params::UBP_DebugModeComponent_C_TeleportToLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportForward
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportForward(double Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportForward");

	Params::UBP_DebugModeComponent_C_TeleportForward_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Summon
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Summon(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Summon");

	Params::UBP_DebugModeComponent_C_Summon_Params Parms{};

	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.God
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::God()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "God");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Server_ToggleClimbing
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Server_ToggleClimbing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Server_ToggleClimbing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetEffectDuration
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SetEffectDuration(const struct FGameplayTag& Tag, double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetEffectDuration");

	Params::UBP_DebugModeComponent_C_SetEffectDuration_Params Parms{};

	Parms.Tag = Tag;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DebugClientEquipItem
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::DebugClientEquipItem(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DebugClientEquipItem");

	Params::UBP_DebugModeComponent_C_DebugClientEquipItem_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintLoadoutLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintLoadoutLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintLoadoutLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyInvertedVisionCurse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyInvertedVisionCurse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyInvertedVisionCurse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyInvertedControlsCurse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyInvertedControlsCurse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyInvertedControlsCurse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyDropEquippedItemCurse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyDropEquippedItemCurse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyDropEquippedItemCurse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplySprainedAnkleInjury
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplySprainedAnkleInjury()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplySprainedAnkleInjury");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyBrokenLegInjury
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyBrokenLegInjury()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyBrokenLegInjury");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplySprainedWristInjury
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplySprainedWristInjury()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplySprainedWristInjury");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyRandomCurse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyRandomCurse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyRandomCurse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyDisableSpellsCurse
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyDisableSpellsCurse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyDisableSpellsCurse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyDescensionBuff
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyDescensionBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyDescensionBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveDescensionBuff
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::RemoveDescensionBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveDescensionBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ArachnophobiaMode
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ArachnophobiaMode(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ArachnophobiaMode");

	Params::UBP_DebugModeComponent_C_ArachnophobiaMode_Params Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyBrokenArmInjury
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyBrokenArmInjury()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyBrokenArmInjury");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyInfiniteFed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyInfiniteFed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyInfiniteFed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveInfiniteFed
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::RemoveInfiniteFed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveInfiniteFed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyInfiniteRest
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyInfiniteRest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyInfiniteRest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveInfiniteRest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::RemoveInfiniteRest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveInfiniteRest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyTired
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyTired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyTired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyHungry
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ApplyHungry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyHungry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.CompleteStructure
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::CompleteStructure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "CompleteStructure");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DestroyStructure
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::DestroyStructure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DestroyStructure");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DestroyBuilding
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::DestroyBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DestroyBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.CompleteBuilding
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::CompleteBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "CompleteBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.KillCreatures
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::KillCreatures(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "KillCreatures");

	Params::UBP_DebugModeComponent_C_KillCreatures_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DestroyCreatures
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::DestroyCreatures(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DestroyCreatures");

	Params::UBP_DebugModeComponent_C_DestroyCreatures_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.KillCreaturesInRange
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::KillCreaturesInRange(double Range, const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "KillCreaturesInRange");

	Params::UBP_DebugModeComponent_C_KillCreaturesInRange_Params Parms{};

	Parms.Range = Range;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DestroyCreaturesInRange
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::DestroyCreaturesInRange(double Range, const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DestroyCreaturesInRange");

	Params::UBP_DebugModeComponent_C_DestroyCreaturesInRange_Params Parms{};

	Parms.Range = Range;
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnBound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::SpawnBound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnBound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GoToCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::GoToCreature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GoToCreature");

	Params::UBP_DebugModeComponent_C_GoToCreature_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnXBound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfBound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnXBound(int32 NumberOfBound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnXBound");

	Params::UBP_DebugModeComponent_C_SpawnXBound_Params Parms{};

	Parms.NumberOfBound = NumberOfBound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintCreatureManager
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintCreatureManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintCreatureManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.MultiPrintCreatureManager
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::MultiPrintCreatureManager(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "MultiPrintCreatureManager");

	Params::UBP_DebugModeComponent_C_MultiPrintCreatureManager_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ToggleAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ToggleAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ToggleAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.MulticastNWXPrint
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LogMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            LogCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPrintToScreen                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPrintToLog                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuppressStackTrace                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::MulticastNWXPrint(const class FString& LogMessage, enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, bool bPrintToScreen, bool bPrintToLog, bool bSuppressStackTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "MulticastNWXPrint");

	Params::UBP_DebugModeComponent_C_MulticastNWXPrint_Params Parms{};

	Parms.LogMessage = LogMessage;
	Parms.NWXLogLevel = NWXLogLevel;
	Parms.LogCategory = LogCategory;
	Parms.bPrintToScreen = bPrintToScreen;
	Parms.bPrintToLog = bPrintToLog;
	Parms.bSuppressStackTrace = bSuppressStackTrace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ForceRespawns
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ForceRespawns(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ForceRespawns");

	Params::UBP_DebugModeComponent_C_ForceRespawns_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ZoneDebugStartAll
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ZoneDebugStartAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ZoneDebugStartAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ZoneDebugStopAll
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ZoneDebugStopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ZoneDebugStopAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TeleportToCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TeleportToCreature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TeleportToCreature");

	Params::UBP_DebugModeComponent_C_TeleportToCreature_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SpawnerDebug
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SpawnerDebug(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SpawnerDebug");

	Params::UBP_DebugModeComponent_C_SpawnerDebug_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TraceCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TraceCreature(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TraceCreature");

	Params::UBP_DebugModeComponent_C_TraceCreature_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Minions25
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Minions25()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Minions25");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Minions50
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Minions50()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Minions50");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Minions100
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Minions100()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Minions100");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.EndMinions
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::EndMinions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "EndMinions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Anger
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Anger(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Anger");

	Params::UBP_DebugModeComponent_C_Anger_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AddTagToSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::AddTagToSelf(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AddTagToSelf");

	Params::UBP_DebugModeComponent_C_AddTagToSelf_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerAddTagToSelf
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerAddTagToSelf(const struct FGameplayTag& Tag, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerAddTagToSelf");

	Params::UBP_DebugModeComponent_C_ServerAddTagToSelf_Params Parms{};

	Parms.Tag = Tag;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Dogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Are                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Excellent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Dogs(const class FString& Are, const class FString& Excellent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Dogs");

	Params::UBP_DebugModeComponent_C_Dogs_Params Parms{};

	Parms.Are = Are;
	Parms.Excellent = Excellent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerDogsAreExcellent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ServerDogsAreExcellent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerDogsAreExcellent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerSpawnSpawner
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         RowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerSpawnSpawner(const struct FDataTableRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerSpawnSpawner");

	Params::UBP_DebugModeComponent_C_ServerSpawnSpawner_Params Parms{};

	Parms.RowHandle = RowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DisableAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::DisableAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DisableAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.EnableAI
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::EnableAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "EnableAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerSpawnFarSpawner
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         RowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerSpawnFarSpawner(const struct FDataTableRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerSpawnFarSpawner");

	Params::UBP_DebugModeComponent_C_ServerSpawnFarSpawner_Params Parms{};

	Parms.RowHandle = RowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::TimeOfDayChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TimeOfDayChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TimeOfDayUpdatesDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TimeOfDayUpdatesDisabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TimeOfDayUpdatesDisabled(bool TimeOfDayUpdatesDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TimeOfDayUpdatesDisabled");

	Params::UBP_DebugModeComponent_C_TimeOfDayUpdatesDisabled_Params Parms{};

	Parms.TimeOfDayUpdatesDisabled = TimeOfDayUpdatesDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ClientSetCurrentRealmProfile
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TimeOfDay             TimeOfDay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ClientSetCurrentRealmProfile(enum class E_TimeOfDay TimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ClientSetCurrentRealmProfile");

	Params::UBP_DebugModeComponent_C_ClientSetCurrentRealmProfile_Params Parms{};

	Parms.TimeOfDay = TimeOfDay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ShowWeakpoints
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ShowWeakpoints(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ShowWeakpoints");

	Params::UBP_DebugModeComponent_C_ShowWeakpoints_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveTagFromSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::RemoveTagFromSelf(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveTagFromSelf");

	Params::UBP_DebugModeComponent_C_RemoveTagFromSelf_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerRemoveTagFromSelf
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerRemoveTagFromSelf(const struct FGameplayTag& Tag, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerRemoveTagFromSelf");

	Params::UBP_DebugModeComponent_C_ServerRemoveTagFromSelf_Params Parms{};

	Parms.Tag = Tag;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerSpawnDebugMovement
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         RowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerSpawnDebugMovement(const struct FDataTableRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerSpawnDebugMovement");

	Params::UBP_DebugModeComponent_C_ServerSpawnDebugMovement_Params Parms{};

	Parms.RowHandle = RowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.TagCreature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::TagCreature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "TagCreature");

	Params::UBP_DebugModeComponent_C_TagCreature_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.UntagCreature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::UntagCreature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "UntagCreature");

	Params::UBP_DebugModeComponent_C_UntagCreature_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerTagCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerTagCreature(const struct FGameplayTag& Tag, class APawn* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerTagCreature");

	Params::UBP_DebugModeComponent_C_ServerTagCreature_Params Parms{};

	Parms.Tag = Tag;
	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerUntagCreature
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerUntagCreature(const struct FGameplayTag& Tag, class APawn* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerUntagCreature");

	Params::UBP_DebugModeComponent_C_ServerUntagCreature_Params Parms{};

	Parms.Tag = Tag;
	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DestroyCorpses
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::DestroyCorpses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DestroyCorpses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Min1Health
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::Min1Health()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Min1Health");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AutoRevive
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::AutoRevive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AutoRevive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Creature Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Creature_Added(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Creature Added");

	Params::UBP_DebugModeComponent_C_Creature_Added_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.BeginPlay_Creatures
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::BeginPlay_Creatures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "BeginPlay_Creatures");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ServerSpawnSpawnerWithGivenRealmPower
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Spawner_Handle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ServerSpawnSpawnerWithGivenRealmPower(const struct FDataTableRowHandle& Spawner_Handle, int32 Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ServerSpawnSpawnerWithGivenRealmPower");

	Params::UBP_DebugModeComponent_C_ServerSpawnSpawnerWithGivenRealmPower_Params Parms{};

	Parms.Spawner_Handle = Spawner_Handle;
	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.CreatureAddedSetRealmPower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::CreatureAddedSetRealmPower(class ABP_CreatureBase_C* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "CreatureAddedSetRealmPower");

	Params::UBP_DebugModeComponent_C_CreatureAddedSetRealmPower_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_DebugPrint
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LogMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            LogCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPrintToScreen                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPrintToLog                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_DebugPrint(const class FString& LogMessage, enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, bool bPrintToScreen, bool bPrintToLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_DebugPrint");

	Params::UBP_DebugModeComponent_C_Client_DebugPrint_Params Parms{};

	Parms.LogMessage = LogMessage;
	Parms.NWXLogLevel = NWXLogLevel;
	Parms.LogCategory = LogCategory;
	Parms.bPrintToScreen = bPrintToScreen;
	Parms.bPrintToLog = bPrintToLog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintHitInfo
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintHitInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintHitInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_DebugDrawSphere
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Segments                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LineColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_DebugDrawSphere(const struct FVector& Center, double Radius, int32 Segments, const struct FLinearColor& LineColor, double Duration, double Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_DebugDrawSphere");

	Params::UBP_DebugModeComponent_C_Client_DebugDrawSphere_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.Segments = Segments;
	Parms.LineColor = LineColor;
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintLookInfo
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintLookInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintLookInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.SetMaterialCollectionParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CollectionName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::SetMaterialCollectionParameter(const class FString& CollectionName, class FName ParameterName, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "SetMaterialCollectionParameter");

	Params::UBP_DebugModeComponent_C_SetMaterialCollectionParameter_Params Parms{};

	Parms.CollectionName = CollectionName;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_DebugDrawLine
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineEnd                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LineColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_DebugDrawLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, double Duration, double Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_DebugDrawLine");

	Params::UBP_DebugModeComponent_C_Client_DebugDrawLine_Params Parms{};

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;
	Parms.LineColor = LineColor;
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintGroups
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintGroups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintGroups");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.CreateGroup
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::CreateGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "CreateGroup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GroupCreationComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DebugModeComponent_C::GroupCreationComplete(const class FString& GroupID, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GroupCreationComplete");

	Params::UBP_DebugModeComponent_C_GroupCreationComplete_Params Parms{};

	Parms.GroupID = GroupID;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AddToGroup
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::AddToGroup(const class FString& GroupID, const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AddToGroup");

	Params::UBP_DebugModeComponent_C_AddToGroup_Params Parms{};

	Parms.GroupID = GroupID;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.AddToGroupComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DebugModeComponent_C::AddToGroupComplete(struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "AddToGroupComplete");

	Params::UBP_DebugModeComponent_C_AddToGroupComplete_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.IsInGroup
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Group_Id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::IsInGroup(const class FString& Group_Id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "IsInGroup");

	Params::UBP_DebugModeComponent_C_IsInGroup_Params Parms{};

	Parms.Group_Id = Group_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintGroup
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::PrintGroup(const class FString& GroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintGroup");

	Params::UBP_DebugModeComponent_C_PrintGroup_Params Parms{};

	Parms.GroupID = GroupID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.GetGroupDetailsComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroup                      Group                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DebugModeComponent_C::GetGroupDetailsComplete(struct FGroup& Group, struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "GetGroupDetailsComplete");

	Params::UBP_DebugModeComponent_C_GetGroupDetailsComplete_Params Parms{};

	Parms.Group = Group;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.RemoveMyGroups
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::RemoveMyGroups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "RemoveMyGroups");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnRemoveFromGroupComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineServiceStatus        Status                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_DebugModeComponent_C::OnRemoveFromGroupComplete(struct FOnlineServiceStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnRemoveFromGroupComplete");

	Params::UBP_DebugModeComponent_C_OnRemoveFromGroupComplete_Params Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintImpactInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintImpactInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintImpactInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ApplyAreaEffect
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EffectName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ApplyAreaEffect(const class FString& EffectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ApplyAreaEffect");

	Params::UBP_DebugModeComponent_C_ApplyAreaEffect_Params Parms{};

	Parms.EffectName = EffectName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintHarvestInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintHarvestInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintHarvestInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.PrintFoodConsumptionInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::PrintFoodConsumptionInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "PrintFoodConsumptionInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_DebugDrawString
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TextLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      TestBaseActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_DebugDrawString(const struct FVector& TextLocation, const class FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_DebugDrawString");

	Params::UBP_DebugModeComponent_C_Client_DebugDrawString_Params Parms{};

	Parms.TextLocation = TextLocation;
	Parms.Text = Text;
	Parms.TestBaseActor = TestBaseActor;
	Parms.TextColor = TextColor;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_BindPostAttack
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_BindPostAttack(class ABP_Character_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_BindPostAttack");

	Params::UBP_DebugModeComponent_C_Client_BindPostAttack_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.Client_UnbindPostAttack
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::Client_UnbindPostAttack(class ABP_Character_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "Client_UnbindPostAttack");

	Params::UBP_DebugModeComponent_C_Client_UnbindPostAttack_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.ExecuteUbergraph_BP_DebugModeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Level_3                                       (ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrecipitationProfile       K2Node_MakeStruct_PrecipitationProfile                           (NoDestructor)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrecipitationProfile       K2Node_MakeStruct_PrecipitationProfile_1                         (NoDestructor)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStormProfile               K2Node_MakeStruct_StormProfile                                   (NoDestructor)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_4                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStormProfile               K2Node_MakeStruct_StormProfile_1                                 (NoDestructor)
// double                             K2Node_CustomEvent_Level_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_5                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrecipitationProfile       K2Node_MakeStruct_PrecipitationProfile_2                         (NoDestructor)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Level_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_5                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStormProfile               K2Node_MakeStruct_StormProfile_2                                 (NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_6                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_6                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetTimeOfDayManager_TimeOfDayManager_6                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_CustomEvent_TemperatureCurve                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TemperatureMin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TemperatureMax                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTemperatureProfile         K2Node_CustomEvent_Temperature_Profile                           (NoDestructor)
// struct FTemperatureProfile         K2Node_MakeStruct_TemperatureProfile                             (NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_9                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_10                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_11                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveRespitePoint_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_11                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInRespiteRealm_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ON                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_12                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_13                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectDataAsset*      K2Node_CustomEvent_Status_Effect                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsInfinite                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_14                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectHandle         CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyInfiniteStatusEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectHandle         CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyTimedStatusEffect_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTagContainer>K2Node_CustomEvent_Tags                                          (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystem_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_15                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_12                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_16                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_13                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_17                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_14                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_18                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_15                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_19                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_16                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_20                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_17                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry_1                                   (None)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_CustomEvent_SpellRow                                      (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_21                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry                                     (None)
// struct FItemPerkDataReference      K2Node_CustomEvent_ItemPerk                                      (None)
// TArray<struct FItemPerkDataReference>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_22                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateItem_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_3                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_23                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_18                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_24                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_19                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_POIRowName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_7                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Target_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_7                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_POIConfig_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_25                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_26                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_27                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_32                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Target                                        (ZeroConstructor, HasGetValueTypeHash)
// TArray<class ABP_POIBase_C*>       CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_PlugName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_POIName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_28                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_29                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_20                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_33                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_21                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_34                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_30                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_22                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_35                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_31                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_23                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_36                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_21                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Creature_NPC_Villager_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// class ABP_Creature_NPC_Villager_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Creature_NPC_Villager_C*>CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Villager_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_NPCData_1                                     (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_NPCData                                       (NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_32                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_37                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_24                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_38                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureSpawnerBase_C*>CallFunc_GetSpawnersWithTag_Spawners                             (ReferenceParm)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_22                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_33                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_25                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_39                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_34                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_23                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_26                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_40                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_24                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_35                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_36                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_27                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_41                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_25                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_37                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_28                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_42                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_26                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_38                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_39                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_EncounterIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_EncounterPlugName                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_43                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_40                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_44                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_45                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetRaycastEndpoints_Start                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRaycastEndpoints_End                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_41                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_46                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_47                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array_3                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetRaycastEndpoints_Start_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRaycastEndpoints_End_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXLineTraceMulti_OutHits                               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceMulti_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_42                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_2                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_DynamicCast_AsController_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_48                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_Gym_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Selected_Option                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FEncounterFavourData>CallFunc_GenerateFavourRewards_ReturnValue                       (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_49                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_43                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_8                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_8                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_50                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_44                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_29                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_51                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_27                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_45                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_52                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_46                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_30                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_53                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_47                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_28                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_31                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_54                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_29                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_48                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_32                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_55                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_49                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_30                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_33                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_56                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_31                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_50                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_34                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_57                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_32                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_51                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Identifier                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_35                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_58                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_DeploymentPortal_C*>CallFunc_GetAllActorsOfClass_OutActors_4                         (ReferenceParm)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_33                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeploymentPortal_C*      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_52                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_59                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_53                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_36                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_60                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_34                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_54                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DumpToLog                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_61                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilityByClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_35                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerName_2                                  (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_NWXLineTraceMulti_OutHits_1                             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceMulti_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_4                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Distance                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerName_1                                  (ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_55                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_56                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_62                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_63                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_57                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_64                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_58                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_65                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_59                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_66                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_60                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_17                                        (NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_67                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameplayEffectCount_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_61                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_68                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_9                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_69                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_Array_Get_Item_5                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveEffectsWithAllTags_ReturnValue                 (ReferenceParm)
// struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item_6                                        (NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item_7                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGameplayEffectDurationHandle_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_C*         K2Node_DynamicCast_AsAIC_Creature_NPC                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_70                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutStartPoint                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutEndPoint                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_4                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutEquipInterface>K2Node_DynamicCast_AsLoadout_Equip_Interface                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_71                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_5                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_62                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class FString                      CallFunc_GetFunctionName_ReturnValue_6                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_7                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_72                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries_1                                   (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item_8                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               CallFunc_GetItemType_ItemType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_10                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_63                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class AController*                 K2Node_DynamicCast_AsController_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_73                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_11                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_40                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_64                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_74                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_41                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_12                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_42                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_43                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_65                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_75                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_44                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_13                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_45                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_46                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_66                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_76                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_47                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_14                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_48                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_7                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_49                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_67                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_POIConfig_C*             CallFunc_Array_Get_Item_9                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_9                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_77                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_15                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Vector3fToString_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_50                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_8                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_51                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_52                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelAwareComponent*        CallFunc_GetComponentByClass_ReturnValue_9                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AStreamingLevelProxyActor*   CallFunc_GetLevelProxy_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Vector3fToString_ReturnValue_1                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_53                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_68                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_10                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_78                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_16                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_54                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_10                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_55                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_56                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_69                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_11                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_79                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_57                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_17                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_58                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_11                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_59                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_70                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_12                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_80                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_60                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_18                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_61                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_12                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_62                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_71                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_63                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_3                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_64                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_72                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Bool                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_65                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_4                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_66                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_73                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_67                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller_11                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_81                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_68                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_10                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_82                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_69                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArachnophobiaModeEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_74                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_75                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_13                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_83                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_14                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_84                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_19                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_20                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_70                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_71                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_5                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InjuryComponent_C*       CallFunc_GetComponentByClass_ReturnValue_13                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_72                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_73                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_74                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_75                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_76                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_15                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_85                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_76                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_21                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_77                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_6                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_78                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_77                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_11                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_16                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_86                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_22                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_79                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_7                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_80                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_81                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_82                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_78                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_17                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_87                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_83                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_23                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_84                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_8                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_85                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_79                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_18                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_88                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_24                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_86                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_9                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_87                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_88                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_80                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_19                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_89                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_25                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_89                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_10                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_1                          (None)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_90                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_91                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_81                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_82                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_37                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_90                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_38                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_91                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_36                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_37                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_83                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_84                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_39                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_92                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_40                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_93                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_38                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_39                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_85                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_41                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_94                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_86                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_40                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_42                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_95                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_41                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_87                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_88                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_43                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_96                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_44                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_97                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_42                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_43                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_89                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_90                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_45                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_98                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_46                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_99                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_44                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_45                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_91                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_6                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_47                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_100                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_46                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_92                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_48                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_101                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_47                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_93                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_94                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_49                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_102                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_50                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_103                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_48                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_49                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_95                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_51                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_104                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_50                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_96                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_97                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_52                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_105                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_53                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_106                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_51                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_52                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_98                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_99                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_54                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_107                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_53                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_100                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_55                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_108                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_54                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_101                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_56                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_109                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_55                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_102                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_57                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_110                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_7                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_56                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_103                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_104                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_58                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_111                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_57                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_105                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_8                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_59                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_112                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_58                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_FindTargetStructures_Hits                               (ReferenceParm, ContainsInstancedReference)
// struct FHitResult                  CallFunc_Array_Get_Item_12                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetHitObject_OutObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDestroyableInterface>K2Node_DynamicCast_AsStructure_Destroyable_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_113                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_FindTargetStructures_Hits_1                             (ReferenceParm, ContainsInstancedReference)
// struct FHitResult                  CallFunc_Array_Get_Item_13                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetHitObject_OutObject_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_114                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDestroyableInterface>K2Node_DynamicCast_AsStructure_Destroyable_Interface_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_115                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_92                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetOwnerCharacter_AsBP_Character_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_9                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_FindTargetStructures_Hits_2                             (ReferenceParm, ContainsInstancedReference)
// struct FHitResult                  CallFunc_Array_Get_Item_14                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetHitObject_OutObject_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_116                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_93                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_FindTargetStructures_Hits_3                             (ReferenceParm, ContainsInstancedReference)
// struct FGameplayTag                Temp_struct_Variable_10                                          (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_15                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_GetHitObject_OutObject_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_117                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_118                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_119                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_94                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_SetStructureSchematicState_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_95                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item_16                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_96                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_97                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_106                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_60                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_120                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_59                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_107                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_61                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_121                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_108                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_60                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_62                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_122                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_61                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_109                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_16                                        (NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_63                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_123                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_15                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_62                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_98                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_99                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Range_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_14                                        (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_110                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_100                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Range                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_13                                        (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_111                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_101                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_12                                        (NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumberOfBound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_124                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_102                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_String                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_LogMessage_1                                  (ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            K2Node_CustomEvent_NWXLogLevel_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            K2Node_CustomEvent_LogCategory_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPrintToScreen_1                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPrintToLog_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuppressStackTrace                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_125                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAI_Enabled_AIEnabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_GameplayTag                                   (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_11                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_10                                        (NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_126                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_103                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_8                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_127                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_104                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Command                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_9                                         (NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_BoundMiasma_C*CallFunc_Array_Get_Item_17                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_105                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_8                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_7                                         (NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_Controller_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_112                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_26                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_20                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_128                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Are                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Excellent                                     (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_113                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_21                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_129                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item_18                                       (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_27                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class ABP_CreatureSpawner_Wildlife_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_RowHandle_2                                   (NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_9                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_130                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_10                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAI_Enabled_AIEnabled_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_131                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_106                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAI_Enabled_AIEnabled_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_114                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_RowHandle_1                                   (NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_22                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_132                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_28                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_9                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_2                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameMode_C*              K2Node_DynamicCast_AsBP_Game_Mode                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_133                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_SpawnSpawner_Spawner                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_107                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_108                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TimeOfDayUpdatesDisabled                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_10                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_GameMode_C*              K2Node_DynamicCast_AsBP_Game_Mode_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_134                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_109                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_110                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TimeOfDay             K2Node_CustomEvent_TimeOfDay                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_6                                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_11                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_12                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_111                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_112                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_Array_Get_Item_19                                       (None)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_5                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_4                                         (NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_Controller                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_115                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_29                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_23                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_135                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_RowHandle                                     (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_116                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_24                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_136                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_3                                         (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_30                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_TraceToGetCreature_Creature                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_3                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_SpawnSpawner_Spawner_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_2                                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Creature_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_CustomEvent_Creature_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_113                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_114                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_TraceToGetCreature_Creature_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_13                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CreatureBase_C*>  CallFunc_GetAllActorsOfClass_OutActors_5                         (ReferenceParm)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_137                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item_20                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_115                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_116                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetManagerDataString_DataString                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_117                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_25                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_138                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_117                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_31                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_11                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_118                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_119                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_CustomEvent_Creature_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_118                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_139                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_140                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_32                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_Spawner_Handle                                (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Power                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_119                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController_26                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_141                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_33                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_4                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_CustomEvent_Creature                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   CallFunc_SpawnSpawner_Spawner_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_120                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_121                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_64                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_142                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_65                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_143                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_63                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_64                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_122                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_123                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_66                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_144                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_67                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_145                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_65                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_66                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_124                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_68                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_146                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_14                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_67                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_147                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_125                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager_15                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_69                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_148                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_149                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_68                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_126                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_127                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_70                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_150                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_71                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_151                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_69                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_70                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_128                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_72                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_152                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_71                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_129                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_73                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_153                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_130                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_72                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_74                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_154                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_73                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_131                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_75                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_155                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_132                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_74                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_76                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_156                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_75                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_133                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_77                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_157                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_134                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_76                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_78                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_158                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_77                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_135                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_79                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_159                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_136                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_78                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_80                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_160                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_79                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_137                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_81                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_161                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_138                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_80                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_82                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_162                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_81                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_139                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_83                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_163                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_140                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_82                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_84                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_164                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_83                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_141                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_142                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_85                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_165                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_86                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_166                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_84                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_85                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_143                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_87                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_167                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_144                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_86                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_88                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_168                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_87                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_145                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_89                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_169                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_88                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_146                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_90                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_170                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_147                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_89                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_91                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_171                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_90                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_148                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_92                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_172                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_149                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_91                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_93                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_173                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_92                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_150                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_94                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_174                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_151                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_93                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_95                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_175                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_94                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_152                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_153                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_96                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_176                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_97                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_177                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_95                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_96                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_154                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_LogMessage                                    (ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            K2Node_CustomEvent_NWXLogLevel                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            K2Node_CustomEvent_LogCategory                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPrintToScreen                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPrintToLog                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_98                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_178                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_97                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Center                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Segments                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_LineColor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Thickness_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_CollectionName                                (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ParameterName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_155                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialParameterCollection*CallFunc_FindMaterialCollectionByName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_120                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LineStart                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LineEnd                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_LineColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Thickness                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_GroupId_2                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineServiceStatus        K2Node_CustomEvent_Status_3                                      (ConstParm)
// class FString                      K2Node_CustomEvent_GroupId_1                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerName                                    (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetPlayerStateByName_Player_State                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetGroups_ReturnValue                                   (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_21                                       (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_20                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FOnlineServiceStatus        K2Node_CustomEvent_Status_2                                      (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_121                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class FString                      K2Node_CustomEvent_Group_Id                                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_3                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInGroup_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_GroupId                                       (ZeroConstructor, HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_4                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGroup                      K2Node_CustomEvent_Group                                         (ConstParm)
// struct FOnlineServiceStatus        K2Node_CustomEvent_Status_1                                      (ConstParm)
// struct FMember                     CallFunc_Array_Get_Item_22                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue_21                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_5                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_8                                         (ReferenceParm)
// TArray<class FString>              CallFunc_GetGroups_ReturnValue_1                                 (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FString                      CallFunc_Array_Get_Item_23                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_22                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGroupComponentBase*         CallFunc_GetGroupComponent_Group_Component_6                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FOnlineServiceStatus        K2Node_CustomEvent_Status                                        (ConstParm)
// class ABP_PlayerState_C*           CallFunc_GetOwnerPlayerState_AsBP_Player_State                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_9                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_9                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_122                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetOwnerPlayerState_AsBP_Player_State_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_123                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EffectName                                    (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_156                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_TextLocation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Text                                          (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TestBaseActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_TextColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_Character_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_124                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_125                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_157                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_99                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_179                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_158                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_98                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_100                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_180                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_99                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_159                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_101                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_181                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_100                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterFavourData        CallFunc_Array_Get_Item_24                                       (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectHandle         CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle_1       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyTimedStatusEffect_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_160                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_161                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_102                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_182                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_103                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_183                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_101                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_102                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_162                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_163                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_104                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_184                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_105                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_185                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_103                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_104                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_164                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_106                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_186                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue_105                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationBase_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_PrecipitationBase_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_RampUpRange_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Minimum_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Maximum_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetForwardLinecast_MinRange_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGameplayEffectDurationHandle_NewDuration_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_Conv_Vector3fToString_InVec_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_Conv_Vector3fToString_InVec_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Thickness_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugLine_Duration_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugLine_Thickness_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugString_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::ExecuteUbergraph_BP_DebugModeComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, TSubclassOf<class IInterface> Temp_class_Variable, const class FString& K2Node_CustomEvent_Level_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, const struct FPrecipitationProfile& K2Node_MakeStruct_PrecipitationProfile, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_1, bool K2Node_DynamicCast_bSuccess_2, const struct FPrecipitationProfile& K2Node_MakeStruct_PrecipitationProfile_1, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_1, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_2, bool K2Node_DynamicCast_bSuccess_3, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_2, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_3, bool K2Node_DynamicCast_bSuccess_4, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_3, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_4, bool K2Node_DynamicCast_bSuccess_5, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_4, const struct FStormProfile& K2Node_MakeStruct_StormProfile, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_4, const struct FStormProfile& K2Node_MakeStruct_StormProfile_1, double K2Node_CustomEvent_Level_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_5, const struct FPrecipitationProfile& K2Node_MakeStruct_PrecipitationProfile_2, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_5, bool K2Node_DynamicCast_bSuccess_6, double K2Node_CustomEvent_Level_1, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_5, double CallFunc_FClamp_ReturnValue, const struct FStormProfile& K2Node_MakeStruct_StormProfile_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_6, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_6, bool K2Node_DynamicCast_bSuccess_7, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_6, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager_6, class UCurveFloat* K2Node_CustomEvent_TemperatureCurve, double K2Node_CustomEvent_TemperatureMin, double K2Node_CustomEvent_TemperatureMax, const struct FTemperatureProfile& K2Node_CustomEvent_Temperature_Profile, const struct FTemperatureProfile& K2Node_MakeStruct_TemperatureProfile, int32 Temp_int_Array_Index_Variable_5, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_8, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_CanUseSupportCommands_ReturnValue_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_CanUseSupportCommands_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_3, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_CanUseSupportCommands_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_4, bool K2Node_DynamicCast_bSuccess_11, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_CanUseSupportCommands_ReturnValue_4, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_5, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_CanUseSupportCommands_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_6, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_6, bool K2Node_DynamicCast_bSuccess_13, class AActor* CallFunc_GetOwner_ReturnValue_7, bool CallFunc_CanUseSupportCommands_ReturnValue_6, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_7, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_CanUseSupportCommands_ReturnValue_7, class AActor* CallFunc_GetOwner_ReturnValue_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_8, bool K2Node_DynamicCast_bSuccess_15, class AActor* CallFunc_GetOwner_ReturnValue_9, bool CallFunc_CanUseSupportCommands_ReturnValue_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_9, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_CanUseSupportCommands_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_10, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_10, bool K2Node_DynamicCast_bSuccess_17, class AActor* CallFunc_GetOwner_ReturnValue_11, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_11, bool K2Node_DynamicCast_bSuccess_18, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_CustomEvent_ON, class AActor* CallFunc_GetOwner_ReturnValue_12, class AActor* CallFunc_GetOwner_ReturnValue_13, class UStatusEffectDataAsset* K2Node_CustomEvent_Status_Effect, uint8 K2Node_CustomEvent_Level, bool K2Node_CustomEvent_IsInfinite, double K2Node_CustomEvent_Duration_4, class AActor* CallFunc_GetOwner_ReturnValue_14, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_19, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess_20, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_21, const struct FStatusEffectHandle& CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyInfiniteStatusEffect_ReturnValue, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FGameplayTagContainer>& K2Node_CustomEvent_Tags, int32 CallFunc_Array_Length_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystem_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_15, int32 Temp_int_Array_Index_Variable_6, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_12, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_CanUseSupportCommands_ReturnValue_10, class AActor* CallFunc_GetOwner_ReturnValue_16, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_13, bool K2Node_DynamicCast_bSuccess_23, class AActor* CallFunc_GetOwner_ReturnValue_17, bool CallFunc_CanUseSupportCommands_ReturnValue_11, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_14, bool K2Node_DynamicCast_bSuccess_24, bool CallFunc_CanUseSupportCommands_ReturnValue_12, class AActor* CallFunc_GetOwner_ReturnValue_18, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_15, bool K2Node_DynamicCast_bSuccess_25, class AActor* CallFunc_GetOwner_ReturnValue_19, bool CallFunc_CanUseSupportCommands_ReturnValue_13, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_16, bool K2Node_DynamicCast_bSuccess_26, bool CallFunc_CanUseSupportCommands_ReturnValue_14, class AActor* CallFunc_GetOwner_ReturnValue_20, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_17, bool K2Node_DynamicCast_bSuccess_27, bool K2Node_CustomEvent_Active, bool CallFunc_CanUseSupportCommands_ReturnValue_15, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry_1, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_CustomEvent_SpellRow, int32 Temp_int_Array_Index_Variable_7, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue_21, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_UpdateItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, const struct FItemPerkDataReference& K2Node_CustomEvent_ItemPerk, TArray<struct FItemPerkDataReference>& K2Node_MakeArray_Array_1, class AActor* CallFunc_GetOwner_ReturnValue_22, int32 Temp_int_Array_Index_Variable_8, bool CallFunc_IsValid_ReturnValue_3, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container_1, bool CallFunc_GetBackpack_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_UpdateItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_23, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_18, bool K2Node_DynamicCast_bSuccess_28, class AActor* CallFunc_GetOwner_ReturnValue_24, bool CallFunc_CanUseSupportCommands_ReturnValue_16, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_19, bool K2Node_DynamicCast_bSuccess_29, bool CallFunc_CanUseSupportCommands_ReturnValue_17, int32 Temp_int_Array_Index_Variable_9, class FName K2Node_CustomEvent_POIRowName, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_7, const class FString& K2Node_CustomEvent_Target_1, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_7, bool K2Node_DynamicCast_bSuccess_30, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_6, TArray<class ABP_POIConfig_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_GetOwner_ReturnValue_25, int32 Temp_int_Loop_Counter_Variable_7, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_31, int32 CallFunc_Add_IntInt_ReturnValue_7, class AActor* CallFunc_GetOwner_ReturnValue_26, class AActor* CallFunc_GetOwner_ReturnValue_27, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_32, bool CallFunc_HasAuthority_ReturnValue, const class FString& K2Node_CustomEvent_Target, TArray<class ABP_POIBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FName K2Node_CustomEvent_PlugName, class FName K2Node_CustomEvent_POIName, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_28, class AActor* CallFunc_GetOwner_ReturnValue_29, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_20, bool K2Node_DynamicCast_bSuccess_33, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_21, bool K2Node_DynamicCast_bSuccess_34, bool CallFunc_CanUseSupportCommands_ReturnValue_18, bool CallFunc_CanUseSupportCommands_ReturnValue_19, class AActor* CallFunc_GetOwner_ReturnValue_30, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_22, bool K2Node_DynamicCast_bSuccess_35, bool CallFunc_CanUseSupportCommands_ReturnValue_20, class AActor* CallFunc_GetOwner_ReturnValue_31, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_23, bool K2Node_DynamicCast_bSuccess_36, bool CallFunc_CanUseSupportCommands_ReturnValue_21, int32 Temp_int_Loop_Counter_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_8, TArray<class ABP_Creature_NPC_Villager_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_Creature_NPC_Villager_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_Creature_NPC_Villager_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, const struct FLinearColor& Temp_struct_Variable, class ABP_Creature_NPC_Villager_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FDataTableRowHandle& K2Node_CustomEvent_NPCData_1, const struct FDataTableRowHandle& K2Node_CustomEvent_NPCData, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, class AActor* CallFunc_GetOwner_ReturnValue_32, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess_37, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_24, bool K2Node_DynamicCast_bSuccess_38, TArray<class ABP_CreatureSpawnerBase_C*>& CallFunc_GetSpawnersWithTag_Spawners, bool CallFunc_CanUseSupportCommands_ReturnValue_22, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_33, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_25, bool K2Node_DynamicCast_bSuccess_39, class AActor* CallFunc_GetOwner_ReturnValue_34, bool CallFunc_CanUseSupportCommands_ReturnValue_23, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_26, bool K2Node_DynamicCast_bSuccess_40, bool CallFunc_CanUseSupportCommands_ReturnValue_24, class AActor* CallFunc_GetOwner_ReturnValue_35, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_36, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_27, bool K2Node_DynamicCast_bSuccess_41, bool CallFunc_CanUseSupportCommands_ReturnValue_25, class AActor* CallFunc_GetOwner_ReturnValue_37, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_28, bool K2Node_DynamicCast_bSuccess_42, bool CallFunc_CanUseSupportCommands_ReturnValue_26, const struct FLinearColor& Temp_struct_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_38, class AActor* CallFunc_GetOwner_ReturnValue_39, int32 K2Node_CustomEvent_EncounterIndex, class FName K2Node_CustomEvent_EncounterPlugName, class AController* K2Node_DynamicCast_AsController_1, bool K2Node_DynamicCast_bSuccess_43, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, class AActor* CallFunc_GetOwner_ReturnValue_40, bool CallFunc_IsValid_ReturnValue_15, class AController* K2Node_DynamicCast_AsController_2, bool K2Node_DynamicCast_bSuccess_44, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_45, TArray<class UObject*>& K2Node_MakeArray_Array_2, const struct FVector& CallFunc_GetRaycastEndpoints_Start, const struct FVector& CallFunc_GetRaycastEndpoints_End, bool CallFunc_IsValid_ReturnValue_16, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_41, class AController* K2Node_DynamicCast_AsController_3, bool K2Node_DynamicCast_bSuccess_46, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_47, bool CallFunc_IsValid_ReturnValue_17, TArray<class UObject*>& K2Node_MakeArray_Array_3, const struct FVector& CallFunc_GetRaycastEndpoints_Start_1, const struct FVector& CallFunc_GetRaycastEndpoints_End_1, class APawn* K2Node_CustomEvent_OldPawn, class APawn* K2Node_CustomEvent_NewPawn, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXLineTraceMulti_OutHits, bool CallFunc_NWXLineTraceMulti_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_42, const struct FHitResult& CallFunc_Array_Get_Item_2, class AController* K2Node_DynamicCast_AsController_4, bool K2Node_DynamicCast_bSuccess_48, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, class ABP_Encounter_Gym_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable_10, const class FString& K2Node_CustomEvent_Selected_Option, TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_6, const struct FLinearColor& Temp_struct_Variable_2, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_2, bool K2Node_DynamicCast_bSuccess_49, bool CallFunc_IsValid_ReturnValue_19, class AActor* CallFunc_GetOwner_ReturnValue_43, bool CallFunc_HasAuthority_ReturnValue_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_8, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_8, bool K2Node_DynamicCast_bSuccess_50, class AActor* CallFunc_GetOwner_ReturnValue_44, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_29, bool K2Node_DynamicCast_bSuccess_51, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_CanUseSupportCommands_ReturnValue_27, class UObject* CallFunc_FindFirstImplementor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_45, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_52, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_21, class AActor* CallFunc_GetOwner_ReturnValue_46, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_30, bool K2Node_DynamicCast_bSuccess_53, class AActor* CallFunc_GetOwner_ReturnValue_47, bool CallFunc_CanUseSupportCommands_ReturnValue_28, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_31, bool K2Node_DynamicCast_bSuccess_54, bool CallFunc_CanUseSupportCommands_ReturnValue_29, class AActor* CallFunc_GetOwner_ReturnValue_48, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_32, bool K2Node_DynamicCast_bSuccess_55, class AActor* CallFunc_GetOwner_ReturnValue_49, bool CallFunc_CanUseSupportCommands_ReturnValue_30, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_33, bool K2Node_DynamicCast_bSuccess_56, bool CallFunc_CanUseSupportCommands_ReturnValue_31, class AActor* CallFunc_GetOwner_ReturnValue_50, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_34, bool K2Node_DynamicCast_bSuccess_57, int32 Temp_int_Array_Index_Variable_11, bool CallFunc_CanUseSupportCommands_ReturnValue_32, class AActor* CallFunc_GetOwner_ReturnValue_51, class FName K2Node_CustomEvent_Identifier, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_35, bool K2Node_DynamicCast_bSuccess_58, TArray<class ABP_DeploymentPortal_C*>& CallFunc_GetAllActorsOfClass_OutActors_4, bool CallFunc_CanUseSupportCommands_ReturnValue_33, class ABP_DeploymentPortal_C* CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_22, int32 CallFunc_Array_Length_ReturnValue_7, class AActor* CallFunc_GetOwner_ReturnValue_52, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_59, class AActor* CallFunc_GetOwner_ReturnValue_53, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_36, bool K2Node_DynamicCast_bSuccess_60, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_CanUseSupportCommands_ReturnValue_34, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_54, bool K2Node_CustomEvent_DumpToLog, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_61, int32 Temp_int_Loop_Counter_Variable_9, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_TryActivateAbilityByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_CanUseSupportCommands_ReturnValue_35, const struct FLinearColor& Temp_struct_Variable_3, const class FString& K2Node_CustomEvent_PlayerName_2, TArray<struct FHitResult>& CallFunc_NWXLineTraceMulti_OutHits_1, bool CallFunc_NWXLineTraceMulti_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_4, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, int32 CallFunc_Array_Length_ReturnValue_8, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location, double K2Node_CustomEvent_Distance, const class FString& K2Node_CustomEvent_PlayerName_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_55, class AActor* CallFunc_GetOwner_ReturnValue_56, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_4, bool K2Node_DynamicCast_bSuccess_62, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_5, bool K2Node_DynamicCast_bSuccess_63, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_24, class AActor* CallFunc_GetOwner_ReturnValue_57, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_6, bool K2Node_DynamicCast_bSuccess_64, class AActor* CallFunc_GetOwner_ReturnValue_58, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_7, bool K2Node_DynamicCast_bSuccess_65, class AActor* CallFunc_GetOwner_ReturnValue_59, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_8, bool K2Node_DynamicCast_bSuccess_66, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_60, const struct FGameplayTag& K2Node_CustomEvent_Tag_17, double K2Node_CustomEvent_Duration_3, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_9, bool K2Node_DynamicCast_bSuccess_67, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_25, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_27, class AActor* CallFunc_GetOwner_ReturnValue_61, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_10, bool K2Node_DynamicCast_bSuccess_68, bool CallFunc_IsValid_ReturnValue_28, class APawn* CallFunc_K2_GetPawn_ReturnValue_9, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, int32 Temp_int_Array_Index_Variable_12, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_69, class ABP_CreatureSpawnerBase_C* CallFunc_Array_Get_Item_5, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item_6, class ABP_CreatureBase_C* CallFunc_Array_Get_Item_7, bool CallFunc_SetGameplayEffectDurationHandle_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_29, class AAIC_Creature_NPC_C* K2Node_DynamicCast_AsAIC_Creature_NPC, bool K2Node_DynamicCast_bSuccess_70, float CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_10, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_31, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character_2, const struct FVector& CallFunc_GetForwardLinecast_OutStartPoint, const struct FVector& CallFunc_GetForwardLinecast_OutEndPoint, class APlayerController* K2Node_CustomEvent_PlayerController, const struct FGameplayTag& Temp_struct_Variable_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_4, TScriptInterface<class ILoadoutEquipInterface> K2Node_DynamicCast_AsLoadout_Equip_Interface, bool K2Node_DynamicCast_bSuccess_71, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_GetFunctionName_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class AActor* CallFunc_GetOwner_ReturnValue_62, bool CallFunc_IsValid_ReturnValue_32, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container_2, bool CallFunc_GetBackpack_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_33, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const class FString& CallFunc_GetFunctionName_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_GetFunctionName_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_34, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue_3, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_72, bool CallFunc_IsValid_ReturnValue_35, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_13, bool CallFunc_Less_IntInt_ReturnValue_4, enum class EItemType CallFunc_GetItemType_ItemType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_IsValid_ReturnValue_36, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_37, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const struct FGameplayTag& Temp_struct_Variable_5, class AActor* CallFunc_GetOwner_ReturnValue_63, TArray<class AActor*>& Temp_object_Variable, class AController* K2Node_DynamicCast_AsController_5, bool K2Node_DynamicCast_bSuccess_73, bool CallFunc_IsValid_ReturnValue_38, class APawn* CallFunc_K2_GetPawn_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_39, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_40, class AActor* CallFunc_GetOwner_ReturnValue_64, class AController* K2Node_DynamicCast_AsController_6, bool K2Node_DynamicCast_bSuccess_74, bool CallFunc_IsValid_ReturnValue_41, class APawn* CallFunc_K2_GetPawn_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_42, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_43, class AActor* CallFunc_GetOwner_ReturnValue_65, class AController* K2Node_DynamicCast_AsController_7, bool K2Node_DynamicCast_bSuccess_75, bool CallFunc_IsValid_ReturnValue_44, class APawn* CallFunc_K2_GetPawn_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_45, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_46, class AActor* CallFunc_GetOwner_ReturnValue_66, class AController* K2Node_DynamicCast_AsController_8, bool K2Node_DynamicCast_bSuccess_76, bool CallFunc_IsValid_ReturnValue_47, class APawn* CallFunc_K2_GetPawn_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_48, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_49, int32 Temp_int_Loop_Counter_Variable_11, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Array_Index_Variable_13, class AActor* CallFunc_GetOwner_ReturnValue_67, class ABP_POIConfig_C* CallFunc_Array_Get_Item_9, class AController* K2Node_DynamicCast_AsController_9, bool K2Node_DynamicCast_bSuccess_77, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_15, const class FString& CallFunc_Conv_Vector3fToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_50, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_51, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_52, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class ULevelAwareComponent* CallFunc_GetComponentByClass_ReturnValue_9, class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const class FString& CallFunc_BreakSoftObjectPath_PathString, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_Vector3fToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_53, class AActor* CallFunc_GetOwner_ReturnValue_68, bool Temp_bool_True_if_break_was_hit_Variable_1, class AController* K2Node_DynamicCast_AsController_10, bool K2Node_DynamicCast_bSuccess_78, class APawn* CallFunc_K2_GetPawn_ReturnValue_16, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_54, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_55, bool CallFunc_IsValid_ReturnValue_56, class AActor* CallFunc_GetOwner_ReturnValue_69, class AController* K2Node_DynamicCast_AsController_11, bool K2Node_DynamicCast_bSuccess_79, bool CallFunc_IsValid_ReturnValue_57, class APawn* CallFunc_K2_GetPawn_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_58, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_59, class AActor* CallFunc_GetOwner_ReturnValue_70, class AController* K2Node_DynamicCast_AsController_12, bool K2Node_DynamicCast_bSuccess_80, bool CallFunc_IsValid_ReturnValue_60, class APawn* CallFunc_K2_GetPawn_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_61, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_62, class AActor* CallFunc_GetOwner_ReturnValue_71, bool CallFunc_IsValid_ReturnValue_63, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_64, int32 Temp_int_Loop_Counter_Variable_12, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_72, bool K2Node_CustomEvent_Bool, bool CallFunc_IsValid_ReturnValue_65, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_4, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_66, class AActor* CallFunc_GetOwner_ReturnValue_73, bool CallFunc_IsValid_ReturnValue_67, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_11, bool K2Node_DynamicCast_bSuccess_81, bool CallFunc_IsValid_ReturnValue_68, int32 Temp_int_Array_Index_Variable_14, class APlayerState* CallFunc_Array_Get_Item_10, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_82, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_69, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_74, class AActor* CallFunc_GetOwner_ReturnValue_75, class AController* K2Node_DynamicCast_AsController_13, bool K2Node_DynamicCast_bSuccess_83, class AController* K2Node_DynamicCast_AsController_14, bool K2Node_DynamicCast_bSuccess_84, class APawn* CallFunc_K2_GetPawn_ReturnValue_19, class APawn* CallFunc_K2_GetPawn_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_70, bool CallFunc_IsValid_ReturnValue_71, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_5, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue_13, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_72, bool CallFunc_IsValid_ReturnValue_73, bool CallFunc_IsValid_ReturnValue_74, bool CallFunc_IsValid_ReturnValue_75, class AActor* CallFunc_GetOwner_ReturnValue_76, class AController* K2Node_DynamicCast_AsController_15, bool K2Node_DynamicCast_bSuccess_85, bool CallFunc_IsValid_ReturnValue_76, class APawn* CallFunc_K2_GetPawn_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_77, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_78, int32 Temp_int_Array_Index_Variable_15, class AActor* CallFunc_GetOwner_ReturnValue_77, class AActor* CallFunc_Array_Get_Item_11, class AController* K2Node_DynamicCast_AsController_16, bool K2Node_DynamicCast_bSuccess_86, const class FString& CallFunc_GetDisplayName_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_79, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_7, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_80, bool CallFunc_IsValid_ReturnValue_81, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_82, bool CallFunc_Contains_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_78, class AController* K2Node_DynamicCast_AsController_17, bool K2Node_DynamicCast_bSuccess_87, bool CallFunc_IsValid_ReturnValue_83, class APawn* CallFunc_K2_GetPawn_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_84, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_85, class AActor* CallFunc_GetOwner_ReturnValue_79, int32 Temp_int_Loop_Counter_Variable_13, class AController* K2Node_DynamicCast_AsController_18, bool K2Node_DynamicCast_bSuccess_88, class APawn* CallFunc_K2_GetPawn_ReturnValue_24, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_86, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_13, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_87, bool CallFunc_IsValid_ReturnValue_88, double CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold, class AActor* CallFunc_GetOwner_ReturnValue_80, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AController* K2Node_DynamicCast_AsController_19, bool K2Node_DynamicCast_bSuccess_89, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_25, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_89, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_10, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_90, bool CallFunc_IsValid_ReturnValue_91, double CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold, int32 Temp_int_Loop_Counter_Variable_14, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_8, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_14, class AActor* CallFunc_GetOwner_ReturnValue_81, class AActor* CallFunc_GetOwner_ReturnValue_82, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_37, bool K2Node_DynamicCast_bSuccess_90, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_38, bool K2Node_DynamicCast_bSuccess_91, bool CallFunc_CanUseSupportCommands_ReturnValue_36, bool CallFunc_CanUseSupportCommands_ReturnValue_37, class AActor* CallFunc_GetOwner_ReturnValue_83, class AActor* CallFunc_GetOwner_ReturnValue_84, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_39, bool K2Node_DynamicCast_bSuccess_92, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_40, bool K2Node_DynamicCast_bSuccess_93, bool CallFunc_CanUseSupportCommands_ReturnValue_38, bool CallFunc_CanUseSupportCommands_ReturnValue_39, int32 Temp_int_Array_Index_Variable_16, bool Temp_bool_True_if_break_was_hit_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_85, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_41, bool K2Node_DynamicCast_bSuccess_94, class AActor* CallFunc_GetOwner_ReturnValue_86, bool CallFunc_CanUseSupportCommands_ReturnValue_40, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_42, bool K2Node_DynamicCast_bSuccess_95, bool CallFunc_CanUseSupportCommands_ReturnValue_41, int32 Temp_int_Loop_Counter_Variable_15, int32 CallFunc_Add_IntInt_ReturnValue_15, class AActor* CallFunc_GetOwner_ReturnValue_87, class AActor* CallFunc_GetOwner_ReturnValue_88, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_43, bool K2Node_DynamicCast_bSuccess_96, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_44, bool K2Node_DynamicCast_bSuccess_97, bool CallFunc_CanUseSupportCommands_ReturnValue_42, bool CallFunc_CanUseSupportCommands_ReturnValue_43, class AActor* CallFunc_GetOwner_ReturnValue_89, class AActor* CallFunc_GetOwner_ReturnValue_90, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_45, bool K2Node_DynamicCast_bSuccess_98, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_46, bool K2Node_DynamicCast_bSuccess_99, bool CallFunc_CanUseSupportCommands_ReturnValue_44, bool CallFunc_CanUseSupportCommands_ReturnValue_45, class AActor* CallFunc_GetOwner_ReturnValue_91, const struct FGameplayTag& Temp_struct_Variable_6, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_47, bool K2Node_DynamicCast_bSuccess_100, bool CallFunc_CanUseSupportCommands_ReturnValue_46, class AActor* CallFunc_GetOwner_ReturnValue_92, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_48, bool K2Node_DynamicCast_bSuccess_101, int32 Temp_int_Array_Index_Variable_17, bool CallFunc_CanUseSupportCommands_ReturnValue_47, class AActor* CallFunc_GetOwner_ReturnValue_93, class AActor* CallFunc_GetOwner_ReturnValue_94, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_49, bool K2Node_DynamicCast_bSuccess_102, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_50, bool K2Node_DynamicCast_bSuccess_103, bool CallFunc_CanUseSupportCommands_ReturnValue_48, bool CallFunc_CanUseSupportCommands_ReturnValue_49, bool Temp_bool_True_if_break_was_hit_Variable_3, class AActor* CallFunc_GetOwner_ReturnValue_95, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_51, bool K2Node_DynamicCast_bSuccess_104, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_CanUseSupportCommands_ReturnValue_50, class AActor* CallFunc_GetOwner_ReturnValue_96, class AActor* CallFunc_GetOwner_ReturnValue_97, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_52, bool K2Node_DynamicCast_bSuccess_105, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_53, bool K2Node_DynamicCast_bSuccess_106, bool CallFunc_CanUseSupportCommands_ReturnValue_51, bool CallFunc_CanUseSupportCommands_ReturnValue_52, int32 Temp_int_Loop_Counter_Variable_16, int32 Temp_int_Loop_Counter_Variable_17, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_17, class AActor* CallFunc_GetOwner_ReturnValue_98, class AActor* CallFunc_GetOwner_ReturnValue_99, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_54, bool K2Node_DynamicCast_bSuccess_107, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_CanUseSupportCommands_ReturnValue_53, class AActor* CallFunc_GetOwner_ReturnValue_100, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_55, bool K2Node_DynamicCast_bSuccess_108, int32 Temp_int_Array_Index_Variable_18, bool CallFunc_CanUseSupportCommands_ReturnValue_54, bool Temp_bool_True_if_break_was_hit_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_101, int32 Temp_int_Loop_Counter_Variable_18, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_56, bool K2Node_DynamicCast_bSuccess_109, bool CallFunc_CanUseSupportCommands_ReturnValue_55, int32 CallFunc_Add_IntInt_ReturnValue_18, class AActor* CallFunc_GetOwner_ReturnValue_102, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_57, bool K2Node_DynamicCast_bSuccess_110, const struct FGameplayTag& Temp_struct_Variable_7, bool CallFunc_CanUseSupportCommands_ReturnValue_56, class AActor* CallFunc_GetOwner_ReturnValue_103, class AActor* CallFunc_GetOwner_ReturnValue_104, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_58, bool K2Node_DynamicCast_bSuccess_111, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_CanUseSupportCommands_ReturnValue_57, class AActor* CallFunc_GetOwner_ReturnValue_105, const struct FGameplayTag& Temp_struct_Variable_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_59, bool K2Node_DynamicCast_bSuccess_112, bool CallFunc_CanUseSupportCommands_ReturnValue_58, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_2, TArray<struct FHitResult>& CallFunc_FindTargetStructures_Hits, const struct FHitResult& CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_14, class UObject* CallFunc_GetHitObject_OutObject, bool CallFunc_Less_IntInt_ReturnValue_10, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess_113, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character_3, bool CallFunc_ExecuteDestroyStructure_Success, TArray<struct FHitResult>& CallFunc_FindTargetStructures_Hits_1, const struct FHitResult& CallFunc_Array_Get_Item_13, int32 CallFunc_Array_Length_ReturnValue_15, class UObject* CallFunc_GetHitObject_OutObject_1, bool CallFunc_Less_IntInt_ReturnValue_11, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess_114, bool CallFunc_BooleanAND_ReturnValue_2, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface_1, bool K2Node_DynamicCast_bSuccess_115, bool CallFunc_IsValid_ReturnValue_92, class ABP_Character_C* CallFunc_GetOwnerCharacter_AsBP_Character_4, bool CallFunc_ExecuteDestroyStructure_Success_1, const struct FGameplayTag& Temp_struct_Variable_9, TArray<struct FHitResult>& CallFunc_FindTargetStructures_Hits_2, const struct FHitResult& CallFunc_Array_Get_Item_14, int32 CallFunc_Array_Length_ReturnValue_16, class UObject* CallFunc_GetHitObject_OutObject_2, bool CallFunc_Less_IntInt_ReturnValue_12, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_116, bool CallFunc_BooleanAND_ReturnValue_3, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, bool CallFunc_IsValid_ReturnValue_93, TArray<struct FHitResult>& CallFunc_FindTargetStructures_Hits_3, const struct FGameplayTag& Temp_struct_Variable_10, const struct FHitResult& CallFunc_Array_Get_Item_15, class UObject* CallFunc_GetHitObject_OutObject_3, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1, bool K2Node_DynamicCast_bSuccess_117, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface_1, bool K2Node_DynamicCast_bSuccess_118, class AStructureComposite* CallFunc_GetCompositeStructure_Composite_1, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue_1, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface_2, bool K2Node_DynamicCast_bSuccess_119, bool CallFunc_IsValid_ReturnValue_94, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_95, int32 CallFunc_Array_Length_ReturnValue_17, bool CallFunc_Less_IntInt_ReturnValue_13, int32 Temp_int_Array_Index_Variable_19, bool CallFunc_BooleanAND_ReturnValue_4, class APlayerState* CallFunc_Array_Get_Item_16, const class FString& CallFunc_GetPlayerName_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_96, bool CallFunc_IsValid_ReturnValue_97, class AActor* CallFunc_GetOwner_ReturnValue_106, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_60, bool K2Node_DynamicCast_bSuccess_120, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_CanUseSupportCommands_ReturnValue_59, class AActor* CallFunc_GetOwner_ReturnValue_107, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_61, bool K2Node_DynamicCast_bSuccess_121, class AActor* CallFunc_GetOwner_ReturnValue_108, bool CallFunc_CanUseSupportCommands_ReturnValue_60, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_62, bool K2Node_DynamicCast_bSuccess_122, bool CallFunc_CanUseSupportCommands_ReturnValue_61, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AActor* CallFunc_GetOwner_ReturnValue_109, const struct FGameplayTag& K2Node_CustomEvent_Tag_16, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_63, bool K2Node_DynamicCast_bSuccess_123, const struct FGameplayTag& K2Node_CustomEvent_Tag_15, bool CallFunc_CanUseSupportCommands_ReturnValue_62, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_1, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_2, bool CallFunc_IsValid_ReturnValue_98, bool CallFunc_IsValid_ReturnValue_99, double K2Node_CustomEvent_Range_1, const struct FGameplayTag& K2Node_CustomEvent_Tag_14, class AActor* CallFunc_GetOwner_ReturnValue_110, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_100, double K2Node_CustomEvent_Range, const struct FGameplayTag& K2Node_CustomEvent_Tag_13, class AActor* CallFunc_GetOwner_ReturnValue_111, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_101, const struct FGameplayTag& K2Node_CustomEvent_Tag_12, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_5, int32 K2Node_CustomEvent_NumberOfBound, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_1, bool K2Node_DynamicCast_bSuccess_124, bool CallFunc_IsValid_ReturnValue_102, const class FString& K2Node_CustomEvent_String, const class FString& K2Node_CustomEvent_LogMessage_1, enum class ENWXLogLevel K2Node_CustomEvent_NWXLogLevel_1, enum class ELogCategory K2Node_CustomEvent_LogCategory_1, bool K2Node_CustomEvent_bPrintToScreen_1, bool K2Node_CustomEvent_bPrintToLog_1, bool K2Node_CustomEvent_bSuppressStackTrace, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_6, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_2, bool K2Node_DynamicCast_bSuccess_125, bool CallFunc_IsAI_Enabled_AIEnabled, const struct FGameplayTag& K2Node_CustomEvent_GameplayTag, int32 Temp_int_Loop_Counter_Variable_19, const struct FGameplayTag& K2Node_CustomEvent_Tag_11, bool CallFunc_Less_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_19, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_7, const struct FGameplayTag& K2Node_CustomEvent_Tag_10, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_3, bool K2Node_DynamicCast_bSuccess_126, bool CallFunc_IsValid_ReturnValue_103, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_8, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_4, bool K2Node_DynamicCast_bSuccess_127, bool CallFunc_IsValid_ReturnValue_104, const class FString& K2Node_CustomEvent_Command, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, const struct FGameplayTag& K2Node_CustomEvent_Tag_9, class ABP_CreatureSpawner_BoundMiasma_C* CallFunc_Array_Get_Item_17, bool CallFunc_IsValid_ReturnValue_105, int32 CallFunc_Array_Length_ReturnValue_18, bool CallFunc_Less_IntInt_ReturnValue_15, const struct FGameplayTag& K2Node_CustomEvent_Tag_8, const struct FGameplayTag& K2Node_CustomEvent_Tag_7, class AController* K2Node_CustomEvent_Controller_1, class AActor* CallFunc_GetOwner_ReturnValue_112, class APawn* CallFunc_K2_GetPawn_ReturnValue_26, class AController* K2Node_DynamicCast_AsController_20, bool K2Node_DynamicCast_bSuccess_128, const class FString& K2Node_CustomEvent_Are, const class FString& K2Node_CustomEvent_Excellent, class AActor* CallFunc_GetOwner_ReturnValue_113, int32 Temp_int_Array_Index_Variable_20, class AController* K2Node_DynamicCast_AsController_21, bool K2Node_DynamicCast_bSuccess_129, const struct FInventoryEntry& CallFunc_Array_Get_Item_18, class APawn* CallFunc_K2_GetPawn_ReturnValue_27, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue_1, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FDataTableRowHandle& K2Node_CustomEvent_RowHandle_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_9, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_5, bool K2Node_DynamicCast_bSuccess_130, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_10, bool CallFunc_IsAI_Enabled_AIEnabled_1, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_6, bool K2Node_DynamicCast_bSuccess_131, bool CallFunc_IsValid_ReturnValue_106, bool CallFunc_IsAI_Enabled_AIEnabled_2, class AActor* CallFunc_GetOwner_ReturnValue_114, const struct FDataTableRowHandle& K2Node_CustomEvent_RowHandle_1, class AController* K2Node_DynamicCast_AsController_22, bool K2Node_DynamicCast_bSuccess_132, class APawn* CallFunc_K2_GetPawn_ReturnValue_28, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_9, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess_133, class ABP_CreatureSpawnerBase_C* CallFunc_SpawnSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_107, bool CallFunc_IsValid_ReturnValue_108, bool K2Node_CustomEvent_TimeOfDayUpdatesDisabled, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_10, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_134, bool CallFunc_IsValid_ReturnValue_109, bool CallFunc_IsValid_ReturnValue_110, enum class E_TimeOfDay K2Node_CustomEvent_TimeOfDay, const struct FGameplayTag& K2Node_CustomEvent_Tag_6, bool K2Node_SwitchEnum_CmpSuccess, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_11, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_12, bool CallFunc_IsValid_ReturnValue_111, bool CallFunc_IsValid_ReturnValue_112, int32 Temp_int_Array_Index_Variable_21, const struct FGameplayTagContainer& CallFunc_Array_Get_Item_19, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, const struct FGameplayTag& K2Node_CustomEvent_Tag_5, const struct FGameplayTag& K2Node_CustomEvent_Tag_4, class AController* K2Node_CustomEvent_Controller, class AActor* CallFunc_GetOwner_ReturnValue_115, class APawn* CallFunc_K2_GetPawn_ReturnValue_29, class AController* K2Node_DynamicCast_AsController_23, bool K2Node_DynamicCast_bSuccess_135, const struct FDataTableRowHandle& K2Node_CustomEvent_RowHandle, class AActor* CallFunc_GetOwner_ReturnValue_116, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AController* K2Node_DynamicCast_AsController_24, bool K2Node_DynamicCast_bSuccess_136, const struct FGameplayTag& K2Node_CustomEvent_Tag_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_30, class ABP_CreatureBase_C* CallFunc_TraceToGetCreature_Creature, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, class ABP_CreatureSpawnerBase_C* CallFunc_SpawnSpawner_Spawner_1, const struct FGameplayTag& K2Node_CustomEvent_Tag_2, const struct FGameplayTag& K2Node_CustomEvent_Tag_1, class APawn* K2Node_CustomEvent_Creature_3, const struct FGameplayTag& K2Node_CustomEvent_Tag, class APawn* K2Node_CustomEvent_Creature_2, bool CallFunc_IsValid_ReturnValue_113, bool CallFunc_IsValid_ReturnValue_114, class ABP_CreatureBase_C* CallFunc_TraceToGetCreature_Creature_1, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_13, TArray<class ABP_CreatureBase_C*>& CallFunc_GetAllActorsOfClass_OutActors_5, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_7, bool K2Node_DynamicCast_bSuccess_137, class ABP_CreatureBase_C* CallFunc_Array_Get_Item_20, bool CallFunc_IsValid_ReturnValue_115, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_116, const class FString& CallFunc_GetManagerDataString_DataString, int32 CallFunc_Array_Length_ReturnValue_19, bool CallFunc_Less_IntInt_ReturnValue_16, class AActor* CallFunc_GetOwner_ReturnValue_117, int32 Temp_int_Loop_Counter_Variable_20, class AController* K2Node_DynamicCast_AsController_25, bool K2Node_DynamicCast_bSuccess_138, bool CallFunc_IsValid_ReturnValue_117, class APawn* CallFunc_K2_GetPawn_ReturnValue_31, bool CallFunc_ActorHasTag_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_11, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_118, bool CallFunc_IsValid_ReturnValue_119, bool CallFunc_Less_IntInt_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_20, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature_1, class AActor* CallFunc_GetOwner_ReturnValue_118, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_139, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_140, class APawn* CallFunc_K2_GetPawn_ReturnValue_32, const struct FDataTableRowHandle& K2Node_CustomEvent_Spawner_Handle, int32 K2Node_CustomEvent_Power, class AActor* CallFunc_GetOwner_ReturnValue_119, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AController* K2Node_DynamicCast_AsController_26, bool K2Node_DynamicCast_bSuccess_141, class APawn* CallFunc_K2_GetPawn_ReturnValue_33, const struct FTransform& CallFunc_GetTransform_ReturnValue_4, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature, class ABP_CreatureSpawnerBase_C* CallFunc_SpawnSpawner_Spawner_2, class AActor* CallFunc_GetOwner_ReturnValue_120, class AActor* CallFunc_GetOwner_ReturnValue_121, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_64, bool K2Node_DynamicCast_bSuccess_142, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_65, bool K2Node_DynamicCast_bSuccess_143, bool CallFunc_CanUseSupportCommands_ReturnValue_63, bool CallFunc_CanUseSupportCommands_ReturnValue_64, class AActor* CallFunc_GetOwner_ReturnValue_122, class AActor* CallFunc_GetOwner_ReturnValue_123, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_66, bool K2Node_DynamicCast_bSuccess_144, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_67, bool K2Node_DynamicCast_bSuccess_145, bool CallFunc_CanUseSupportCommands_ReturnValue_65, bool CallFunc_CanUseSupportCommands_ReturnValue_66, class AActor* CallFunc_GetOwner_ReturnValue_124, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_68, bool K2Node_DynamicCast_bSuccess_146, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_14, bool CallFunc_CanUseSupportCommands_ReturnValue_67, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_8, bool K2Node_DynamicCast_bSuccess_147, class AActor* CallFunc_GetOwner_ReturnValue_125, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager_15, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_69, bool K2Node_DynamicCast_bSuccess_148, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager_9, bool K2Node_DynamicCast_bSuccess_149, bool CallFunc_CanUseSupportCommands_ReturnValue_68, class AActor* CallFunc_GetOwner_ReturnValue_126, class AActor* CallFunc_GetOwner_ReturnValue_127, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_70, bool K2Node_DynamicCast_bSuccess_150, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_71, bool K2Node_DynamicCast_bSuccess_151, bool CallFunc_CanUseSupportCommands_ReturnValue_69, bool CallFunc_CanUseSupportCommands_ReturnValue_70, class AActor* CallFunc_GetOwner_ReturnValue_128, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_72, bool K2Node_DynamicCast_bSuccess_152, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_CanUseSupportCommands_ReturnValue_71, class AActor* CallFunc_GetOwner_ReturnValue_129, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_73, bool K2Node_DynamicCast_bSuccess_153, class AActor* CallFunc_GetOwner_ReturnValue_130, bool CallFunc_CanUseSupportCommands_ReturnValue_72, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_74, bool K2Node_DynamicCast_bSuccess_154, bool CallFunc_CanUseSupportCommands_ReturnValue_73, class AActor* CallFunc_GetOwner_ReturnValue_131, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_75, bool K2Node_DynamicCast_bSuccess_155, class AActor* CallFunc_GetOwner_ReturnValue_132, bool CallFunc_CanUseSupportCommands_ReturnValue_74, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_76, bool K2Node_DynamicCast_bSuccess_156, bool CallFunc_CanUseSupportCommands_ReturnValue_75, class AActor* CallFunc_GetOwner_ReturnValue_133, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_77, bool K2Node_DynamicCast_bSuccess_157, class AActor* CallFunc_GetOwner_ReturnValue_134, bool CallFunc_CanUseSupportCommands_ReturnValue_76, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_78, bool K2Node_DynamicCast_bSuccess_158, bool CallFunc_CanUseSupportCommands_ReturnValue_77, class AActor* CallFunc_GetOwner_ReturnValue_135, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_79, bool K2Node_DynamicCast_bSuccess_159, class AActor* CallFunc_GetOwner_ReturnValue_136, bool CallFunc_CanUseSupportCommands_ReturnValue_78, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_80, bool K2Node_DynamicCast_bSuccess_160, bool CallFunc_CanUseSupportCommands_ReturnValue_79, class AActor* CallFunc_GetOwner_ReturnValue_137, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_81, bool K2Node_DynamicCast_bSuccess_161, class AActor* CallFunc_GetOwner_ReturnValue_138, bool CallFunc_CanUseSupportCommands_ReturnValue_80, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_82, bool K2Node_DynamicCast_bSuccess_162, bool CallFunc_CanUseSupportCommands_ReturnValue_81, class AActor* CallFunc_GetOwner_ReturnValue_139, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_83, bool K2Node_DynamicCast_bSuccess_163, class AActor* CallFunc_GetOwner_ReturnValue_140, bool CallFunc_CanUseSupportCommands_ReturnValue_82, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_84, bool K2Node_DynamicCast_bSuccess_164, bool CallFunc_CanUseSupportCommands_ReturnValue_83, int32 Temp_int_Loop_Counter_Variable_21, bool CallFunc_Less_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_21, class AActor* CallFunc_GetOwner_ReturnValue_141, class AActor* CallFunc_GetOwner_ReturnValue_142, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_85, bool K2Node_DynamicCast_bSuccess_165, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_86, bool K2Node_DynamicCast_bSuccess_166, bool CallFunc_CanUseSupportCommands_ReturnValue_84, bool CallFunc_CanUseSupportCommands_ReturnValue_85, class AActor* CallFunc_GetOwner_ReturnValue_143, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_87, bool K2Node_DynamicCast_bSuccess_167, class AActor* CallFunc_GetOwner_ReturnValue_144, bool CallFunc_CanUseSupportCommands_ReturnValue_86, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_88, bool K2Node_DynamicCast_bSuccess_168, bool CallFunc_CanUseSupportCommands_ReturnValue_87, class AActor* CallFunc_GetOwner_ReturnValue_145, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_89, bool K2Node_DynamicCast_bSuccess_169, bool CallFunc_CanUseSupportCommands_ReturnValue_88, class AActor* CallFunc_GetOwner_ReturnValue_146, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_90, bool K2Node_DynamicCast_bSuccess_170, class AActor* CallFunc_GetOwner_ReturnValue_147, bool CallFunc_CanUseSupportCommands_ReturnValue_89, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_91, bool K2Node_DynamicCast_bSuccess_171, bool CallFunc_CanUseSupportCommands_ReturnValue_90, bool Temp_bool_True_if_break_was_hit_Variable_5, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_148, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_92, bool K2Node_DynamicCast_bSuccess_172, class AActor* CallFunc_GetOwner_ReturnValue_149, bool CallFunc_CanUseSupportCommands_ReturnValue_91, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_93, bool K2Node_DynamicCast_bSuccess_173, bool CallFunc_CanUseSupportCommands_ReturnValue_92, class AActor* CallFunc_GetOwner_ReturnValue_150, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_94, bool K2Node_DynamicCast_bSuccess_174, class AActor* CallFunc_GetOwner_ReturnValue_151, bool CallFunc_CanUseSupportCommands_ReturnValue_93, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_95, bool K2Node_DynamicCast_bSuccess_175, bool CallFunc_CanUseSupportCommands_ReturnValue_94, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AActor* CallFunc_GetOwner_ReturnValue_152, class AActor* CallFunc_GetOwner_ReturnValue_153, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_96, bool K2Node_DynamicCast_bSuccess_176, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_97, bool K2Node_DynamicCast_bSuccess_177, bool CallFunc_CanUseSupportCommands_ReturnValue_95, bool CallFunc_CanUseSupportCommands_ReturnValue_96, class AActor* CallFunc_GetOwner_ReturnValue_154, const class FString& K2Node_CustomEvent_LogMessage, enum class ENWXLogLevel K2Node_CustomEvent_NWXLogLevel, enum class ELogCategory K2Node_CustomEvent_LogCategory, bool K2Node_CustomEvent_bPrintToScreen, bool K2Node_CustomEvent_bPrintToLog, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_98, bool K2Node_DynamicCast_bSuccess_178, bool CallFunc_CanUseSupportCommands_ReturnValue_97, int32 Temp_int_Loop_Counter_Variable_22, bool CallFunc_Less_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_22, const struct FVector& K2Node_CustomEvent_Center, double K2Node_CustomEvent_Radius, int32 K2Node_CustomEvent_Segments, const struct FLinearColor& K2Node_CustomEvent_LineColor_1, double K2Node_CustomEvent_Duration_2, double K2Node_CustomEvent_Thickness_1, const class FString& K2Node_CustomEvent_CollectionName, class FName K2Node_CustomEvent_ParameterName, double K2Node_CustomEvent_Value, class AActor* CallFunc_GetOwner_ReturnValue_155, class UMaterialParameterCollection* CallFunc_FindMaterialCollectionByName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_120, const struct FVector& K2Node_CustomEvent_LineStart, const struct FVector& K2Node_CustomEvent_LineEnd, const struct FLinearColor& K2Node_CustomEvent_LineColor, double K2Node_CustomEvent_Duration_1, double K2Node_CustomEvent_Thickness, const class FString& K2Node_CustomEvent_GroupId_2, const struct FOnlineServiceStatus& K2Node_CustomEvent_Status_3, const class FString& K2Node_CustomEvent_GroupId_1, const class FString& K2Node_CustomEvent_PlayerName, class ABP_PlayerState_C* CallFunc_GetPlayerStateByName_Player_State, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_1, TArray<class FString>& CallFunc_GetGroups_ReturnValue, const class FString& CallFunc_Array_Get_Item_21, int32 CallFunc_Array_Length_ReturnValue_20, class FText CallFunc_Conv_StringToText_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_20, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_2, const struct FOnlineServiceStatus& K2Node_CustomEvent_Status_2, bool CallFunc_IsValid_ReturnValue_121, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, const class FString& K2Node_CustomEvent_Group_Id, class FText CallFunc_Format_ReturnValue_3, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_IsInGroup_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& K2Node_CustomEvent_GroupId, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_4, const struct FGroup& K2Node_CustomEvent_Group, const struct FOnlineServiceStatus& K2Node_CustomEvent_Status_1, const struct FMember& CallFunc_Array_Get_Item_22, int32 CallFunc_Array_Length_ReturnValue_21, bool CallFunc_Less_IntInt_ReturnValue_21, class FText CallFunc_Conv_StringToText_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, class FText CallFunc_Conv_StringToText_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, TArray<class FString>& CallFunc_GetGroups_ReturnValue_1, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_23, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, int32 CallFunc_Array_Length_ReturnValue_22, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_22, class UGroupComponentBase* CallFunc_GetGroupComponent_Group_Component_6, const struct FOnlineServiceStatus& K2Node_CustomEvent_Status, class ABP_PlayerState_C* CallFunc_GetOwnerPlayerState_AsBP_Player_State, const class FString& CallFunc_GetPlayerName_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_9, bool CallFunc_IsValid_ReturnValue_122, class FText CallFunc_Format_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class ABP_PlayerState_C* CallFunc_GetOwnerPlayerState_AsBP_Player_State_1, bool CallFunc_IsValid_ReturnValue_123, const class FString& K2Node_CustomEvent_EffectName, class AActor* CallFunc_GetOwner_ReturnValue_156, bool CallFunc_HasAuthority_ReturnValue_7, const struct FVector& K2Node_CustomEvent_TextLocation, const class FString& K2Node_CustomEvent_Text, class AActor* K2Node_CustomEvent_TestBaseActor, const struct FLinearColor& K2Node_CustomEvent_TextColor, double K2Node_CustomEvent_Duration, class ABP_Character_C* K2Node_CustomEvent_Character_1, bool CallFunc_IsValid_ReturnValue_124, class ABP_Character_C* K2Node_CustomEvent_Character, bool CallFunc_IsValid_ReturnValue_125, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AActor* CallFunc_GetOwner_ReturnValue_157, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_99, bool K2Node_DynamicCast_bSuccess_179, class AActor* CallFunc_GetOwner_ReturnValue_158, bool CallFunc_CanUseSupportCommands_ReturnValue_98, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_100, bool K2Node_DynamicCast_bSuccess_180, bool CallFunc_CanUseSupportCommands_ReturnValue_99, class AActor* CallFunc_GetOwner_ReturnValue_159, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_101, bool K2Node_DynamicCast_bSuccess_181, int32 Temp_int_Array_Index_Variable_22, bool CallFunc_CanUseSupportCommands_ReturnValue_100, const struct FEncounterFavourData& CallFunc_Array_Get_Item_24, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle_1, bool CallFunc_ApplyTimedStatusEffect_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_160, class AActor* CallFunc_GetOwner_ReturnValue_161, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_102, bool K2Node_DynamicCast_bSuccess_182, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_103, bool K2Node_DynamicCast_bSuccess_183, bool CallFunc_CanUseSupportCommands_ReturnValue_101, bool CallFunc_CanUseSupportCommands_ReturnValue_102, class AActor* CallFunc_GetOwner_ReturnValue_162, class AActor* CallFunc_GetOwner_ReturnValue_163, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_104, bool K2Node_DynamicCast_bSuccess_184, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_105, bool K2Node_DynamicCast_bSuccess_185, bool CallFunc_CanUseSupportCommands_ReturnValue_103, bool CallFunc_CanUseSupportCommands_ReturnValue_104, class AActor* CallFunc_GetOwner_ReturnValue_164, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_106, bool K2Node_DynamicCast_bSuccess_186, bool CallFunc_CanUseSupportCommands_ReturnValue_105, float K2Node_MakeStruct_PrecipitationBase_ImplicitCast, float K2Node_MakeStruct_PrecipitationBase_ImplicitCast_1, float K2Node_MakeStruct_RampUpRange_ImplicitCast, float K2Node_MakeStruct_Minimum_ImplicitCast, float K2Node_MakeStruct_Maximum_ImplicitCast, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast, float CallFunc_GetForwardLinecast_MinRange_ImplicitCast, float CallFunc_SetGameplayEffectDurationHandle_NewDuration_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, const struct FVector3f& CallFunc_Conv_Vector3fToString_InVec_ImplicitCast, const struct FVector3f& CallFunc_Conv_Vector3fToString_InVec_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_DrawDebugSphere_Radius_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast, float CallFunc_DrawDebugSphere_Thickness_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_DrawDebugLine_Duration_ImplicitCast, float CallFunc_DrawDebugLine_Thickness_ImplicitCast, float CallFunc_DrawDebugString_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "ExecuteUbergraph_BP_DebugModeComponent");

	Params::UBP_DebugModeComponent_C_ExecuteUbergraph_BP_DebugModeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Level_3 = K2Node_CustomEvent_Level_3;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.K2Node_MakeStruct_PrecipitationProfile = K2Node_MakeStruct_PrecipitationProfile;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager = CallFunc_GetTimeOfDayManager_TimeOfDayManager;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_1 = K2Node_DynamicCast_AsNWXGame_Mode_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_PrecipitationProfile_1 = K2Node_MakeStruct_PrecipitationProfile_1;
	Parms.CallFunc_GetManager_ReturnValue_1 = CallFunc_GetManager_ReturnValue_1;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_1 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_1;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_2 = K2Node_DynamicCast_AsNWXGame_Mode_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetManager_ReturnValue_2 = CallFunc_GetManager_ReturnValue_2;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_2 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_2;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_3 = K2Node_DynamicCast_AsNWXGame_Mode_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetManager_ReturnValue_3 = CallFunc_GetManager_ReturnValue_3;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_3 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_3;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_4 = K2Node_DynamicCast_AsNWXGame_Mode_Base_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetManager_ReturnValue_4 = CallFunc_GetManager_ReturnValue_4;
	Parms.K2Node_MakeStruct_StormProfile = K2Node_MakeStruct_StormProfile;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_4 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_4;
	Parms.K2Node_MakeStruct_StormProfile_1 = K2Node_MakeStruct_StormProfile_1;
	Parms.K2Node_CustomEvent_Level_2 = K2Node_CustomEvent_Level_2;
	Parms.CallFunc_GetGameMode_ReturnValue_5 = CallFunc_GetGameMode_ReturnValue_5;
	Parms.K2Node_MakeStruct_PrecipitationProfile_2 = K2Node_MakeStruct_PrecipitationProfile_2;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_5 = K2Node_DynamicCast_AsNWXGame_Mode_Base_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_Level_1 = K2Node_CustomEvent_Level_1;
	Parms.CallFunc_GetManager_ReturnValue_5 = CallFunc_GetManager_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_5 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_5;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_MakeStruct_StormProfile_2 = K2Node_MakeStruct_StormProfile_2;
	Parms.CallFunc_GetGameMode_ReturnValue_6 = CallFunc_GetGameMode_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_6 = K2Node_DynamicCast_AsNWXGame_Mode_Base_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetManager_ReturnValue_6 = CallFunc_GetManager_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetTimeOfDayManager_TimeOfDayManager_6 = CallFunc_GetTimeOfDayManager_TimeOfDayManager_6;
	Parms.K2Node_CustomEvent_TemperatureCurve = K2Node_CustomEvent_TemperatureCurve;
	Parms.K2Node_CustomEvent_TemperatureMin = K2Node_CustomEvent_TemperatureMin;
	Parms.K2Node_CustomEvent_TemperatureMax = K2Node_CustomEvent_TemperatureMax;
	Parms.K2Node_CustomEvent_Temperature_Profile = K2Node_CustomEvent_Temperature_Profile;
	Parms.K2Node_MakeStruct_TemperatureProfile = K2Node_MakeStruct_TemperatureProfile;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_1 = K2Node_DynamicCast_AsNWXPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_1 = CallFunc_CanUseSupportCommands_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_2 = K2Node_DynamicCast_AsNWXPlayer_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_2 = CallFunc_CanUseSupportCommands_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_3 = K2Node_DynamicCast_AsNWXPlayer_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_3 = CallFunc_CanUseSupportCommands_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_4 = K2Node_DynamicCast_AsNWXPlayer_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_4 = CallFunc_CanUseSupportCommands_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_5 = K2Node_DynamicCast_AsNWXPlayer_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_5 = CallFunc_CanUseSupportCommands_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_6 = K2Node_DynamicCast_AsNWXPlayer_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_6 = CallFunc_CanUseSupportCommands_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_7 = K2Node_DynamicCast_AsNWXPlayer_Controller_7;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_7 = CallFunc_CanUseSupportCommands_ReturnValue_7;
	Parms.CallFunc_GetOwner_ReturnValue_8 = CallFunc_GetOwner_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_8 = K2Node_DynamicCast_AsNWXPlayer_Controller_8;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetOwner_ReturnValue_9 = CallFunc_GetOwner_ReturnValue_9;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_8 = CallFunc_CanUseSupportCommands_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_9 = K2Node_DynamicCast_AsNWXPlayer_Controller_9;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_9 = CallFunc_CanUseSupportCommands_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue_10 = CallFunc_GetOwner_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_10 = K2Node_DynamicCast_AsNWXPlayer_Controller_10;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetOwner_ReturnValue_11 = CallFunc_GetOwner_ReturnValue_11;
	Parms.CallFunc_DoesPlayerHaveRespitePoint_ReturnValue = CallFunc_DoesPlayerHaveRespitePoint_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_11 = K2Node_DynamicCast_AsNWXPlayer_Controller_11;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_IsPlayerInRespiteRealm_ReturnValue = CallFunc_IsPlayerInRespiteRealm_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_ON = K2Node_CustomEvent_ON;
	Parms.CallFunc_GetOwner_ReturnValue_12 = CallFunc_GetOwner_ReturnValue_12;
	Parms.CallFunc_GetOwner_ReturnValue_13 = CallFunc_GetOwner_ReturnValue_13;
	Parms.K2Node_CustomEvent_Status_Effect = K2Node_CustomEvent_Status_Effect;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_IsInfinite = K2Node_CustomEvent_IsInfinite;
	Parms.K2Node_CustomEvent_Duration_4 = K2Node_CustomEvent_Duration_4;
	Parms.CallFunc_GetOwner_ReturnValue_14 = CallFunc_GetOwner_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface = K2Node_DynamicCast_AsStatus_Effect_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1 = K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle = CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle;
	Parms.CallFunc_ApplyInfiniteStatusEffect_ReturnValue = CallFunc_ApplyInfiniteStatusEffect_ReturnValue;
	Parms.CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle = CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle;
	Parms.CallFunc_ApplyTimedStatusEffect_ReturnValue = CallFunc_ApplyTimedStatusEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Tags = K2Node_CustomEvent_Tags;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAbilitySystem_ReturnValue = CallFunc_GetAbilitySystem_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_15 = CallFunc_GetOwner_ReturnValue_15;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_12 = K2Node_DynamicCast_AsNWXPlayer_Controller_12;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_10 = CallFunc_CanUseSupportCommands_ReturnValue_10;
	Parms.CallFunc_GetOwner_ReturnValue_16 = CallFunc_GetOwner_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_13 = K2Node_DynamicCast_AsNWXPlayer_Controller_13;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_GetOwner_ReturnValue_17 = CallFunc_GetOwner_ReturnValue_17;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_11 = CallFunc_CanUseSupportCommands_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_14 = K2Node_DynamicCast_AsNWXPlayer_Controller_14;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_12 = CallFunc_CanUseSupportCommands_ReturnValue_12;
	Parms.CallFunc_GetOwner_ReturnValue_18 = CallFunc_GetOwner_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_15 = K2Node_DynamicCast_AsNWXPlayer_Controller_15;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_GetOwner_ReturnValue_19 = CallFunc_GetOwner_ReturnValue_19;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_13 = CallFunc_CanUseSupportCommands_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_16 = K2Node_DynamicCast_AsNWXPlayer_Controller_16;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_14 = CallFunc_CanUseSupportCommands_ReturnValue_14;
	Parms.CallFunc_GetOwner_ReturnValue_20 = CallFunc_GetOwner_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_17 = K2Node_DynamicCast_AsNWXPlayer_Controller_17;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_15 = CallFunc_CanUseSupportCommands_ReturnValue_15;
	Parms.K2Node_CustomEvent_ItemEntry_1 = K2Node_CustomEvent_ItemEntry_1;
	Parms.K2Node_CustomEvent_SpellRow = K2Node_CustomEvent_SpellRow;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwner_ReturnValue_21 = CallFunc_GetOwner_ReturnValue_21;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_UpdateItem_ReturnValue = CallFunc_UpdateItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_ItemEntry = K2Node_CustomEvent_ItemEntry;
	Parms.K2Node_CustomEvent_ItemPerk = K2Node_CustomEvent_ItemPerk;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetOwner_ReturnValue_22 = CallFunc_GetOwner_ReturnValue_22;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue_2 = CallFunc_GetFunctionName_ReturnValue_2;
	Parms.CallFunc_GetBackpack_Container_1 = CallFunc_GetBackpack_Container_1;
	Parms.CallFunc_GetBackpack_ReturnValue_1 = CallFunc_GetBackpack_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_UpdateItem_ReturnValue_1 = CallFunc_UpdateItem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetFunctionName_ReturnValue_3 = CallFunc_GetFunctionName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character = CallFunc_GetOwnerCharacter_AsBP_Character;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_23 = CallFunc_GetOwner_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_18 = K2Node_DynamicCast_AsNWXPlayer_Controller_18;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_GetOwner_ReturnValue_24 = CallFunc_GetOwner_ReturnValue_24;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_16 = CallFunc_CanUseSupportCommands_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_19 = K2Node_DynamicCast_AsNWXPlayer_Controller_19;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_17 = CallFunc_CanUseSupportCommands_ReturnValue_17;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.K2Node_CustomEvent_POIRowName = K2Node_CustomEvent_POIRowName;
	Parms.CallFunc_GetGameMode_ReturnValue_7 = CallFunc_GetGameMode_ReturnValue_7;
	Parms.K2Node_CustomEvent_Target_1 = K2Node_CustomEvent_Target_1;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_7 = K2Node_DynamicCast_AsNWXGame_Mode_Base_7;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetManager_ReturnValue_7 = CallFunc_GetManager_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetOwner_ReturnValue_25 = CallFunc_GetOwner_ReturnValue_25;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetOwner_ReturnValue_26 = CallFunc_GetOwner_ReturnValue_26;
	Parms.CallFunc_GetOwner_ReturnValue_27 = CallFunc_GetOwner_ReturnValue_27;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_1 = K2Node_DynamicCast_AsBP_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_32 = K2Node_DynamicCast_bSuccess_32;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.K2Node_CustomEvent_PlugName = K2Node_CustomEvent_PlugName;
	Parms.K2Node_CustomEvent_POIName = K2Node_CustomEvent_POIName;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_28 = CallFunc_GetOwner_ReturnValue_28;
	Parms.CallFunc_GetOwner_ReturnValue_29 = CallFunc_GetOwner_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_20 = K2Node_DynamicCast_AsNWXPlayer_Controller_20;
	Parms.K2Node_DynamicCast_bSuccess_33 = K2Node_DynamicCast_bSuccess_33;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_21 = K2Node_DynamicCast_AsNWXPlayer_Controller_21;
	Parms.K2Node_DynamicCast_bSuccess_34 = K2Node_DynamicCast_bSuccess_34;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_18 = CallFunc_CanUseSupportCommands_ReturnValue_18;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_19 = CallFunc_CanUseSupportCommands_ReturnValue_19;
	Parms.CallFunc_GetOwner_ReturnValue_30 = CallFunc_GetOwner_ReturnValue_30;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_22 = K2Node_DynamicCast_AsNWXPlayer_Controller_22;
	Parms.K2Node_DynamicCast_bSuccess_35 = K2Node_DynamicCast_bSuccess_35;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_20 = CallFunc_CanUseSupportCommands_ReturnValue_20;
	Parms.CallFunc_GetOwner_ReturnValue_31 = CallFunc_GetOwner_ReturnValue_31;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_23 = K2Node_DynamicCast_AsNWXPlayer_Controller_23;
	Parms.K2Node_DynamicCast_bSuccess_36 = K2Node_DynamicCast_bSuccess_36;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_21 = CallFunc_CanUseSupportCommands_ReturnValue_21;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_NPCData_1 = K2Node_CustomEvent_NPCData_1;
	Parms.K2Node_CustomEvent_NPCData = K2Node_CustomEvent_NPCData;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.CallFunc_GetOwner_ReturnValue_32 = CallFunc_GetOwner_ReturnValue_32;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess_37 = K2Node_DynamicCast_bSuccess_37;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_24 = K2Node_DynamicCast_AsNWXPlayer_Controller_24;
	Parms.K2Node_DynamicCast_bSuccess_38 = K2Node_DynamicCast_bSuccess_38;
	Parms.CallFunc_GetSpawnersWithTag_Spawners = CallFunc_GetSpawnersWithTag_Spawners;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_22 = CallFunc_CanUseSupportCommands_ReturnValue_22;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue_33 = CallFunc_GetOwner_ReturnValue_33;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_25 = K2Node_DynamicCast_AsNWXPlayer_Controller_25;
	Parms.K2Node_DynamicCast_bSuccess_39 = K2Node_DynamicCast_bSuccess_39;
	Parms.CallFunc_GetOwner_ReturnValue_34 = CallFunc_GetOwner_ReturnValue_34;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_23 = CallFunc_CanUseSupportCommands_ReturnValue_23;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_26 = K2Node_DynamicCast_AsNWXPlayer_Controller_26;
	Parms.K2Node_DynamicCast_bSuccess_40 = K2Node_DynamicCast_bSuccess_40;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_24 = CallFunc_CanUseSupportCommands_ReturnValue_24;
	Parms.CallFunc_GetOwner_ReturnValue_35 = CallFunc_GetOwner_ReturnValue_35;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_36 = CallFunc_GetOwner_ReturnValue_36;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_27 = K2Node_DynamicCast_AsNWXPlayer_Controller_27;
	Parms.K2Node_DynamicCast_bSuccess_41 = K2Node_DynamicCast_bSuccess_41;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_25 = CallFunc_CanUseSupportCommands_ReturnValue_25;
	Parms.CallFunc_GetOwner_ReturnValue_37 = CallFunc_GetOwner_ReturnValue_37;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_28 = K2Node_DynamicCast_AsNWXPlayer_Controller_28;
	Parms.K2Node_DynamicCast_bSuccess_42 = K2Node_DynamicCast_bSuccess_42;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_26 = CallFunc_CanUseSupportCommands_ReturnValue_26;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue_38 = CallFunc_GetOwner_ReturnValue_38;
	Parms.CallFunc_GetOwner_ReturnValue_39 = CallFunc_GetOwner_ReturnValue_39;
	Parms.K2Node_CustomEvent_EncounterIndex = K2Node_CustomEvent_EncounterIndex;
	Parms.K2Node_CustomEvent_EncounterPlugName = K2Node_CustomEvent_EncounterPlugName;
	Parms.K2Node_DynamicCast_AsController_1 = K2Node_DynamicCast_AsController_1;
	Parms.K2Node_DynamicCast_bSuccess_43 = K2Node_DynamicCast_bSuccess_43;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetOwner_ReturnValue_40 = CallFunc_GetOwner_ReturnValue_40;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsController_2 = K2Node_DynamicCast_AsController_2;
	Parms.K2Node_DynamicCast_bSuccess_44 = K2Node_DynamicCast_bSuccess_44;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_45 = K2Node_DynamicCast_bSuccess_45;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetRaycastEndpoints_Start = CallFunc_GetRaycastEndpoints_Start;
	Parms.CallFunc_GetRaycastEndpoints_End = CallFunc_GetRaycastEndpoints_End;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_41 = CallFunc_GetOwner_ReturnValue_41;
	Parms.K2Node_DynamicCast_AsController_3 = K2Node_DynamicCast_AsController_3;
	Parms.K2Node_DynamicCast_bSuccess_46 = K2Node_DynamicCast_bSuccess_46;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Character_1 = K2Node_DynamicCast_AsBP_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_47 = K2Node_DynamicCast_bSuccess_47;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetRaycastEndpoints_Start_1 = CallFunc_GetRaycastEndpoints_Start_1;
	Parms.CallFunc_GetRaycastEndpoints_End_1 = CallFunc_GetRaycastEndpoints_End_1;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_NWXLineTraceMulti_OutHits = CallFunc_NWXLineTraceMulti_OutHits;
	Parms.CallFunc_NWXLineTraceMulti_ReturnValue = CallFunc_NWXLineTraceMulti_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_42 = CallFunc_GetOwner_ReturnValue_42;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsController_4 = K2Node_DynamicCast_AsController_4;
	Parms.K2Node_DynamicCast_bSuccess_48 = K2Node_DynamicCast_bSuccess_48;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.K2Node_CustomEvent_Selected_Option = K2Node_CustomEvent_Selected_Option;
	Parms.CallFunc_GenerateFavourRewards_ReturnValue = CallFunc_GenerateFavourRewards_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character_1 = CallFunc_GetOwnerCharacter_AsBP_Character_1;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface_2 = K2Node_DynamicCast_AsStatus_Effect_Access_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_49 = K2Node_DynamicCast_bSuccess_49;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetOwner_ReturnValue_43 = CallFunc_GetOwner_ReturnValue_43;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_GetGameMode_ReturnValue_8 = CallFunc_GetGameMode_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_8 = K2Node_DynamicCast_AsNWXGame_Mode_Base_8;
	Parms.K2Node_DynamicCast_bSuccess_50 = K2Node_DynamicCast_bSuccess_50;
	Parms.CallFunc_GetOwner_ReturnValue_44 = CallFunc_GetOwner_ReturnValue_44;
	Parms.CallFunc_GetManager_ReturnValue_8 = CallFunc_GetManager_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_29 = K2Node_DynamicCast_AsNWXPlayer_Controller_29;
	Parms.K2Node_DynamicCast_bSuccess_51 = K2Node_DynamicCast_bSuccess_51;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_27 = CallFunc_CanUseSupportCommands_ReturnValue_27;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_45 = CallFunc_GetOwner_ReturnValue_45;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess_52 = K2Node_DynamicCast_bSuccess_52;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_GetOwner_ReturnValue_46 = CallFunc_GetOwner_ReturnValue_46;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_30 = K2Node_DynamicCast_AsNWXPlayer_Controller_30;
	Parms.K2Node_DynamicCast_bSuccess_53 = K2Node_DynamicCast_bSuccess_53;
	Parms.CallFunc_GetOwner_ReturnValue_47 = CallFunc_GetOwner_ReturnValue_47;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_28 = CallFunc_CanUseSupportCommands_ReturnValue_28;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_31 = K2Node_DynamicCast_AsNWXPlayer_Controller_31;
	Parms.K2Node_DynamicCast_bSuccess_54 = K2Node_DynamicCast_bSuccess_54;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_29 = CallFunc_CanUseSupportCommands_ReturnValue_29;
	Parms.CallFunc_GetOwner_ReturnValue_48 = CallFunc_GetOwner_ReturnValue_48;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_32 = K2Node_DynamicCast_AsNWXPlayer_Controller_32;
	Parms.K2Node_DynamicCast_bSuccess_55 = K2Node_DynamicCast_bSuccess_55;
	Parms.CallFunc_GetOwner_ReturnValue_49 = CallFunc_GetOwner_ReturnValue_49;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_30 = CallFunc_CanUseSupportCommands_ReturnValue_30;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_33 = K2Node_DynamicCast_AsNWXPlayer_Controller_33;
	Parms.K2Node_DynamicCast_bSuccess_56 = K2Node_DynamicCast_bSuccess_56;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_31 = CallFunc_CanUseSupportCommands_ReturnValue_31;
	Parms.CallFunc_GetOwner_ReturnValue_50 = CallFunc_GetOwner_ReturnValue_50;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_34 = K2Node_DynamicCast_AsNWXPlayer_Controller_34;
	Parms.K2Node_DynamicCast_bSuccess_57 = K2Node_DynamicCast_bSuccess_57;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_32 = CallFunc_CanUseSupportCommands_ReturnValue_32;
	Parms.CallFunc_GetOwner_ReturnValue_51 = CallFunc_GetOwner_ReturnValue_51;
	Parms.K2Node_CustomEvent_Identifier = K2Node_CustomEvent_Identifier;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_35 = K2Node_DynamicCast_AsNWXPlayer_Controller_35;
	Parms.K2Node_DynamicCast_bSuccess_58 = K2Node_DynamicCast_bSuccess_58;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_4 = CallFunc_GetAllActorsOfClass_OutActors_4;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_33 = CallFunc_CanUseSupportCommands_ReturnValue_33;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_GetOwner_ReturnValue_52 = CallFunc_GetOwner_ReturnValue_52;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_2 = K2Node_DynamicCast_AsBP_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_59 = K2Node_DynamicCast_bSuccess_59;
	Parms.CallFunc_GetOwner_ReturnValue_53 = CallFunc_GetOwner_ReturnValue_53;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_36 = K2Node_DynamicCast_AsNWXPlayer_Controller_36;
	Parms.K2Node_DynamicCast_bSuccess_60 = K2Node_DynamicCast_bSuccess_60;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_34 = CallFunc_CanUseSupportCommands_ReturnValue_34;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_54 = CallFunc_GetOwner_ReturnValue_54;
	Parms.K2Node_CustomEvent_DumpToLog = K2Node_CustomEvent_DumpToLog;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_3 = K2Node_DynamicCast_AsBP_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_61 = K2Node_DynamicCast_bSuccess_61;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_TryActivateAbilityByClass_ReturnValue = CallFunc_TryActivateAbilityByClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_35 = CallFunc_CanUseSupportCommands_ReturnValue_35;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_PlayerName_2 = K2Node_CustomEvent_PlayerName_2;
	Parms.CallFunc_NWXLineTraceMulti_OutHits_1 = CallFunc_NWXLineTraceMulti_OutHits_1;
	Parms.CallFunc_NWXLineTraceMulti_ReturnValue_1 = CallFunc_NWXLineTraceMulti_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
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
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue_1 = CallFunc_Array_IsNotEmpty_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Distance = K2Node_CustomEvent_Distance;
	Parms.K2Node_CustomEvent_PlayerName_1 = K2Node_CustomEvent_PlayerName_1;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue_55 = CallFunc_GetOwner_ReturnValue_55;
	Parms.CallFunc_GetOwner_ReturnValue_56 = CallFunc_GetOwner_ReturnValue_56;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_4 = K2Node_DynamicCast_AsBP_Player_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_62 = K2Node_DynamicCast_bSuccess_62;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_5 = K2Node_DynamicCast_AsBP_Player_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_63 = K2Node_DynamicCast_bSuccess_63;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_GetOwner_ReturnValue_57 = CallFunc_GetOwner_ReturnValue_57;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_6 = K2Node_DynamicCast_AsBP_Player_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_64 = K2Node_DynamicCast_bSuccess_64;
	Parms.CallFunc_GetOwner_ReturnValue_58 = CallFunc_GetOwner_ReturnValue_58;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_7 = K2Node_DynamicCast_AsBP_Player_Controller_7;
	Parms.K2Node_DynamicCast_bSuccess_65 = K2Node_DynamicCast_bSuccess_65;
	Parms.CallFunc_GetOwner_ReturnValue_59 = CallFunc_GetOwner_ReturnValue_59;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_8 = K2Node_DynamicCast_AsBP_Player_Controller_8;
	Parms.K2Node_DynamicCast_bSuccess_66 = K2Node_DynamicCast_bSuccess_66;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_60 = CallFunc_GetOwner_ReturnValue_60;
	Parms.K2Node_CustomEvent_Tag_17 = K2Node_CustomEvent_Tag_17;
	Parms.K2Node_CustomEvent_Duration_3 = K2Node_CustomEvent_Duration_3;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_9 = K2Node_DynamicCast_AsBP_Player_Controller_9;
	Parms.K2Node_DynamicCast_bSuccess_67 = K2Node_DynamicCast_bSuccess_67;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetGameplayEffectCount_ReturnValue = CallFunc_GetGameplayEffectCount_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_GetOwner_ReturnValue_61 = CallFunc_GetOwner_ReturnValue_61;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_10 = K2Node_DynamicCast_AsBP_Player_Controller_10;
	Parms.K2Node_DynamicCast_bSuccess_68 = K2Node_DynamicCast_bSuccess_68;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_K2_GetPawn_ReturnValue_9 = CallFunc_K2_GetPawn_ReturnValue_9;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_69 = K2Node_DynamicCast_bSuccess_69;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetActiveEffectsWithAllTags_ReturnValue = CallFunc_GetActiveEffectsWithAllTags_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_SetGameplayEffectDurationHandle_ReturnValue = CallFunc_SetGameplayEffectDurationHandle_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC = K2Node_DynamicCast_AsAIC_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess_70 = K2Node_DynamicCast_bSuccess_70;
	Parms.CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue = CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character_2 = CallFunc_GetOwnerCharacter_AsBP_Character_2;
	Parms.CallFunc_GetForwardLinecast_OutStartPoint = CallFunc_GetForwardLinecast_OutStartPoint;
	Parms.CallFunc_GetForwardLinecast_OutEndPoint = CallFunc_GetForwardLinecast_OutEndPoint;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_4 = CallFunc_GetFunctionName_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsLoadout_Equip_Interface = K2Node_DynamicCast_AsLoadout_Equip_Interface;
	Parms.K2Node_DynamicCast_bSuccess_71 = K2Node_DynamicCast_bSuccess_71;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetFunctionName_ReturnValue_5 = CallFunc_GetFunctionName_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_GetOwner_ReturnValue_62 = CallFunc_GetOwner_ReturnValue_62;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetBackpack_Container_2 = CallFunc_GetBackpack_Container_2;
	Parms.CallFunc_GetBackpack_ReturnValue_2 = CallFunc_GetBackpack_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetFunctionName_ReturnValue_6 = CallFunc_GetFunctionName_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_GetFunctionName_ReturnValue_7 = CallFunc_GetFunctionName_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess_72 = K2Node_DynamicCast_bSuccess_72;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries_1 = CallFunc_GetAllItems_Entries_1;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Length_ReturnValue_13 = CallFunc_Array_Length_ReturnValue_13;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetItemType_ItemType = CallFunc_GetItemType_ItemType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_10 = CallFunc_K2_GetPawn_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetOwner_ReturnValue_63 = CallFunc_GetOwner_ReturnValue_63;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsController_5 = K2Node_DynamicCast_AsController_5;
	Parms.K2Node_DynamicCast_bSuccess_73 = K2Node_DynamicCast_bSuccess_73;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.CallFunc_K2_GetPawn_ReturnValue_11 = CallFunc_K2_GetPawn_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_40 = CallFunc_IsValid_ReturnValue_40;
	Parms.CallFunc_GetOwner_ReturnValue_64 = CallFunc_GetOwner_ReturnValue_64;
	Parms.K2Node_DynamicCast_AsController_6 = K2Node_DynamicCast_AsController_6;
	Parms.K2Node_DynamicCast_bSuccess_74 = K2Node_DynamicCast_bSuccess_74;
	Parms.CallFunc_IsValid_ReturnValue_41 = CallFunc_IsValid_ReturnValue_41;
	Parms.CallFunc_K2_GetPawn_ReturnValue_12 = CallFunc_K2_GetPawn_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_42 = CallFunc_IsValid_ReturnValue_42;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_43 = CallFunc_IsValid_ReturnValue_43;
	Parms.CallFunc_GetOwner_ReturnValue_65 = CallFunc_GetOwner_ReturnValue_65;
	Parms.K2Node_DynamicCast_AsController_7 = K2Node_DynamicCast_AsController_7;
	Parms.K2Node_DynamicCast_bSuccess_75 = K2Node_DynamicCast_bSuccess_75;
	Parms.CallFunc_IsValid_ReturnValue_44 = CallFunc_IsValid_ReturnValue_44;
	Parms.CallFunc_K2_GetPawn_ReturnValue_13 = CallFunc_K2_GetPawn_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_45 = CallFunc_IsValid_ReturnValue_45;
	Parms.CallFunc_GetComponentByClass_ReturnValue_6 = CallFunc_GetComponentByClass_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_46 = CallFunc_IsValid_ReturnValue_46;
	Parms.CallFunc_GetOwner_ReturnValue_66 = CallFunc_GetOwner_ReturnValue_66;
	Parms.K2Node_DynamicCast_AsController_8 = K2Node_DynamicCast_AsController_8;
	Parms.K2Node_DynamicCast_bSuccess_76 = K2Node_DynamicCast_bSuccess_76;
	Parms.CallFunc_IsValid_ReturnValue_47 = CallFunc_IsValid_ReturnValue_47;
	Parms.CallFunc_K2_GetPawn_ReturnValue_14 = CallFunc_K2_GetPawn_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_48 = CallFunc_IsValid_ReturnValue_48;
	Parms.CallFunc_GetComponentByClass_ReturnValue_7 = CallFunc_GetComponentByClass_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_49 = CallFunc_IsValid_ReturnValue_49;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_GetOwner_ReturnValue_67 = CallFunc_GetOwner_ReturnValue_67;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_DynamicCast_AsController_9 = K2Node_DynamicCast_AsController_9;
	Parms.K2Node_DynamicCast_bSuccess_77 = K2Node_DynamicCast_bSuccess_77;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_15 = CallFunc_K2_GetPawn_ReturnValue_15;
	Parms.CallFunc_Conv_Vector3fToString_ReturnValue = CallFunc_Conv_Vector3fToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_50 = CallFunc_IsValid_ReturnValue_50;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_GetComponentByClass_ReturnValue_8 = CallFunc_GetComponentByClass_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_51 = CallFunc_IsValid_ReturnValue_51;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_52 = CallFunc_IsValid_ReturnValue_52;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_9 = CallFunc_GetComponentByClass_ReturnValue_9;
	Parms.CallFunc_GetLevelProxy_ReturnValue = CallFunc_GetLevelProxy_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_BoneName_2 = CallFunc_BreakHitResult_BoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_ElementIndex_2 = CallFunc_BreakHitResult_ElementIndex_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_Vector3fToString_ReturnValue_1 = CallFunc_Conv_Vector3fToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_53 = CallFunc_IsValid_ReturnValue_53;
	Parms.CallFunc_GetOwner_ReturnValue_68 = CallFunc_GetOwner_ReturnValue_68;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.K2Node_DynamicCast_AsController_10 = K2Node_DynamicCast_AsController_10;
	Parms.K2Node_DynamicCast_bSuccess_78 = K2Node_DynamicCast_bSuccess_78;
	Parms.CallFunc_K2_GetPawn_ReturnValue_16 = CallFunc_K2_GetPawn_ReturnValue_16;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_54 = CallFunc_IsValid_ReturnValue_54;
	Parms.CallFunc_GetComponentByClass_ReturnValue_10 = CallFunc_GetComponentByClass_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_55 = CallFunc_IsValid_ReturnValue_55;
	Parms.CallFunc_IsValid_ReturnValue_56 = CallFunc_IsValid_ReturnValue_56;
	Parms.CallFunc_GetOwner_ReturnValue_69 = CallFunc_GetOwner_ReturnValue_69;
	Parms.K2Node_DynamicCast_AsController_11 = K2Node_DynamicCast_AsController_11;
	Parms.K2Node_DynamicCast_bSuccess_79 = K2Node_DynamicCast_bSuccess_79;
	Parms.CallFunc_IsValid_ReturnValue_57 = CallFunc_IsValid_ReturnValue_57;
	Parms.CallFunc_K2_GetPawn_ReturnValue_17 = CallFunc_K2_GetPawn_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_58 = CallFunc_IsValid_ReturnValue_58;
	Parms.CallFunc_GetComponentByClass_ReturnValue_11 = CallFunc_GetComponentByClass_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_59 = CallFunc_IsValid_ReturnValue_59;
	Parms.CallFunc_GetOwner_ReturnValue_70 = CallFunc_GetOwner_ReturnValue_70;
	Parms.K2Node_DynamicCast_AsController_12 = K2Node_DynamicCast_AsController_12;
	Parms.K2Node_DynamicCast_bSuccess_80 = K2Node_DynamicCast_bSuccess_80;
	Parms.CallFunc_IsValid_ReturnValue_60 = CallFunc_IsValid_ReturnValue_60;
	Parms.CallFunc_K2_GetPawn_ReturnValue_18 = CallFunc_K2_GetPawn_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_61 = CallFunc_IsValid_ReturnValue_61;
	Parms.CallFunc_GetComponentByClass_ReturnValue_12 = CallFunc_GetComponentByClass_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_62 = CallFunc_IsValid_ReturnValue_62;
	Parms.CallFunc_GetOwner_ReturnValue_71 = CallFunc_GetOwner_ReturnValue_71;
	Parms.CallFunc_IsValid_ReturnValue_63 = CallFunc_IsValid_ReturnValue_63;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_3 = CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_64 = CallFunc_IsValid_ReturnValue_64;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_72 = CallFunc_GetOwner_ReturnValue_72;
	Parms.K2Node_CustomEvent_Bool = K2Node_CustomEvent_Bool;
	Parms.CallFunc_IsValid_ReturnValue_65 = CallFunc_IsValid_ReturnValue_65;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_4 = CallFunc_GetAbilitySystemComponent_ReturnValue_4;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_66 = CallFunc_IsValid_ReturnValue_66;
	Parms.CallFunc_GetOwner_ReturnValue_73 = CallFunc_GetOwner_ReturnValue_73;
	Parms.CallFunc_IsValid_ReturnValue_67 = CallFunc_IsValid_ReturnValue_67;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller_11 = K2Node_DynamicCast_AsBP_Player_Controller_11;
	Parms.K2Node_DynamicCast_bSuccess_81 = K2Node_DynamicCast_bSuccess_81;
	Parms.CallFunc_IsValid_ReturnValue_68 = CallFunc_IsValid_ReturnValue_68;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_82 = K2Node_DynamicCast_bSuccess_82;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_69 = CallFunc_IsValid_ReturnValue_69;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetArachnophobiaModeEnabled_ReturnValue = CallFunc_GetArachnophobiaModeEnabled_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_74 = CallFunc_GetOwner_ReturnValue_74;
	Parms.CallFunc_GetOwner_ReturnValue_75 = CallFunc_GetOwner_ReturnValue_75;
	Parms.K2Node_DynamicCast_AsController_13 = K2Node_DynamicCast_AsController_13;
	Parms.K2Node_DynamicCast_bSuccess_83 = K2Node_DynamicCast_bSuccess_83;
	Parms.K2Node_DynamicCast_AsController_14 = K2Node_DynamicCast_AsController_14;
	Parms.K2Node_DynamicCast_bSuccess_84 = K2Node_DynamicCast_bSuccess_84;
	Parms.CallFunc_K2_GetPawn_ReturnValue_19 = CallFunc_K2_GetPawn_ReturnValue_19;
	Parms.CallFunc_K2_GetPawn_ReturnValue_20 = CallFunc_K2_GetPawn_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_70 = CallFunc_IsValid_ReturnValue_70;
	Parms.CallFunc_IsValid_ReturnValue_71 = CallFunc_IsValid_ReturnValue_71;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_5 = CallFunc_GetAbilitySystemComponent_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_13 = CallFunc_GetComponentByClass_ReturnValue_13;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_72 = CallFunc_IsValid_ReturnValue_72;
	Parms.CallFunc_IsValid_ReturnValue_73 = CallFunc_IsValid_ReturnValue_73;
	Parms.CallFunc_IsValid_ReturnValue_74 = CallFunc_IsValid_ReturnValue_74;
	Parms.CallFunc_IsValid_ReturnValue_75 = CallFunc_IsValid_ReturnValue_75;
	Parms.CallFunc_GetOwner_ReturnValue_76 = CallFunc_GetOwner_ReturnValue_76;
	Parms.K2Node_DynamicCast_AsController_15 = K2Node_DynamicCast_AsController_15;
	Parms.K2Node_DynamicCast_bSuccess_85 = K2Node_DynamicCast_bSuccess_85;
	Parms.CallFunc_IsValid_ReturnValue_76 = CallFunc_IsValid_ReturnValue_76;
	Parms.CallFunc_K2_GetPawn_ReturnValue_21 = CallFunc_K2_GetPawn_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_77 = CallFunc_IsValid_ReturnValue_77;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_6 = CallFunc_GetAbilitySystemComponent_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_78 = CallFunc_IsValid_ReturnValue_78;
	Parms.Temp_int_Array_Index_Variable_15 = Temp_int_Array_Index_Variable_15;
	Parms.CallFunc_GetOwner_ReturnValue_77 = CallFunc_GetOwner_ReturnValue_77;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.K2Node_DynamicCast_AsController_16 = K2Node_DynamicCast_AsController_16;
	Parms.K2Node_DynamicCast_bSuccess_86 = K2Node_DynamicCast_bSuccess_86;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_22 = CallFunc_K2_GetPawn_ReturnValue_22;
	Parms.CallFunc_IsValid_ReturnValue_79 = CallFunc_IsValid_ReturnValue_79;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_7 = CallFunc_GetAbilitySystemComponent_ReturnValue_7;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_80 = CallFunc_IsValid_ReturnValue_80;
	Parms.CallFunc_IsValid_ReturnValue_81 = CallFunc_IsValid_ReturnValue_81;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_82 = CallFunc_IsValid_ReturnValue_82;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_78 = CallFunc_GetOwner_ReturnValue_78;
	Parms.K2Node_DynamicCast_AsController_17 = K2Node_DynamicCast_AsController_17;
	Parms.K2Node_DynamicCast_bSuccess_87 = K2Node_DynamicCast_bSuccess_87;
	Parms.CallFunc_IsValid_ReturnValue_83 = CallFunc_IsValid_ReturnValue_83;
	Parms.CallFunc_K2_GetPawn_ReturnValue_23 = CallFunc_K2_GetPawn_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_84 = CallFunc_IsValid_ReturnValue_84;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_8 = CallFunc_GetAbilitySystemComponent_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_85 = CallFunc_IsValid_ReturnValue_85;
	Parms.CallFunc_GetOwner_ReturnValue_79 = CallFunc_GetOwner_ReturnValue_79;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.K2Node_DynamicCast_AsController_18 = K2Node_DynamicCast_AsController_18;
	Parms.K2Node_DynamicCast_bSuccess_88 = K2Node_DynamicCast_bSuccess_88;
	Parms.CallFunc_K2_GetPawn_ReturnValue_24 = CallFunc_K2_GetPawn_ReturnValue_24;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_86 = CallFunc_IsValid_ReturnValue_86;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_9 = CallFunc_GetAbilitySystemComponent_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_87 = CallFunc_IsValid_ReturnValue_87;
	Parms.CallFunc_IsValid_ReturnValue_88 = CallFunc_IsValid_ReturnValue_88;
	Parms.CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold = CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold;
	Parms.CallFunc_GetOwner_ReturnValue_80 = CallFunc_GetOwner_ReturnValue_80;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsController_19 = K2Node_DynamicCast_AsController_19;
	Parms.K2Node_DynamicCast_bSuccess_89 = K2Node_DynamicCast_bSuccess_89;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_25 = CallFunc_K2_GetPawn_ReturnValue_25;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_89 = CallFunc_IsValid_ReturnValue_89;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_10 = CallFunc_GetAbilitySystemComponent_ReturnValue_10;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_1 = CallFunc_MakeOutgoingSpec_ReturnValue_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_90 = CallFunc_IsValid_ReturnValue_90;
	Parms.CallFunc_IsValid_ReturnValue_91 = CallFunc_IsValid_ReturnValue_91;
	Parms.CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold = CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.CallFunc_GetOwner_ReturnValue_81 = CallFunc_GetOwner_ReturnValue_81;
	Parms.CallFunc_GetOwner_ReturnValue_82 = CallFunc_GetOwner_ReturnValue_82;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_37 = K2Node_DynamicCast_AsNWXPlayer_Controller_37;
	Parms.K2Node_DynamicCast_bSuccess_90 = K2Node_DynamicCast_bSuccess_90;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_38 = K2Node_DynamicCast_AsNWXPlayer_Controller_38;
	Parms.K2Node_DynamicCast_bSuccess_91 = K2Node_DynamicCast_bSuccess_91;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_36 = CallFunc_CanUseSupportCommands_ReturnValue_36;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_37 = CallFunc_CanUseSupportCommands_ReturnValue_37;
	Parms.CallFunc_GetOwner_ReturnValue_83 = CallFunc_GetOwner_ReturnValue_83;
	Parms.CallFunc_GetOwner_ReturnValue_84 = CallFunc_GetOwner_ReturnValue_84;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_39 = K2Node_DynamicCast_AsNWXPlayer_Controller_39;
	Parms.K2Node_DynamicCast_bSuccess_92 = K2Node_DynamicCast_bSuccess_92;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_40 = K2Node_DynamicCast_AsNWXPlayer_Controller_40;
	Parms.K2Node_DynamicCast_bSuccess_93 = K2Node_DynamicCast_bSuccess_93;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_38 = CallFunc_CanUseSupportCommands_ReturnValue_38;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_39 = CallFunc_CanUseSupportCommands_ReturnValue_39;
	Parms.Temp_int_Array_Index_Variable_16 = Temp_int_Array_Index_Variable_16;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_85 = CallFunc_GetOwner_ReturnValue_85;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_41 = K2Node_DynamicCast_AsNWXPlayer_Controller_41;
	Parms.K2Node_DynamicCast_bSuccess_94 = K2Node_DynamicCast_bSuccess_94;
	Parms.CallFunc_GetOwner_ReturnValue_86 = CallFunc_GetOwner_ReturnValue_86;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_40 = CallFunc_CanUseSupportCommands_ReturnValue_40;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_42 = K2Node_DynamicCast_AsNWXPlayer_Controller_42;
	Parms.K2Node_DynamicCast_bSuccess_95 = K2Node_DynamicCast_bSuccess_95;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_41 = CallFunc_CanUseSupportCommands_ReturnValue_41;
	Parms.Temp_int_Loop_Counter_Variable_15 = Temp_int_Loop_Counter_Variable_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_GetOwner_ReturnValue_87 = CallFunc_GetOwner_ReturnValue_87;
	Parms.CallFunc_GetOwner_ReturnValue_88 = CallFunc_GetOwner_ReturnValue_88;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_43 = K2Node_DynamicCast_AsNWXPlayer_Controller_43;
	Parms.K2Node_DynamicCast_bSuccess_96 = K2Node_DynamicCast_bSuccess_96;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_44 = K2Node_DynamicCast_AsNWXPlayer_Controller_44;
	Parms.K2Node_DynamicCast_bSuccess_97 = K2Node_DynamicCast_bSuccess_97;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_42 = CallFunc_CanUseSupportCommands_ReturnValue_42;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_43 = CallFunc_CanUseSupportCommands_ReturnValue_43;
	Parms.CallFunc_GetOwner_ReturnValue_89 = CallFunc_GetOwner_ReturnValue_89;
	Parms.CallFunc_GetOwner_ReturnValue_90 = CallFunc_GetOwner_ReturnValue_90;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_45 = K2Node_DynamicCast_AsNWXPlayer_Controller_45;
	Parms.K2Node_DynamicCast_bSuccess_98 = K2Node_DynamicCast_bSuccess_98;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_46 = K2Node_DynamicCast_AsNWXPlayer_Controller_46;
	Parms.K2Node_DynamicCast_bSuccess_99 = K2Node_DynamicCast_bSuccess_99;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_44 = CallFunc_CanUseSupportCommands_ReturnValue_44;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_45 = CallFunc_CanUseSupportCommands_ReturnValue_45;
	Parms.CallFunc_GetOwner_ReturnValue_91 = CallFunc_GetOwner_ReturnValue_91;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_47 = K2Node_DynamicCast_AsNWXPlayer_Controller_47;
	Parms.K2Node_DynamicCast_bSuccess_100 = K2Node_DynamicCast_bSuccess_100;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_46 = CallFunc_CanUseSupportCommands_ReturnValue_46;
	Parms.CallFunc_GetOwner_ReturnValue_92 = CallFunc_GetOwner_ReturnValue_92;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_48 = K2Node_DynamicCast_AsNWXPlayer_Controller_48;
	Parms.K2Node_DynamicCast_bSuccess_101 = K2Node_DynamicCast_bSuccess_101;
	Parms.Temp_int_Array_Index_Variable_17 = Temp_int_Array_Index_Variable_17;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_47 = CallFunc_CanUseSupportCommands_ReturnValue_47;
	Parms.CallFunc_GetOwner_ReturnValue_93 = CallFunc_GetOwner_ReturnValue_93;
	Parms.CallFunc_GetOwner_ReturnValue_94 = CallFunc_GetOwner_ReturnValue_94;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_49 = K2Node_DynamicCast_AsNWXPlayer_Controller_49;
	Parms.K2Node_DynamicCast_bSuccess_102 = K2Node_DynamicCast_bSuccess_102;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_50 = K2Node_DynamicCast_AsNWXPlayer_Controller_50;
	Parms.K2Node_DynamicCast_bSuccess_103 = K2Node_DynamicCast_bSuccess_103;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_48 = CallFunc_CanUseSupportCommands_ReturnValue_48;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_49 = CallFunc_CanUseSupportCommands_ReturnValue_49;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.CallFunc_GetOwner_ReturnValue_95 = CallFunc_GetOwner_ReturnValue_95;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_51 = K2Node_DynamicCast_AsNWXPlayer_Controller_51;
	Parms.K2Node_DynamicCast_bSuccess_104 = K2Node_DynamicCast_bSuccess_104;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_50 = CallFunc_CanUseSupportCommands_ReturnValue_50;
	Parms.CallFunc_GetOwner_ReturnValue_96 = CallFunc_GetOwner_ReturnValue_96;
	Parms.CallFunc_GetOwner_ReturnValue_97 = CallFunc_GetOwner_ReturnValue_97;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_52 = K2Node_DynamicCast_AsNWXPlayer_Controller_52;
	Parms.K2Node_DynamicCast_bSuccess_105 = K2Node_DynamicCast_bSuccess_105;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_53 = K2Node_DynamicCast_AsNWXPlayer_Controller_53;
	Parms.K2Node_DynamicCast_bSuccess_106 = K2Node_DynamicCast_bSuccess_106;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_51 = CallFunc_CanUseSupportCommands_ReturnValue_51;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_52 = CallFunc_CanUseSupportCommands_ReturnValue_52;
	Parms.Temp_int_Loop_Counter_Variable_16 = Temp_int_Loop_Counter_Variable_16;
	Parms.Temp_int_Loop_Counter_Variable_17 = Temp_int_Loop_Counter_Variable_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_GetOwner_ReturnValue_98 = CallFunc_GetOwner_ReturnValue_98;
	Parms.CallFunc_GetOwner_ReturnValue_99 = CallFunc_GetOwner_ReturnValue_99;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_54 = K2Node_DynamicCast_AsNWXPlayer_Controller_54;
	Parms.K2Node_DynamicCast_bSuccess_107 = K2Node_DynamicCast_bSuccess_107;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_53 = CallFunc_CanUseSupportCommands_ReturnValue_53;
	Parms.CallFunc_GetOwner_ReturnValue_100 = CallFunc_GetOwner_ReturnValue_100;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_55 = K2Node_DynamicCast_AsNWXPlayer_Controller_55;
	Parms.K2Node_DynamicCast_bSuccess_108 = K2Node_DynamicCast_bSuccess_108;
	Parms.Temp_int_Array_Index_Variable_18 = Temp_int_Array_Index_Variable_18;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_54 = CallFunc_CanUseSupportCommands_ReturnValue_54;
	Parms.Temp_bool_True_if_break_was_hit_Variable_4 = Temp_bool_True_if_break_was_hit_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_101 = CallFunc_GetOwner_ReturnValue_101;
	Parms.Temp_int_Loop_Counter_Variable_18 = Temp_int_Loop_Counter_Variable_18;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_56 = K2Node_DynamicCast_AsNWXPlayer_Controller_56;
	Parms.K2Node_DynamicCast_bSuccess_109 = K2Node_DynamicCast_bSuccess_109;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_55 = CallFunc_CanUseSupportCommands_ReturnValue_55;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_GetOwner_ReturnValue_102 = CallFunc_GetOwner_ReturnValue_102;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_57 = K2Node_DynamicCast_AsNWXPlayer_Controller_57;
	Parms.K2Node_DynamicCast_bSuccess_110 = K2Node_DynamicCast_bSuccess_110;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_56 = CallFunc_CanUseSupportCommands_ReturnValue_56;
	Parms.CallFunc_GetOwner_ReturnValue_103 = CallFunc_GetOwner_ReturnValue_103;
	Parms.CallFunc_GetOwner_ReturnValue_104 = CallFunc_GetOwner_ReturnValue_104;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_58 = K2Node_DynamicCast_AsNWXPlayer_Controller_58;
	Parms.K2Node_DynamicCast_bSuccess_111 = K2Node_DynamicCast_bSuccess_111;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_57 = CallFunc_CanUseSupportCommands_ReturnValue_57;
	Parms.CallFunc_GetOwner_ReturnValue_105 = CallFunc_GetOwner_ReturnValue_105;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_59 = K2Node_DynamicCast_AsNWXPlayer_Controller_59;
	Parms.K2Node_DynamicCast_bSuccess_112 = K2Node_DynamicCast_bSuccess_112;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_58 = CallFunc_CanUseSupportCommands_ReturnValue_58;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_FindTargetStructures_Hits = CallFunc_FindTargetStructures_Hits;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Array_Length_ReturnValue_14 = CallFunc_Array_Length_ReturnValue_14;
	Parms.CallFunc_GetHitObject_OutObject = CallFunc_GetHitObject_OutObject;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsStructure_Destroyable_Interface = K2Node_DynamicCast_AsStructure_Destroyable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_113 = K2Node_DynamicCast_bSuccess_113;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character_3 = CallFunc_GetOwnerCharacter_AsBP_Character_3;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;
	Parms.CallFunc_FindTargetStructures_Hits_1 = CallFunc_FindTargetStructures_Hits_1;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Array_Length_ReturnValue_15 = CallFunc_Array_Length_ReturnValue_15;
	Parms.CallFunc_GetHitObject_OutObject_1 = CallFunc_GetHitObject_OutObject_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_11 = CallFunc_Less_IntInt_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess_114 = K2Node_DynamicCast_bSuccess_114;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.K2Node_DynamicCast_AsStructure_Destroyable_Interface_1 = K2Node_DynamicCast_AsStructure_Destroyable_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_115 = K2Node_DynamicCast_bSuccess_115;
	Parms.CallFunc_IsValid_ReturnValue_92 = CallFunc_IsValid_ReturnValue_92;
	Parms.CallFunc_GetOwnerCharacter_AsBP_Character_4 = CallFunc_GetOwnerCharacter_AsBP_Character_4;
	Parms.CallFunc_ExecuteDestroyStructure_Success_1 = CallFunc_ExecuteDestroyStructure_Success_1;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.CallFunc_FindTargetStructures_Hits_2 = CallFunc_FindTargetStructures_Hits_2;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Length_ReturnValue_16 = CallFunc_Array_Length_ReturnValue_16;
	Parms.CallFunc_GetHitObject_OutObject_2 = CallFunc_GetHitObject_OutObject_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_12 = CallFunc_Less_IntInt_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_116 = K2Node_DynamicCast_bSuccess_116;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue = CallFunc_SetStructureSchematicState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_93 = CallFunc_IsValid_ReturnValue_93;
	Parms.CallFunc_FindTargetStructures_Hits_3 = CallFunc_FindTargetStructures_Hits_3;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_GetHitObject_OutObject_3 = CallFunc_GetHitObject_OutObject_3;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1 = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_117 = K2Node_DynamicCast_bSuccess_117;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface_1 = K2Node_DynamicCast_AsStructure_State_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_118 = K2Node_DynamicCast_bSuccess_118;
	Parms.CallFunc_GetCompositeStructure_Composite_1 = CallFunc_GetCompositeStructure_Composite_1;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue_1 = CallFunc_SetStructureSchematicState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface_2 = K2Node_DynamicCast_AsStructure_State_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_119 = K2Node_DynamicCast_bSuccess_119;
	Parms.CallFunc_IsValid_ReturnValue_94 = CallFunc_IsValid_ReturnValue_94;
	Parms.CallFunc_SetStructureSchematicState_ReturnValue_2 = CallFunc_SetStructureSchematicState_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_95 = CallFunc_IsValid_ReturnValue_95;
	Parms.CallFunc_Array_Length_ReturnValue_17 = CallFunc_Array_Length_ReturnValue_17;
	Parms.CallFunc_Less_IntInt_ReturnValue_13 = CallFunc_Less_IntInt_ReturnValue_13;
	Parms.Temp_int_Array_Index_Variable_19 = Temp_int_Array_Index_Variable_19;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_GetPlayerName_ReturnValue_1 = CallFunc_GetPlayerName_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_96 = CallFunc_IsValid_ReturnValue_96;
	Parms.CallFunc_IsValid_ReturnValue_97 = CallFunc_IsValid_ReturnValue_97;
	Parms.CallFunc_GetOwner_ReturnValue_106 = CallFunc_GetOwner_ReturnValue_106;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_60 = K2Node_DynamicCast_AsNWXPlayer_Controller_60;
	Parms.K2Node_DynamicCast_bSuccess_120 = K2Node_DynamicCast_bSuccess_120;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_59 = CallFunc_CanUseSupportCommands_ReturnValue_59;
	Parms.CallFunc_GetOwner_ReturnValue_107 = CallFunc_GetOwner_ReturnValue_107;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_61 = K2Node_DynamicCast_AsNWXPlayer_Controller_61;
	Parms.K2Node_DynamicCast_bSuccess_121 = K2Node_DynamicCast_bSuccess_121;
	Parms.CallFunc_GetOwner_ReturnValue_108 = CallFunc_GetOwner_ReturnValue_108;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_60 = CallFunc_CanUseSupportCommands_ReturnValue_60;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_62 = K2Node_DynamicCast_AsNWXPlayer_Controller_62;
	Parms.K2Node_DynamicCast_bSuccess_122 = K2Node_DynamicCast_bSuccess_122;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_61 = CallFunc_CanUseSupportCommands_ReturnValue_61;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetOwner_ReturnValue_109 = CallFunc_GetOwner_ReturnValue_109;
	Parms.K2Node_CustomEvent_Tag_16 = K2Node_CustomEvent_Tag_16;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_63 = K2Node_DynamicCast_AsNWXPlayer_Controller_63;
	Parms.K2Node_DynamicCast_bSuccess_123 = K2Node_DynamicCast_bSuccess_123;
	Parms.K2Node_CustomEvent_Tag_15 = K2Node_CustomEvent_Tag_15;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_62 = CallFunc_CanUseSupportCommands_ReturnValue_62;
	Parms.CallFunc_GetCreatureManager_CreatureManager_1 = CallFunc_GetCreatureManager_CreatureManager_1;
	Parms.CallFunc_GetCreatureManager_CreatureManager_2 = CallFunc_GetCreatureManager_CreatureManager_2;
	Parms.CallFunc_IsValid_ReturnValue_98 = CallFunc_IsValid_ReturnValue_98;
	Parms.CallFunc_IsValid_ReturnValue_99 = CallFunc_IsValid_ReturnValue_99;
	Parms.K2Node_CustomEvent_Range_1 = K2Node_CustomEvent_Range_1;
	Parms.K2Node_CustomEvent_Tag_14 = K2Node_CustomEvent_Tag_14;
	Parms.CallFunc_GetOwner_ReturnValue_110 = CallFunc_GetOwner_ReturnValue_110;
	Parms.CallFunc_GetCreatureManager_CreatureManager_3 = CallFunc_GetCreatureManager_CreatureManager_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_100 = CallFunc_IsValid_ReturnValue_100;
	Parms.K2Node_CustomEvent_Range = K2Node_CustomEvent_Range;
	Parms.K2Node_CustomEvent_Tag_13 = K2Node_CustomEvent_Tag_13;
	Parms.CallFunc_GetOwner_ReturnValue_111 = CallFunc_GetOwner_ReturnValue_111;
	Parms.CallFunc_GetCreatureManager_CreatureManager_4 = CallFunc_GetCreatureManager_CreatureManager_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_101 = CallFunc_IsValid_ReturnValue_101;
	Parms.K2Node_CustomEvent_Tag_12 = K2Node_CustomEvent_Tag_12;
	Parms.CallFunc_GetCreatureManager_CreatureManager_5 = CallFunc_GetCreatureManager_CreatureManager_5;
	Parms.K2Node_CustomEvent_NumberOfBound = K2Node_CustomEvent_NumberOfBound;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_1 = K2Node_DynamicCast_AsBP_Creature_Manager_1;
	Parms.K2Node_DynamicCast_bSuccess_124 = K2Node_DynamicCast_bSuccess_124;
	Parms.CallFunc_IsValid_ReturnValue_102 = CallFunc_IsValid_ReturnValue_102;
	Parms.K2Node_CustomEvent_String = K2Node_CustomEvent_String;
	Parms.K2Node_CustomEvent_LogMessage_1 = K2Node_CustomEvent_LogMessage_1;
	Parms.K2Node_CustomEvent_NWXLogLevel_1 = K2Node_CustomEvent_NWXLogLevel_1;
	Parms.K2Node_CustomEvent_LogCategory_1 = K2Node_CustomEvent_LogCategory_1;
	Parms.K2Node_CustomEvent_bPrintToScreen_1 = K2Node_CustomEvent_bPrintToScreen_1;
	Parms.K2Node_CustomEvent_bPrintToLog_1 = K2Node_CustomEvent_bPrintToLog_1;
	Parms.K2Node_CustomEvent_bSuppressStackTrace = K2Node_CustomEvent_bSuppressStackTrace;
	Parms.CallFunc_GetCreatureManager_CreatureManager_6 = CallFunc_GetCreatureManager_CreatureManager_6;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_2 = K2Node_DynamicCast_AsBP_Creature_Manager_2;
	Parms.K2Node_DynamicCast_bSuccess_125 = K2Node_DynamicCast_bSuccess_125;
	Parms.CallFunc_IsAI_Enabled_AIEnabled = CallFunc_IsAI_Enabled_AIEnabled;
	Parms.K2Node_CustomEvent_GameplayTag = K2Node_CustomEvent_GameplayTag;
	Parms.Temp_int_Loop_Counter_Variable_19 = Temp_int_Loop_Counter_Variable_19;
	Parms.K2Node_CustomEvent_Tag_11 = K2Node_CustomEvent_Tag_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_14 = CallFunc_Less_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.CallFunc_GetCreatureManager_CreatureManager_7 = CallFunc_GetCreatureManager_CreatureManager_7;
	Parms.K2Node_CustomEvent_Tag_10 = K2Node_CustomEvent_Tag_10;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_3 = K2Node_DynamicCast_AsBP_Creature_Manager_3;
	Parms.K2Node_DynamicCast_bSuccess_126 = K2Node_DynamicCast_bSuccess_126;
	Parms.CallFunc_IsValid_ReturnValue_103 = CallFunc_IsValid_ReturnValue_103;
	Parms.CallFunc_GetCreatureManager_CreatureManager_8 = CallFunc_GetCreatureManager_CreatureManager_8;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_4 = K2Node_DynamicCast_AsBP_Creature_Manager_4;
	Parms.K2Node_DynamicCast_bSuccess_127 = K2Node_DynamicCast_bSuccess_127;
	Parms.CallFunc_IsValid_ReturnValue_104 = CallFunc_IsValid_ReturnValue_104;
	Parms.K2Node_CustomEvent_Command = K2Node_CustomEvent_Command;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_CustomEvent_Tag_9 = K2Node_CustomEvent_Tag_9;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_IsValid_ReturnValue_105 = CallFunc_IsValid_ReturnValue_105;
	Parms.CallFunc_Array_Length_ReturnValue_18 = CallFunc_Array_Length_ReturnValue_18;
	Parms.CallFunc_Less_IntInt_ReturnValue_15 = CallFunc_Less_IntInt_ReturnValue_15;
	Parms.K2Node_CustomEvent_Tag_8 = K2Node_CustomEvent_Tag_8;
	Parms.K2Node_CustomEvent_Tag_7 = K2Node_CustomEvent_Tag_7;
	Parms.K2Node_CustomEvent_Controller_1 = K2Node_CustomEvent_Controller_1;
	Parms.CallFunc_GetOwner_ReturnValue_112 = CallFunc_GetOwner_ReturnValue_112;
	Parms.CallFunc_K2_GetPawn_ReturnValue_26 = CallFunc_K2_GetPawn_ReturnValue_26;
	Parms.K2Node_DynamicCast_AsController_20 = K2Node_DynamicCast_AsController_20;
	Parms.K2Node_DynamicCast_bSuccess_128 = K2Node_DynamicCast_bSuccess_128;
	Parms.K2Node_CustomEvent_Are = K2Node_CustomEvent_Are;
	Parms.K2Node_CustomEvent_Excellent = K2Node_CustomEvent_Excellent;
	Parms.CallFunc_GetOwner_ReturnValue_113 = CallFunc_GetOwner_ReturnValue_113;
	Parms.Temp_int_Array_Index_Variable_20 = Temp_int_Array_Index_Variable_20;
	Parms.K2Node_DynamicCast_AsController_21 = K2Node_DynamicCast_AsController_21;
	Parms.K2Node_DynamicCast_bSuccess_129 = K2Node_DynamicCast_bSuccess_129;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_K2_GetPawn_ReturnValue_27 = CallFunc_K2_GetPawn_ReturnValue_27;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_CustomEvent_RowHandle_2 = K2Node_CustomEvent_RowHandle_2;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCreatureManager_CreatureManager_9 = CallFunc_GetCreatureManager_CreatureManager_9;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_5 = K2Node_DynamicCast_AsBP_Creature_Manager_5;
	Parms.K2Node_DynamicCast_bSuccess_130 = K2Node_DynamicCast_bSuccess_130;
	Parms.CallFunc_GetCreatureManager_CreatureManager_10 = CallFunc_GetCreatureManager_CreatureManager_10;
	Parms.CallFunc_IsAI_Enabled_AIEnabled_1 = CallFunc_IsAI_Enabled_AIEnabled_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_6 = K2Node_DynamicCast_AsBP_Creature_Manager_6;
	Parms.K2Node_DynamicCast_bSuccess_131 = K2Node_DynamicCast_bSuccess_131;
	Parms.CallFunc_IsValid_ReturnValue_106 = CallFunc_IsValid_ReturnValue_106;
	Parms.CallFunc_IsAI_Enabled_AIEnabled_2 = CallFunc_IsAI_Enabled_AIEnabled_2;
	Parms.CallFunc_GetOwner_ReturnValue_114 = CallFunc_GetOwner_ReturnValue_114;
	Parms.K2Node_CustomEvent_RowHandle_1 = K2Node_CustomEvent_RowHandle_1;
	Parms.K2Node_DynamicCast_AsController_22 = K2Node_DynamicCast_AsController_22;
	Parms.K2Node_DynamicCast_bSuccess_132 = K2Node_DynamicCast_bSuccess_132;
	Parms.CallFunc_K2_GetPawn_ReturnValue_28 = CallFunc_K2_GetPawn_ReturnValue_28;
	Parms.CallFunc_GetGameMode_ReturnValue_9 = CallFunc_GetGameMode_ReturnValue_9;
	Parms.CallFunc_GetTransform_ReturnValue_2 = CallFunc_GetTransform_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Game_Mode = K2Node_DynamicCast_AsBP_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_133 = K2Node_DynamicCast_bSuccess_133;
	Parms.CallFunc_SpawnSpawner_Spawner = CallFunc_SpawnSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue_107 = CallFunc_IsValid_ReturnValue_107;
	Parms.CallFunc_IsValid_ReturnValue_108 = CallFunc_IsValid_ReturnValue_108;
	Parms.K2Node_CustomEvent_TimeOfDayUpdatesDisabled = K2Node_CustomEvent_TimeOfDayUpdatesDisabled;
	Parms.CallFunc_GetGameMode_ReturnValue_10 = CallFunc_GetGameMode_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsBP_Game_Mode_1 = K2Node_DynamicCast_AsBP_Game_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_134 = K2Node_DynamicCast_bSuccess_134;
	Parms.CallFunc_IsValid_ReturnValue_109 = CallFunc_IsValid_ReturnValue_109;
	Parms.CallFunc_IsValid_ReturnValue_110 = CallFunc_IsValid_ReturnValue_110;
	Parms.K2Node_CustomEvent_TimeOfDay = K2Node_CustomEvent_TimeOfDay;
	Parms.K2Node_CustomEvent_Tag_6 = K2Node_CustomEvent_Tag_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCreatureManager_CreatureManager_11 = CallFunc_GetCreatureManager_CreatureManager_11;
	Parms.CallFunc_GetCreatureManager_CreatureManager_12 = CallFunc_GetCreatureManager_CreatureManager_12;
	Parms.CallFunc_IsValid_ReturnValue_111 = CallFunc_IsValid_ReturnValue_111;
	Parms.CallFunc_IsValid_ReturnValue_112 = CallFunc_IsValid_ReturnValue_112;
	Parms.Temp_int_Array_Index_Variable_21 = Temp_int_Array_Index_Variable_21;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1 = CallFunc_RemoveActiveEffectsWithTags_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.K2Node_CustomEvent_Tag_5 = K2Node_CustomEvent_Tag_5;
	Parms.K2Node_CustomEvent_Tag_4 = K2Node_CustomEvent_Tag_4;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.CallFunc_GetOwner_ReturnValue_115 = CallFunc_GetOwner_ReturnValue_115;
	Parms.CallFunc_K2_GetPawn_ReturnValue_29 = CallFunc_K2_GetPawn_ReturnValue_29;
	Parms.K2Node_DynamicCast_AsController_23 = K2Node_DynamicCast_AsController_23;
	Parms.K2Node_DynamicCast_bSuccess_135 = K2Node_DynamicCast_bSuccess_135;
	Parms.K2Node_CustomEvent_RowHandle = K2Node_CustomEvent_RowHandle;
	Parms.CallFunc_GetOwner_ReturnValue_116 = CallFunc_GetOwner_ReturnValue_116;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_DynamicCast_AsController_24 = K2Node_DynamicCast_AsController_24;
	Parms.K2Node_DynamicCast_bSuccess_136 = K2Node_DynamicCast_bSuccess_136;
	Parms.K2Node_CustomEvent_Tag_3 = K2Node_CustomEvent_Tag_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_30 = CallFunc_K2_GetPawn_ReturnValue_30;
	Parms.CallFunc_TraceToGetCreature_Creature = CallFunc_TraceToGetCreature_Creature;
	Parms.CallFunc_GetTransform_ReturnValue_3 = CallFunc_GetTransform_ReturnValue_3;
	Parms.CallFunc_SpawnSpawner_Spawner_1 = CallFunc_SpawnSpawner_Spawner_1;
	Parms.K2Node_CustomEvent_Tag_2 = K2Node_CustomEvent_Tag_2;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CustomEvent_Creature_3 = K2Node_CustomEvent_Creature_3;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CustomEvent_Creature_2 = K2Node_CustomEvent_Creature_2;
	Parms.CallFunc_IsValid_ReturnValue_113 = CallFunc_IsValid_ReturnValue_113;
	Parms.CallFunc_IsValid_ReturnValue_114 = CallFunc_IsValid_ReturnValue_114;
	Parms.CallFunc_TraceToGetCreature_Creature_1 = CallFunc_TraceToGetCreature_Creature_1;
	Parms.CallFunc_GetCreatureManager_CreatureManager_13 = CallFunc_GetCreatureManager_CreatureManager_13;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_5 = CallFunc_GetAllActorsOfClass_OutActors_5;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_7 = K2Node_DynamicCast_AsBP_Creature_Manager_7;
	Parms.K2Node_DynamicCast_bSuccess_137 = K2Node_DynamicCast_bSuccess_137;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_IsValid_ReturnValue_115 = CallFunc_IsValid_ReturnValue_115;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_116 = CallFunc_IsValid_ReturnValue_116;
	Parms.CallFunc_GetManagerDataString_DataString = CallFunc_GetManagerDataString_DataString;
	Parms.CallFunc_Array_Length_ReturnValue_19 = CallFunc_Array_Length_ReturnValue_19;
	Parms.CallFunc_Less_IntInt_ReturnValue_16 = CallFunc_Less_IntInt_ReturnValue_16;
	Parms.CallFunc_GetOwner_ReturnValue_117 = CallFunc_GetOwner_ReturnValue_117;
	Parms.Temp_int_Loop_Counter_Variable_20 = Temp_int_Loop_Counter_Variable_20;
	Parms.K2Node_DynamicCast_AsController_25 = K2Node_DynamicCast_AsController_25;
	Parms.K2Node_DynamicCast_bSuccess_138 = K2Node_DynamicCast_bSuccess_138;
	Parms.CallFunc_IsValid_ReturnValue_117 = CallFunc_IsValid_ReturnValue_117;
	Parms.CallFunc_K2_GetPawn_ReturnValue_31 = CallFunc_K2_GetPawn_ReturnValue_31;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_11 = CallFunc_GetAbilitySystemComponent_ReturnValue_11;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue_2 = CallFunc_RemoveActiveEffectsWithTags_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_118 = CallFunc_IsValid_ReturnValue_118;
	Parms.CallFunc_IsValid_ReturnValue_119 = CallFunc_IsValid_ReturnValue_119;
	Parms.CallFunc_Less_IntInt_ReturnValue_17 = CallFunc_Less_IntInt_ReturnValue_17;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.K2Node_CustomEvent_Creature_1 = K2Node_CustomEvent_Creature_1;
	Parms.CallFunc_GetOwner_ReturnValue_118 = CallFunc_GetOwner_ReturnValue_118;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_Villager = K2Node_DynamicCast_AsBP_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess_139 = K2Node_DynamicCast_bSuccess_139;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_140 = K2Node_DynamicCast_bSuccess_140;
	Parms.CallFunc_K2_GetPawn_ReturnValue_32 = CallFunc_K2_GetPawn_ReturnValue_32;
	Parms.K2Node_CustomEvent_Spawner_Handle = K2Node_CustomEvent_Spawner_Handle;
	Parms.K2Node_CustomEvent_Power = K2Node_CustomEvent_Power;
	Parms.CallFunc_GetOwner_ReturnValue_119 = CallFunc_GetOwner_ReturnValue_119;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsController_26 = K2Node_DynamicCast_AsController_26;
	Parms.K2Node_DynamicCast_bSuccess_141 = K2Node_DynamicCast_bSuccess_141;
	Parms.CallFunc_K2_GetPawn_ReturnValue_33 = CallFunc_K2_GetPawn_ReturnValue_33;
	Parms.CallFunc_GetTransform_ReturnValue_4 = CallFunc_GetTransform_ReturnValue_4;
	Parms.K2Node_CustomEvent_Creature = K2Node_CustomEvent_Creature;
	Parms.CallFunc_SpawnSpawner_Spawner_2 = CallFunc_SpawnSpawner_Spawner_2;
	Parms.CallFunc_GetOwner_ReturnValue_120 = CallFunc_GetOwner_ReturnValue_120;
	Parms.CallFunc_GetOwner_ReturnValue_121 = CallFunc_GetOwner_ReturnValue_121;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_64 = K2Node_DynamicCast_AsNWXPlayer_Controller_64;
	Parms.K2Node_DynamicCast_bSuccess_142 = K2Node_DynamicCast_bSuccess_142;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_65 = K2Node_DynamicCast_AsNWXPlayer_Controller_65;
	Parms.K2Node_DynamicCast_bSuccess_143 = K2Node_DynamicCast_bSuccess_143;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_63 = CallFunc_CanUseSupportCommands_ReturnValue_63;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_64 = CallFunc_CanUseSupportCommands_ReturnValue_64;
	Parms.CallFunc_GetOwner_ReturnValue_122 = CallFunc_GetOwner_ReturnValue_122;
	Parms.CallFunc_GetOwner_ReturnValue_123 = CallFunc_GetOwner_ReturnValue_123;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_66 = K2Node_DynamicCast_AsNWXPlayer_Controller_66;
	Parms.K2Node_DynamicCast_bSuccess_144 = K2Node_DynamicCast_bSuccess_144;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_67 = K2Node_DynamicCast_AsNWXPlayer_Controller_67;
	Parms.K2Node_DynamicCast_bSuccess_145 = K2Node_DynamicCast_bSuccess_145;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_65 = CallFunc_CanUseSupportCommands_ReturnValue_65;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_66 = CallFunc_CanUseSupportCommands_ReturnValue_66;
	Parms.CallFunc_GetOwner_ReturnValue_124 = CallFunc_GetOwner_ReturnValue_124;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_68 = K2Node_DynamicCast_AsNWXPlayer_Controller_68;
	Parms.K2Node_DynamicCast_bSuccess_146 = K2Node_DynamicCast_bSuccess_146;
	Parms.CallFunc_GetCreatureManager_CreatureManager_14 = CallFunc_GetCreatureManager_CreatureManager_14;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_67 = CallFunc_CanUseSupportCommands_ReturnValue_67;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_8 = K2Node_DynamicCast_AsBP_Creature_Manager_8;
	Parms.K2Node_DynamicCast_bSuccess_147 = K2Node_DynamicCast_bSuccess_147;
	Parms.CallFunc_GetOwner_ReturnValue_125 = CallFunc_GetOwner_ReturnValue_125;
	Parms.CallFunc_GetCreatureManager_CreatureManager_15 = CallFunc_GetCreatureManager_CreatureManager_15;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_69 = K2Node_DynamicCast_AsNWXPlayer_Controller_69;
	Parms.K2Node_DynamicCast_bSuccess_148 = K2Node_DynamicCast_bSuccess_148;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager_9 = K2Node_DynamicCast_AsBP_Creature_Manager_9;
	Parms.K2Node_DynamicCast_bSuccess_149 = K2Node_DynamicCast_bSuccess_149;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_68 = CallFunc_CanUseSupportCommands_ReturnValue_68;
	Parms.CallFunc_GetOwner_ReturnValue_126 = CallFunc_GetOwner_ReturnValue_126;
	Parms.CallFunc_GetOwner_ReturnValue_127 = CallFunc_GetOwner_ReturnValue_127;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_70 = K2Node_DynamicCast_AsNWXPlayer_Controller_70;
	Parms.K2Node_DynamicCast_bSuccess_150 = K2Node_DynamicCast_bSuccess_150;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_71 = K2Node_DynamicCast_AsNWXPlayer_Controller_71;
	Parms.K2Node_DynamicCast_bSuccess_151 = K2Node_DynamicCast_bSuccess_151;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_69 = CallFunc_CanUseSupportCommands_ReturnValue_69;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_70 = CallFunc_CanUseSupportCommands_ReturnValue_70;
	Parms.CallFunc_GetOwner_ReturnValue_128 = CallFunc_GetOwner_ReturnValue_128;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_72 = K2Node_DynamicCast_AsNWXPlayer_Controller_72;
	Parms.K2Node_DynamicCast_bSuccess_152 = K2Node_DynamicCast_bSuccess_152;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_71 = CallFunc_CanUseSupportCommands_ReturnValue_71;
	Parms.CallFunc_GetOwner_ReturnValue_129 = CallFunc_GetOwner_ReturnValue_129;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_73 = K2Node_DynamicCast_AsNWXPlayer_Controller_73;
	Parms.K2Node_DynamicCast_bSuccess_153 = K2Node_DynamicCast_bSuccess_153;
	Parms.CallFunc_GetOwner_ReturnValue_130 = CallFunc_GetOwner_ReturnValue_130;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_72 = CallFunc_CanUseSupportCommands_ReturnValue_72;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_74 = K2Node_DynamicCast_AsNWXPlayer_Controller_74;
	Parms.K2Node_DynamicCast_bSuccess_154 = K2Node_DynamicCast_bSuccess_154;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_73 = CallFunc_CanUseSupportCommands_ReturnValue_73;
	Parms.CallFunc_GetOwner_ReturnValue_131 = CallFunc_GetOwner_ReturnValue_131;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_75 = K2Node_DynamicCast_AsNWXPlayer_Controller_75;
	Parms.K2Node_DynamicCast_bSuccess_155 = K2Node_DynamicCast_bSuccess_155;
	Parms.CallFunc_GetOwner_ReturnValue_132 = CallFunc_GetOwner_ReturnValue_132;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_74 = CallFunc_CanUseSupportCommands_ReturnValue_74;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_76 = K2Node_DynamicCast_AsNWXPlayer_Controller_76;
	Parms.K2Node_DynamicCast_bSuccess_156 = K2Node_DynamicCast_bSuccess_156;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_75 = CallFunc_CanUseSupportCommands_ReturnValue_75;
	Parms.CallFunc_GetOwner_ReturnValue_133 = CallFunc_GetOwner_ReturnValue_133;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_77 = K2Node_DynamicCast_AsNWXPlayer_Controller_77;
	Parms.K2Node_DynamicCast_bSuccess_157 = K2Node_DynamicCast_bSuccess_157;
	Parms.CallFunc_GetOwner_ReturnValue_134 = CallFunc_GetOwner_ReturnValue_134;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_76 = CallFunc_CanUseSupportCommands_ReturnValue_76;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_78 = K2Node_DynamicCast_AsNWXPlayer_Controller_78;
	Parms.K2Node_DynamicCast_bSuccess_158 = K2Node_DynamicCast_bSuccess_158;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_77 = CallFunc_CanUseSupportCommands_ReturnValue_77;
	Parms.CallFunc_GetOwner_ReturnValue_135 = CallFunc_GetOwner_ReturnValue_135;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_79 = K2Node_DynamicCast_AsNWXPlayer_Controller_79;
	Parms.K2Node_DynamicCast_bSuccess_159 = K2Node_DynamicCast_bSuccess_159;
	Parms.CallFunc_GetOwner_ReturnValue_136 = CallFunc_GetOwner_ReturnValue_136;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_78 = CallFunc_CanUseSupportCommands_ReturnValue_78;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_80 = K2Node_DynamicCast_AsNWXPlayer_Controller_80;
	Parms.K2Node_DynamicCast_bSuccess_160 = K2Node_DynamicCast_bSuccess_160;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_79 = CallFunc_CanUseSupportCommands_ReturnValue_79;
	Parms.CallFunc_GetOwner_ReturnValue_137 = CallFunc_GetOwner_ReturnValue_137;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_81 = K2Node_DynamicCast_AsNWXPlayer_Controller_81;
	Parms.K2Node_DynamicCast_bSuccess_161 = K2Node_DynamicCast_bSuccess_161;
	Parms.CallFunc_GetOwner_ReturnValue_138 = CallFunc_GetOwner_ReturnValue_138;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_80 = CallFunc_CanUseSupportCommands_ReturnValue_80;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_82 = K2Node_DynamicCast_AsNWXPlayer_Controller_82;
	Parms.K2Node_DynamicCast_bSuccess_162 = K2Node_DynamicCast_bSuccess_162;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_81 = CallFunc_CanUseSupportCommands_ReturnValue_81;
	Parms.CallFunc_GetOwner_ReturnValue_139 = CallFunc_GetOwner_ReturnValue_139;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_83 = K2Node_DynamicCast_AsNWXPlayer_Controller_83;
	Parms.K2Node_DynamicCast_bSuccess_163 = K2Node_DynamicCast_bSuccess_163;
	Parms.CallFunc_GetOwner_ReturnValue_140 = CallFunc_GetOwner_ReturnValue_140;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_82 = CallFunc_CanUseSupportCommands_ReturnValue_82;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_84 = K2Node_DynamicCast_AsNWXPlayer_Controller_84;
	Parms.K2Node_DynamicCast_bSuccess_164 = K2Node_DynamicCast_bSuccess_164;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_83 = CallFunc_CanUseSupportCommands_ReturnValue_83;
	Parms.Temp_int_Loop_Counter_Variable_21 = Temp_int_Loop_Counter_Variable_21;
	Parms.CallFunc_Less_IntInt_ReturnValue_18 = CallFunc_Less_IntInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_21 = CallFunc_Add_IntInt_ReturnValue_21;
	Parms.CallFunc_GetOwner_ReturnValue_141 = CallFunc_GetOwner_ReturnValue_141;
	Parms.CallFunc_GetOwner_ReturnValue_142 = CallFunc_GetOwner_ReturnValue_142;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_85 = K2Node_DynamicCast_AsNWXPlayer_Controller_85;
	Parms.K2Node_DynamicCast_bSuccess_165 = K2Node_DynamicCast_bSuccess_165;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_86 = K2Node_DynamicCast_AsNWXPlayer_Controller_86;
	Parms.K2Node_DynamicCast_bSuccess_166 = K2Node_DynamicCast_bSuccess_166;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_84 = CallFunc_CanUseSupportCommands_ReturnValue_84;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_85 = CallFunc_CanUseSupportCommands_ReturnValue_85;
	Parms.CallFunc_GetOwner_ReturnValue_143 = CallFunc_GetOwner_ReturnValue_143;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_87 = K2Node_DynamicCast_AsNWXPlayer_Controller_87;
	Parms.K2Node_DynamicCast_bSuccess_167 = K2Node_DynamicCast_bSuccess_167;
	Parms.CallFunc_GetOwner_ReturnValue_144 = CallFunc_GetOwner_ReturnValue_144;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_86 = CallFunc_CanUseSupportCommands_ReturnValue_86;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_88 = K2Node_DynamicCast_AsNWXPlayer_Controller_88;
	Parms.K2Node_DynamicCast_bSuccess_168 = K2Node_DynamicCast_bSuccess_168;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_87 = CallFunc_CanUseSupportCommands_ReturnValue_87;
	Parms.CallFunc_GetOwner_ReturnValue_145 = CallFunc_GetOwner_ReturnValue_145;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_89 = K2Node_DynamicCast_AsNWXPlayer_Controller_89;
	Parms.K2Node_DynamicCast_bSuccess_169 = K2Node_DynamicCast_bSuccess_169;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_88 = CallFunc_CanUseSupportCommands_ReturnValue_88;
	Parms.CallFunc_GetOwner_ReturnValue_146 = CallFunc_GetOwner_ReturnValue_146;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_90 = K2Node_DynamicCast_AsNWXPlayer_Controller_90;
	Parms.K2Node_DynamicCast_bSuccess_170 = K2Node_DynamicCast_bSuccess_170;
	Parms.CallFunc_GetOwner_ReturnValue_147 = CallFunc_GetOwner_ReturnValue_147;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_89 = CallFunc_CanUseSupportCommands_ReturnValue_89;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_91 = K2Node_DynamicCast_AsNWXPlayer_Controller_91;
	Parms.K2Node_DynamicCast_bSuccess_171 = K2Node_DynamicCast_bSuccess_171;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_90 = CallFunc_CanUseSupportCommands_ReturnValue_90;
	Parms.Temp_bool_True_if_break_was_hit_Variable_5 = Temp_bool_True_if_break_was_hit_Variable_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_148 = CallFunc_GetOwner_ReturnValue_148;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_92 = K2Node_DynamicCast_AsNWXPlayer_Controller_92;
	Parms.K2Node_DynamicCast_bSuccess_172 = K2Node_DynamicCast_bSuccess_172;
	Parms.CallFunc_GetOwner_ReturnValue_149 = CallFunc_GetOwner_ReturnValue_149;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_91 = CallFunc_CanUseSupportCommands_ReturnValue_91;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_93 = K2Node_DynamicCast_AsNWXPlayer_Controller_93;
	Parms.K2Node_DynamicCast_bSuccess_173 = K2Node_DynamicCast_bSuccess_173;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_92 = CallFunc_CanUseSupportCommands_ReturnValue_92;
	Parms.CallFunc_GetOwner_ReturnValue_150 = CallFunc_GetOwner_ReturnValue_150;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_94 = K2Node_DynamicCast_AsNWXPlayer_Controller_94;
	Parms.K2Node_DynamicCast_bSuccess_174 = K2Node_DynamicCast_bSuccess_174;
	Parms.CallFunc_GetOwner_ReturnValue_151 = CallFunc_GetOwner_ReturnValue_151;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_93 = CallFunc_CanUseSupportCommands_ReturnValue_93;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_95 = K2Node_DynamicCast_AsNWXPlayer_Controller_95;
	Parms.K2Node_DynamicCast_bSuccess_175 = K2Node_DynamicCast_bSuccess_175;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_94 = CallFunc_CanUseSupportCommands_ReturnValue_94;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetOwner_ReturnValue_152 = CallFunc_GetOwner_ReturnValue_152;
	Parms.CallFunc_GetOwner_ReturnValue_153 = CallFunc_GetOwner_ReturnValue_153;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_96 = K2Node_DynamicCast_AsNWXPlayer_Controller_96;
	Parms.K2Node_DynamicCast_bSuccess_176 = K2Node_DynamicCast_bSuccess_176;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_97 = K2Node_DynamicCast_AsNWXPlayer_Controller_97;
	Parms.K2Node_DynamicCast_bSuccess_177 = K2Node_DynamicCast_bSuccess_177;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_95 = CallFunc_CanUseSupportCommands_ReturnValue_95;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_96 = CallFunc_CanUseSupportCommands_ReturnValue_96;
	Parms.CallFunc_GetOwner_ReturnValue_154 = CallFunc_GetOwner_ReturnValue_154;
	Parms.K2Node_CustomEvent_LogMessage = K2Node_CustomEvent_LogMessage;
	Parms.K2Node_CustomEvent_NWXLogLevel = K2Node_CustomEvent_NWXLogLevel;
	Parms.K2Node_CustomEvent_LogCategory = K2Node_CustomEvent_LogCategory;
	Parms.K2Node_CustomEvent_bPrintToScreen = K2Node_CustomEvent_bPrintToScreen;
	Parms.K2Node_CustomEvent_bPrintToLog = K2Node_CustomEvent_bPrintToLog;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_98 = K2Node_DynamicCast_AsNWXPlayer_Controller_98;
	Parms.K2Node_DynamicCast_bSuccess_178 = K2Node_DynamicCast_bSuccess_178;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_97 = CallFunc_CanUseSupportCommands_ReturnValue_97;
	Parms.Temp_int_Loop_Counter_Variable_22 = Temp_int_Loop_Counter_Variable_22;
	Parms.CallFunc_Less_IntInt_ReturnValue_19 = CallFunc_Less_IntInt_ReturnValue_19;
	Parms.CallFunc_Add_IntInt_ReturnValue_22 = CallFunc_Add_IntInt_ReturnValue_22;
	Parms.K2Node_CustomEvent_Center = K2Node_CustomEvent_Center;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_Segments = K2Node_CustomEvent_Segments;
	Parms.K2Node_CustomEvent_LineColor_1 = K2Node_CustomEvent_LineColor_1;
	Parms.K2Node_CustomEvent_Duration_2 = K2Node_CustomEvent_Duration_2;
	Parms.K2Node_CustomEvent_Thickness_1 = K2Node_CustomEvent_Thickness_1;
	Parms.K2Node_CustomEvent_CollectionName = K2Node_CustomEvent_CollectionName;
	Parms.K2Node_CustomEvent_ParameterName = K2Node_CustomEvent_ParameterName;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_GetOwner_ReturnValue_155 = CallFunc_GetOwner_ReturnValue_155;
	Parms.CallFunc_FindMaterialCollectionByName_ReturnValue = CallFunc_FindMaterialCollectionByName_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_120 = CallFunc_IsValid_ReturnValue_120;
	Parms.K2Node_CustomEvent_LineStart = K2Node_CustomEvent_LineStart;
	Parms.K2Node_CustomEvent_LineEnd = K2Node_CustomEvent_LineEnd;
	Parms.K2Node_CustomEvent_LineColor = K2Node_CustomEvent_LineColor;
	Parms.K2Node_CustomEvent_Duration_1 = K2Node_CustomEvent_Duration_1;
	Parms.K2Node_CustomEvent_Thickness = K2Node_CustomEvent_Thickness;
	Parms.K2Node_CustomEvent_GroupId_2 = K2Node_CustomEvent_GroupId_2;
	Parms.K2Node_CustomEvent_Status_3 = K2Node_CustomEvent_Status_3;
	Parms.K2Node_CustomEvent_GroupId_1 = K2Node_CustomEvent_GroupId_1;
	Parms.K2Node_CustomEvent_PlayerName = K2Node_CustomEvent_PlayerName;
	Parms.CallFunc_GetPlayerStateByName_Player_State = CallFunc_GetPlayerStateByName_Player_State;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_GetGroupComponent_Group_Component = CallFunc_GetGroupComponent_Group_Component;
	Parms.CallFunc_GetGroupComponent_Group_Component_1 = CallFunc_GetGroupComponent_Group_Component_1;
	Parms.CallFunc_GetGroups_ReturnValue = CallFunc_GetGroups_ReturnValue;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_Array_Length_ReturnValue_20 = CallFunc_Array_Length_ReturnValue_20;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_20 = CallFunc_Less_IntInt_ReturnValue_20;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_GetGroupComponent_Group_Component_2 = CallFunc_GetGroupComponent_Group_Component_2;
	Parms.K2Node_CustomEvent_Status_2 = K2Node_CustomEvent_Status_2;
	Parms.CallFunc_IsValid_ReturnValue_121 = CallFunc_IsValid_ReturnValue_121;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_CustomEvent_Group_Id = K2Node_CustomEvent_Group_Id;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_GetGroupComponent_Group_Component_3 = CallFunc_GetGroupComponent_Group_Component_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_IsInGroup_ReturnValue = CallFunc_IsInGroup_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.K2Node_CustomEvent_GroupId = K2Node_CustomEvent_GroupId;
	Parms.CallFunc_GetGroupComponent_Group_Component_4 = CallFunc_GetGroupComponent_Group_Component_4;
	Parms.K2Node_CustomEvent_Group = K2Node_CustomEvent_Group;
	Parms.K2Node_CustomEvent_Status_1 = K2Node_CustomEvent_Status_1;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Array_Length_ReturnValue_21 = CallFunc_Array_Length_ReturnValue_21;
	Parms.CallFunc_Less_IntInt_ReturnValue_21 = CallFunc_Less_IntInt_ReturnValue_21;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_GetGroupComponent_Group_Component_5 = CallFunc_GetGroupComponent_Group_Component_5;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_GetGroups_ReturnValue_1 = CallFunc_GetGroups_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Array_Length_ReturnValue_22 = CallFunc_Array_Length_ReturnValue_22;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_22 = CallFunc_Less_IntInt_ReturnValue_22;
	Parms.CallFunc_GetGroupComponent_Group_Component_6 = CallFunc_GetGroupComponent_Group_Component_6;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.CallFunc_GetOwnerPlayerState_AsBP_Player_State = CallFunc_GetOwnerPlayerState_AsBP_Player_State;
	Parms.CallFunc_GetPlayerName_ReturnValue_2 = CallFunc_GetPlayerName_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_9 = CallFunc_Conv_StringToText_ReturnValue_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_IsValid_ReturnValue_122 = CallFunc_IsValid_ReturnValue_122;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_GetOwnerPlayerState_AsBP_Player_State_1 = CallFunc_GetOwnerPlayerState_AsBP_Player_State_1;
	Parms.CallFunc_IsValid_ReturnValue_123 = CallFunc_IsValid_ReturnValue_123;
	Parms.K2Node_CustomEvent_EffectName = K2Node_CustomEvent_EffectName;
	Parms.CallFunc_GetOwner_ReturnValue_156 = CallFunc_GetOwner_ReturnValue_156;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.K2Node_CustomEvent_TextLocation = K2Node_CustomEvent_TextLocation;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_TestBaseActor = K2Node_CustomEvent_TestBaseActor;
	Parms.K2Node_CustomEvent_TextColor = K2Node_CustomEvent_TextColor;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.CallFunc_IsValid_ReturnValue_124 = CallFunc_IsValid_ReturnValue_124;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_IsValid_ReturnValue_125 = CallFunc_IsValid_ReturnValue_125;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetOwner_ReturnValue_157 = CallFunc_GetOwner_ReturnValue_157;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_99 = K2Node_DynamicCast_AsNWXPlayer_Controller_99;
	Parms.K2Node_DynamicCast_bSuccess_179 = K2Node_DynamicCast_bSuccess_179;
	Parms.CallFunc_GetOwner_ReturnValue_158 = CallFunc_GetOwner_ReturnValue_158;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_98 = CallFunc_CanUseSupportCommands_ReturnValue_98;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_100 = K2Node_DynamicCast_AsNWXPlayer_Controller_100;
	Parms.K2Node_DynamicCast_bSuccess_180 = K2Node_DynamicCast_bSuccess_180;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_99 = CallFunc_CanUseSupportCommands_ReturnValue_99;
	Parms.CallFunc_GetOwner_ReturnValue_159 = CallFunc_GetOwner_ReturnValue_159;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_101 = K2Node_DynamicCast_AsNWXPlayer_Controller_101;
	Parms.K2Node_DynamicCast_bSuccess_181 = K2Node_DynamicCast_bSuccess_181;
	Parms.Temp_int_Array_Index_Variable_22 = Temp_int_Array_Index_Variable_22;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_100 = CallFunc_CanUseSupportCommands_ReturnValue_100;
	Parms.CallFunc_Array_Get_Item_24 = CallFunc_Array_Get_Item_24;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle_1 = CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle_1;
	Parms.CallFunc_ApplyTimedStatusEffect_ReturnValue_1 = CallFunc_ApplyTimedStatusEffect_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_160 = CallFunc_GetOwner_ReturnValue_160;
	Parms.CallFunc_GetOwner_ReturnValue_161 = CallFunc_GetOwner_ReturnValue_161;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_102 = K2Node_DynamicCast_AsNWXPlayer_Controller_102;
	Parms.K2Node_DynamicCast_bSuccess_182 = K2Node_DynamicCast_bSuccess_182;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_103 = K2Node_DynamicCast_AsNWXPlayer_Controller_103;
	Parms.K2Node_DynamicCast_bSuccess_183 = K2Node_DynamicCast_bSuccess_183;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_101 = CallFunc_CanUseSupportCommands_ReturnValue_101;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_102 = CallFunc_CanUseSupportCommands_ReturnValue_102;
	Parms.CallFunc_GetOwner_ReturnValue_162 = CallFunc_GetOwner_ReturnValue_162;
	Parms.CallFunc_GetOwner_ReturnValue_163 = CallFunc_GetOwner_ReturnValue_163;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_104 = K2Node_DynamicCast_AsNWXPlayer_Controller_104;
	Parms.K2Node_DynamicCast_bSuccess_184 = K2Node_DynamicCast_bSuccess_184;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_105 = K2Node_DynamicCast_AsNWXPlayer_Controller_105;
	Parms.K2Node_DynamicCast_bSuccess_185 = K2Node_DynamicCast_bSuccess_185;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_103 = CallFunc_CanUseSupportCommands_ReturnValue_103;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_104 = CallFunc_CanUseSupportCommands_ReturnValue_104;
	Parms.CallFunc_GetOwner_ReturnValue_164 = CallFunc_GetOwner_ReturnValue_164;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_106 = K2Node_DynamicCast_AsNWXPlayer_Controller_106;
	Parms.K2Node_DynamicCast_bSuccess_186 = K2Node_DynamicCast_bSuccess_186;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue_105 = CallFunc_CanUseSupportCommands_ReturnValue_105;
	Parms.K2Node_MakeStruct_PrecipitationBase_ImplicitCast = K2Node_MakeStruct_PrecipitationBase_ImplicitCast;
	Parms.K2Node_MakeStruct_PrecipitationBase_ImplicitCast_1 = K2Node_MakeStruct_PrecipitationBase_ImplicitCast_1;
	Parms.K2Node_MakeStruct_RampUpRange_ImplicitCast = K2Node_MakeStruct_RampUpRange_ImplicitCast;
	Parms.K2Node_MakeStruct_Minimum_ImplicitCast = K2Node_MakeStruct_Minimum_ImplicitCast;
	Parms.K2Node_MakeStruct_Maximum_ImplicitCast = K2Node_MakeStruct_Maximum_ImplicitCast;
	Parms.CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast = CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast;
	Parms.CallFunc_GetForwardLinecast_MinRange_ImplicitCast = CallFunc_GetForwardLinecast_MinRange_ImplicitCast;
	Parms.CallFunc_SetGameplayEffectDurationHandle_NewDuration_ImplicitCast = CallFunc_SetGameplayEffectDurationHandle_NewDuration_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_Conv_Vector3fToString_InVec_ImplicitCast = CallFunc_Conv_Vector3fToString_InVec_ImplicitCast;
	Parms.CallFunc_Conv_Vector3fToString_InVec_ImplicitCast_1 = CallFunc_Conv_Vector3fToString_InVec_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1;
	Parms.CallFunc_DrawDebugSphere_Radius_ImplicitCast = CallFunc_DrawDebugSphere_Radius_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Duration_ImplicitCast = CallFunc_DrawDebugSphere_Duration_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Thickness_ImplicitCast = CallFunc_DrawDebugSphere_Thickness_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_DrawDebugLine_Duration_ImplicitCast = CallFunc_DrawDebugLine_Duration_ImplicitCast;
	Parms.CallFunc_DrawDebugLine_Thickness_ImplicitCast = CallFunc_DrawDebugLine_Thickness_ImplicitCast;
	Parms.CallFunc_DrawDebugString_Duration_ImplicitCast = CallFunc_DrawDebugString_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.OnEncounterGymReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DebugModeComponent_C::OnEncounterGymReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "OnEncounterGymReady__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DebugModeComponent.BP_DebugModeComponent_C.DiscoveryGranted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardBehaviour*            Reward                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DebugModeComponent_C::DiscoveryGranted__DelegateSignature(class URewardBehaviour* Reward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DebugModeComponent_C", "DiscoveryGranted__DelegateSignature");

	Params::UBP_DebugModeComponent_C_DiscoveryGranted__DelegateSignature_Params Parms{};

	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);

}

}


