#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C
// (Actor)

class UClass* Aba_aa_Intermediary_ActiveItem_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Intermediary_ActiveItem_Weapon_C");

	return Clss;
}


// ba_aa_Intermediary_ActiveItem_Weapon_C ba_aa_Intermediary_ActiveItem_Weapon.Default__ba_aa_Intermediary_ActiveItem_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Intermediary_ActiveItem_Weapon_C* Aba_aa_Intermediary_ActiveItem_Weapon_C::GetDefaultObj()
{
	static class Aba_aa_Intermediary_ActiveItem_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Intermediary_ActiveItem_Weapon_C*>(Aba_aa_Intermediary_ActiveItem_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetDamageDistanceModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     InWeaponLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InTraceEnd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InHitLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDMGModifier                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombinedAttachment_Range_OutCombinedRange            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetDamageDistanceModifier(const struct FVector& InWeaponLocation, const struct FVector& InTraceEnd, const struct FVector& InHitLocation, float* OutDMGModifier, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetDamageDistanceModifier");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetDamageDistanceModifier_Params Parms{};

	Parms.InWeaponLocation = InWeaponLocation;
	Parms.InTraceEnd = InTraceEnd;
	Parms.InHitLocation = InHitLocation;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_GetCombinedAttachment_Range_OutCombinedRange = CallFunc_GetCombinedAttachment_Range_OutCombinedRange;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDMGModifier != nullptr)
		*OutDMGModifier = Parms.OutDMGModifier;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Sway
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              OutCombinedSway                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetCombinedAttachment_Sway(float* OutCombinedSway, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetCombinedAttachment_Sway");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Sway_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCombinedSway != nullptr)
		*OutCombinedSway = Parms.OutCombinedSway;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Recoil
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              OutCombinedRecoil                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetCombinedAttachment_Recoil(int32* OutCombinedRecoil, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetCombinedAttachment_Recoil");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Recoil_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCombinedRecoil != nullptr)
		*OutCombinedRecoil = Parms.OutCombinedRecoil;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Range
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              OutCombinedRange                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetCombinedAttachment_Range(float* OutCombinedRange, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetCombinedAttachment_Range");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Range_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCombinedRange != nullptr)
		*OutCombinedRange = Parms.OutCombinedRange;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Damage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              OutCombinedDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetCombinedAttachment_Damage(float* OutCombinedDamage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetCombinedAttachment_Damage");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Damage_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCombinedDamage != nullptr)
		*OutCombinedDamage = Parms.OutCombinedDamage;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.UnhideNonHidden
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USceneComponent*, bool> InPreChanges                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class USceneComponent*>     Key                                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<bool>                       Val                                                              (Edit, BlueprintVisible)
// TArray<bool>                       CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class USceneComponent*>     CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::UnhideNonHidden(TMap<class USceneComponent*, bool> InPreChanges, const TArray<class USceneComponent*>& Key, const TArray<bool>& Val, TArray<bool>& CallFunc_Map_Values_Values, TArray<class USceneComponent*>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "UnhideNonHidden");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_UnhideNonHidden_Params Parms{};

	Parms.InPreChanges = InPreChanges;
	Parms.Key = Key;
	Parms.Val = Val;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ApplyRagdollPush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCGMultitraceResult         InLastMultitrace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// float                              InPushScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ApplyRagdollPush(const struct FCGMultitraceResult& InLastMultitrace, float InPushScale, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ApplyRagdollPush");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_ApplyRagdollPush_Params Parms{};

	Parms.InLastMultitrace = InLastMultitrace;
	Parms.InPushScale = InPushScale;
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
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetDamageModifierByRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     InTraceStart                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InTraceEnd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InImpactPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDamageModifier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombinedAttachment_Range_OutCombinedRange            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::GetDamageModifierByRange(const struct FVector& InTraceStart, const struct FVector& InTraceEnd, const struct FVector& InImpactPoint, float* OutDamageModifier, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "GetDamageModifierByRange");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_GetDamageModifierByRange_Params Parms{};

	Parms.InTraceStart = InTraceStart;
	Parms.InTraceEnd = InTraceEnd;
	Parms.InImpactPoint = InImpactPoint;
	Parms.CallFunc_GetCombinedAttachment_Range_OutCombinedRange = CallFunc_GetCombinedAttachment_Range_OutCombinedRange;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamageModifier != nullptr)
		*OutDamageModifier = Parms.OutDamageModifier;

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ApplyAIRagdollPush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGAICharacter*              InLastAIHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGMultitraceResult         InLastMultitrace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// float                              InPushScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ApplyAIRagdollPush(class ACGAICharacter* InLastAIHit, const struct FCGMultitraceResult& InLastMultitrace, float InPushScale, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ApplyAIRagdollPush");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_ApplyAIRagdollPush_Params Parms{};

	Parms.InLastAIHit = InLastAIHit;
	Parms.InLastMultitrace = InLastMultitrace;
	Parms.InPushScale = InPushScale;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ScopeFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ScopeFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ScopeFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ScopeFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ScopeFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ScopeFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ScopeFade__Event__EventFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ScopeFade__Event__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ScopeFade__Event__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "OnHideShowAdditional");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.SwitchToScopeView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFadeScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InThermalVision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::SwitchToScopeView(float InFadeScale, bool InThermalVision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "SwitchToScopeView");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_SwitchToScopeView_Params Parms{};

	Parms.InFadeScale = InFadeScale;
	Parms.InThermalVision = InThermalVision;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.UpdateThermalVisionActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::UpdateThermalVisionActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "UpdateThermalVisionActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.StartThermalVisionTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::StartThermalVisionTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "StartThermalVisionTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.DisableThermalVisionForActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Intermediary_ActiveItem_Weapon_C::DisableThermalVisionForActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "DisableThermalVisionForActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InFadeScale                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InThermalVision                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput_1           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Intermediary_ActiveItem_Weapon_C::ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EState K2Node_Event_OutTargetState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_CustomEvent_InFadeScale, bool K2Node_CustomEvent_InThermalVision, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_Not_PreBool_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_Weapon_C", "ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon");

	Params::Aba_aa_Intermediary_ActiveItem_Weapon_C_ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CustomEvent_InFadeScale = K2Node_CustomEvent_InFadeScale;
	Parms.K2Node_CustomEvent_InThermalVision = K2Node_CustomEvent_InThermalVision;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput_1 = CallFunc_RemoveBlendable_InBlendableObject_CastInput_1;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


