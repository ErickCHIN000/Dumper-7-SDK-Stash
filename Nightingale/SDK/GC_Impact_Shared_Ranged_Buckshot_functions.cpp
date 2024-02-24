#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Impact_Shared_Ranged_Buckshot.GC_Impact_Shared_Ranged_Buckshot_C
// (None)

class UClass* UGC_Impact_Shared_Ranged_Buckshot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Impact_Shared_Ranged_Buckshot_C");

	return Clss;
}


// GC_Impact_Shared_Ranged_Buckshot_C GC_Impact_Shared_Ranged_Buckshot.Default__GC_Impact_Shared_Ranged_Buckshot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Impact_Shared_Ranged_Buckshot_C* UGC_Impact_Shared_Ranged_Buckshot_C::GetDefaultObj()
{
	static class UGC_Impact_Shared_Ranged_Buckshot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Impact_Shared_Ranged_Buckshot_C*>(UGC_Impact_Shared_Ranged_Buckshot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Impact_Shared_Ranged_Buckshot.GC_Impact_Shared_Ranged_Buckshot_C.SpawnImpactVFX
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FS_NiagaraImpactResponse    NiagaraResponse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FHitResult>          HitResults                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayTag                ImpactTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ElementalTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      StrikingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          BuckshotHitResults                                               (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// TArray<class AActor*>              ActorsToIgnore                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// class ABP_RangedWeapon_Base_C*     EquippedRangedWeapon                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForValidItem_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Ranged_Buckshot_C::SpawnImpactVFX(struct FS_NiagaraImpactResponse& NiagaraResponse, TArray<struct FHitResult>& HitResults, struct FGameplayTag& ImpactTag, struct FGameplayTag& ElementalTag, class AActor*& StrikingActor, const TArray<struct FHitResult>& BuckshotHitResults, const TArray<class AActor*>& ActorsToIgnore, class ABP_RangedWeapon_Base_C* EquippedRangedWeapon, class AActor* EquippedItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AEquippableItem* Temp_object_Variable, bool CallFunc_CheckForValidItem_ItemValid, TArray<class AActor*>& K2Node_MakeArray_Array, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Ranged_Buckshot_C", "SpawnImpactVFX");

	Params::UGC_Impact_Shared_Ranged_Buckshot_C_SpawnImpactVFX_Params Parms{};

	Parms.NiagaraResponse = NiagaraResponse;
	Parms.HitResults = HitResults;
	Parms.ImpactTag = ImpactTag;
	Parms.ElementalTag = ElementalTag;
	Parms.StrikingActor = StrikingActor;
	Parms.BuckshotHitResults = BuckshotHitResults;
	Parms.ActorsToIgnore = ActorsToIgnore;
	Parms.EquippedRangedWeapon = EquippedRangedWeapon;
	Parms.EquippedItem = EquippedItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CheckForValidItem_ItemValid = CallFunc_CheckForValidItem_ItemValid;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


