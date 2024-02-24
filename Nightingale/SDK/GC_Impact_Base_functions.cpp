#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Impact_Base.GC_Impact_Base_C
// (None)

class UClass* UGC_Impact_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Impact_Base_C");

	return Clss;
}


// GC_Impact_Base_C GC_Impact_Base.Default__GC_Impact_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Impact_Base_C* UGC_Impact_Base_C::GetDefaultObj()
{
	static class UGC_Impact_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Impact_Base_C*>(UGC_Impact_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Impact_Base.GC_Impact_Base_C.GetDamageModifierTags
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                DamageTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InImpactTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InPhysmatTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               bFoundBothValid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutImpactTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OutPhysmatTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FoundPhysmatTag                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                FoundImpactTag                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (ConstParm)
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           (ConstParm)
// struct FGameplayTagContainer       Temp_struct_Variable_2                                           (ConstParm)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable_3                                           (ConstParm)
// struct FGameplayTag                CallFunc_AppendDamageModToImpactTag_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_AppendDamageModToImpactTag_ReturnValue_1                (NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetDamageModifierTags(struct FGameplayTag& DamageTag, struct FGameplayTag& InImpactTag, struct FGameplayTag& InPhysmatTag, bool* bFoundBothValid, struct FGameplayTag* OutImpactTag, struct FGameplayTag* OutPhysmatTag, const struct FGameplayTag& FoundPhysmatTag, const struct FGameplayTag& FoundImpactTag, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable_2, bool CallFunc_IsGameplayTagValid_ReturnValue_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, const struct FGameplayTag& CallFunc_AppendDamageModToImpactTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_3, bool CallFunc_IsGameplayTagValid_ReturnValue_4, const struct FGameplayTag& CallFunc_AppendDamageModToImpactTag_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetDamageModifierTags");

	Params::UGC_Impact_Base_C_GetDamageModifierTags_Params Parms{};

	Parms.DamageTag = DamageTag;
	Parms.InImpactTag = InImpactTag;
	Parms.InPhysmatTag = InPhysmatTag;
	Parms.FoundPhysmatTag = FoundPhysmatTag;
	Parms.FoundImpactTag = FoundImpactTag;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_2 = CallFunc_IsGameplayTagValid_ReturnValue_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_AppendDamageModToImpactTag_ReturnValue = CallFunc_AppendDamageModToImpactTag_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_3 = CallFunc_IsGameplayTagValid_ReturnValue_3;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_4 = CallFunc_IsGameplayTagValid_ReturnValue_4;
	Parms.CallFunc_AppendDamageModToImpactTag_ReturnValue_1 = CallFunc_AppendDamageModToImpactTag_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bFoundBothValid != nullptr)
		*bFoundBothValid = Parms.bFoundBothValid;

	if (OutImpactTag != nullptr)
		*OutImpactTag = std::move(Parms.OutImpactTag);

	if (OutPhysmatTag != nullptr)
		*OutPhysmatTag = std::move(Parms.OutPhysmatTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.TryPrintDebug
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PhysmatTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ImpactTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           StruckMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bWasMatchFound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHitMeshNameDebug_HitAsset                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPrintImpactInfo_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::TryPrintDebug(class UPrimitiveComponent* HitComponent, struct FGameplayTag& PhysmatTag, struct FGameplayTag& ImpactTag, class UPhysicalMaterial* StruckMaterial, bool bWasMatchFound, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetHitMeshNameDebug_HitAsset, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_GetPrintImpactInfo_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "TryPrintDebug");

	Params::UGC_Impact_Base_C_TryPrintDebug_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.PhysmatTag = PhysmatTag;
	Parms.ImpactTag = ImpactTag;
	Parms.StruckMaterial = StruckMaterial;
	Parms.bWasMatchFound = bWasMatchFound;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetHitMeshNameDebug_HitAsset = CallFunc_GetHitMeshNameDebug_HitAsset;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetPrintImpactInfo_ReturnValue = CallFunc_GetPrintImpactInfo_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetPhysmatTagFromMaterial
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPhysicalMaterial*           StruckMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PhysmatTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXPhyiscalMaterial*        K2Node_DynamicCast_AsNWXPhyiscal_Material                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetPhysmatTagFromMaterial(class UPhysicalMaterial* StruckMaterial, struct FGameplayTag* PhysmatTag, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Array_IsNotEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetPhysmatTagFromMaterial");

	Params::UGC_Impact_Base_C_GetPhysmatTagFromMaterial_Params Parms{};

	Parms.StruckMaterial = StruckMaterial;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPhyiscal_Material = K2Node_DynamicCast_AsNWXPhyiscal_Material;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PhysmatTag != nullptr)
		*PhysmatTag = std::move(Parms.PhysmatTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.ReportMissingPhysicalResponseTag
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Striking_Object                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           Phys_Mat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Impact_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Phys_Tag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::ReportMissingPhysicalResponseTag(class UObject* Striking_Object, class UPhysicalMaterial* Phys_Mat, const struct FGameplayTag& Impact_Tag, const struct FGameplayTag& Phys_Tag, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "ReportMissingPhysicalResponseTag");

	Params::UGC_Impact_Base_C_ReportMissingPhysicalResponseTag_Params Parms{};

	Parms.Striking_Object = Striking_Object;
	Parms.Phys_Mat = Phys_Mat;
	Parms.Impact_Tag = Impact_Tag;
	Parms.Phys_Tag = Phys_Tag;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetDamageTagFromStrikingActor
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      StrikingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SourceTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        InteractionTags                                                  (Edit, BlueprintVisible)
// struct FGameplayTag                DamageTag                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHuman_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetInteractionTags_InteractionTags                      (ReferenceParm)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetDamageTagFromStrikingActor(class AActor* StrikingActor, struct FGameplayTag* SourceTag, const TArray<struct FGameplayTag>& InteractionTags, const struct FGameplayTag& DamageTag, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsHuman_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class AEquippableItem* Temp_object_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetInteractionTags_InteractionTags, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetDamageTagFromStrikingActor");

	Params::UGC_Impact_Base_C_GetDamageTagFromStrikingActor_Params Parms{};

	Parms.StrikingActor = StrikingActor;
	Parms.InteractionTags = InteractionTags;
	Parms.DamageTag = DamageTag;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsHuman_ReturnValue = CallFunc_IsHuman_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInteractionTags_InteractionTags = CallFunc_GetInteractionTags_InteractionTags;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceTag != nullptr)
		*SourceTag = std::move(Parms.SourceTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.IsTargetLocallyControlled
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Impact_Base_C::IsTargetLocallyControlled(class UObject* Target, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "IsTargetLocallyControlled");

	Params::UGC_Impact_Base_C_IsTargetLocallyControlled_Params Parms{};

	Parms.Target = Target;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetElementTagFromActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ElementalTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetElementTagFromActor");

	Params::UGC_Impact_Base_C_GetElementTagFromActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (ElementalTag != nullptr)
		*ElementalTag = std::move(Parms.ElementalTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.Get Impact Tag From Correct Source
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     StrikingObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       GCParamsImpactTags                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ImpactTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        Temp_ImpactTags                                                  (Edit, BlueprintVisible)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct FGameplayTag                CallFunc_Get_Impact_Tag_Tag                                      (NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::Get_Impact_Tag_From_Correct_Source(class UObject* StrikingObject, struct FGameplayTagContainer& GCParamsImpactTags, struct FGameplayTag* ImpactTag, const TArray<struct FGameplayTag>& Temp_ImpactTags, bool CallFunc_Array_IsNotEmpty_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Get_Impact_Tag_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "Get Impact Tag From Correct Source");

	Params::UGC_Impact_Base_C_Get_Impact_Tag_From_Correct_Source_Params Parms{};

	Parms.StrikingObject = StrikingObject;
	Parms.GCParamsImpactTags = GCParamsImpactTags;
	Parms.Temp_ImpactTags = Temp_ImpactTags;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Get_Impact_Tag_Tag = CallFunc_Get_Impact_Tag_Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactTag != nullptr)
		*ImpactTag = std::move(Parms.ImpactTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetSourceTagFromActor
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      StrikingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SourceTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemTypeTag_Trait                                    (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetOffhandEquippedItem_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIdentifierTagInterface>K2Node_DynamicCast_AsIdentifier_Tag_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetIdentifierTag_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHuman_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetSourceTagFromActor(class AActor* StrikingActor, struct FGameplayTag* SourceTag, class AEquippableItem* EquippedItem, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_GetItemTypeTag_Trait, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_2, class AEquippableItem* CallFunc_GetOffhandEquippedItem_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEquippableItem* Temp_object_Variable, TScriptInterface<class IIdentifierTagInterface> K2Node_DynamicCast_AsIdentifier_Tag_Interface, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayTag& CallFunc_GetIdentifierTag_ReturnValue, bool CallFunc_IsHuman_ReturnValue, class AEquippableItem* Temp_object_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetSourceTagFromActor");

	Params::UGC_Impact_Base_C_GetSourceTagFromActor_Params Parms{};

	Parms.StrikingActor = StrikingActor;
	Parms.EquippedItem = EquippedItem;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemTypeTag_Trait = CallFunc_GetItemTypeTag_Trait;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOffhandEquippedItem_ReturnValue = CallFunc_GetOffhandEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface_1 = K2Node_DynamicCast_AsLoadout_Read_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsIdentifier_Tag_Interface = K2Node_DynamicCast_AsIdentifier_Tag_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetIdentifierTag_ReturnValue = CallFunc_GetIdentifierTag_ReturnValue;
	Parms.CallFunc_IsHuman_ReturnValue = CallFunc_IsHuman_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceTag != nullptr)
		*SourceTag = std::move(Parms.SourceTag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetHitMeshNameDebug
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      HitAsset                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetHitMeshNameDebug(class UPrimitiveComponent* HitComponent, class FString* HitAsset, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetHitMeshNameDebug");

	Params::UGC_Impact_Base_C_GetHitMeshNameDebug_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (HitAsset != nullptr)
		*HitAsset = std::move(Parms.HitAsset);

}


// Function GC_Impact_Base.GC_Impact_Base_C.IsHuman
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Impact_Base_C::IsHuman(class AActor* Actor, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "IsHuman");

	Params::UGC_Impact_Base_C_IsHuman_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Impact_Base.GC_Impact_Base_C.IsCreature
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_DynamicCast_AsNWXAICharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Impact_Base_C::IsCreature(class AActor* Actor, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "IsCreature");

	Params::UGC_Impact_Base_C_IsCreature_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsNWXAICharacter = K2Node_DynamicCast_AsNWXAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Impact_Base.GC_Impact_Base_C.Get Impact Tag
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Base_C::Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "Get Impact Tag");

	Params::UGC_Impact_Base_C_Get_Impact_Tag_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function GC_Impact_Base.GC_Impact_Base_C.IsOwnerLocallyControlled
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGASProjectile*              K2Node_DynamicCast_AsGASProjectile                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Impact_Base_C::IsOwnerLocallyControlled(class UObject* Owner, class AGASProjectile* K2Node_DynamicCast_AsGASProjectile, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "IsOwnerLocallyControlled");

	Params::UGC_Impact_Base_C_IsOwnerLocallyControlled_Params Parms{};

	Parms.Owner = Owner;
	Parms.K2Node_DynamicCast_AsGASProjectile = K2Node_DynamicCast_AsGASProjectile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Impact_Base.GC_Impact_Base_C.GetPhysicalResponse
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     StrikingObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           StruckMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       GCParamsImpactTags                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                DamageTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FS_NiagaraImpactResponse    NiagaraResponse                                                  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CameraResponse           CameraResponse                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ImpactTag                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                PhysmatTag                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageModifierTags_bFoundBothValid                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDamageModifierTags_OutImpactTag                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDamageModifierTags_OutPhysmatTag                     (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPhysmatTagFromMaterial_PhysmatTag                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Get_Impact_Tag_From_Correct_Source_ImpactTag            (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CameraResponse           CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// struct FS_NiagaraImpactResponse    CallFunc_GetTableCellData_OutData_1                              (ContainsInstancedReference, HasGetValueTypeHash)

void UGC_Impact_Base_C::GetPhysicalResponse(class UObject* StrikingObject, class UPhysicalMaterial* StruckMaterial, const struct FGameplayTagContainer& GCParamsImpactTags, class UPrimitiveComponent* HitComponent, const struct FGameplayTag& DamageTag, struct FS_NiagaraImpactResponse* NiagaraResponse, struct FS_CameraResponse* CameraResponse, bool* Found, const struct FGameplayTag& ImpactTag, const struct FGameplayTag& PhysmatTag, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_GetDamageModifierTags_bFoundBothValid, const struct FGameplayTag& CallFunc_GetDamageModifierTags_OutImpactTag, const struct FGameplayTag& CallFunc_GetDamageModifierTags_OutPhysmatTag, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTag& CallFunc_GetPhysmatTagFromMaterial_PhysmatTag, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FGameplayTag& CallFunc_Get_Impact_Tag_From_Correct_Source_ImpactTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_CameraResponse& CallFunc_GetTableCellData_OutData, const struct FS_NiagaraImpactResponse& CallFunc_GetTableCellData_OutData_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Base_C", "GetPhysicalResponse");

	Params::UGC_Impact_Base_C_GetPhysicalResponse_Params Parms{};

	Parms.StrikingObject = StrikingObject;
	Parms.StruckMaterial = StruckMaterial;
	Parms.GCParamsImpactTags = GCParamsImpactTags;
	Parms.HitComponent = HitComponent;
	Parms.DamageTag = DamageTag;
	Parms.ImpactTag = ImpactTag;
	Parms.PhysmatTag = PhysmatTag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1 = CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDamageModifierTags_bFoundBothValid = CallFunc_GetDamageModifierTags_bFoundBothValid;
	Parms.CallFunc_GetDamageModifierTags_OutImpactTag = CallFunc_GetDamageModifierTags_OutImpactTag;
	Parms.CallFunc_GetDamageModifierTags_OutPhysmatTag = CallFunc_GetDamageModifierTags_OutPhysmatTag;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetPhysmatTagFromMaterial_PhysmatTag = CallFunc_GetPhysmatTagFromMaterial_PhysmatTag;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_Get_Impact_Tag_From_Correct_Source_ImpactTag = CallFunc_Get_Impact_Tag_From_Correct_Source_ImpactTag;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraResponse != nullptr)
		*NiagaraResponse = std::move(Parms.NiagaraResponse);

	if (CameraResponse != nullptr)
		*CameraResponse = std::move(Parms.CameraResponse);

	if (Found != nullptr)
		*Found = Parms.Found;

}

}


