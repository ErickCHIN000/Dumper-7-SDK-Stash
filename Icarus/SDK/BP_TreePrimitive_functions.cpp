#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TreePrimitive.BP_TreePrimitive_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_TreePrimitive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TreePrimitive_C");

	return Clss;
}


// BP_TreePrimitive_C BP_TreePrimitive.Default__BP_TreePrimitive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TreePrimitive_C* UBP_TreePrimitive_C::GetDefaultObj()
{
	static class UBP_TreePrimitive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TreePrimitive_C*>(UBP_TreePrimitive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TreePrimitive.BP_TreePrimitive_C.TryGrantFrostedAlteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusStatContainer*        StatContainer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RollChanceStat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::TryGrantFrostedAlteration(class UIcarusStatContainer* StatContainer, bool CallFunc_RollChanceStat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "TryGrantFrostedAlteration");

	Params::UBP_TreePrimitive_C_TryGrantFrostedAlteration_Params Parms{};

	Parms.StatContainer = StatContainer;
	Parms.CallFunc_RollChanceStat_ReturnValue = CallFunc_RollChanceStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.Collect Segment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreePrimitiveDetachContext DetachContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveReplacementDescriptionCallFunc_GetReplacementDescriptionForContext_ReplacementDescription(NoDestructor)
// bool                               CallFunc_AddItemToPlayerInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_TreePrimitive_C::Collect_Segment(struct FTreePrimitiveDetachContext& DetachContext, const struct FTreePrimitiveReplacementDescription& CallFunc_GetReplacementDescriptionForContext_ReplacementDescription, bool CallFunc_AddItemToPlayerInventory_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "Collect Segment");

	Params::UBP_TreePrimitive_C_Collect_Segment_Params Parms{};

	Parms.DetachContext = DetachContext;
	Parms.CallFunc_GetReplacementDescriptionForContext_ReplacementDescription = CallFunc_GetReplacementDescriptionForContext_ReplacementDescription;
	Parms.CallFunc_AddItemToPlayerInventory_Success = CallFunc_AddItemToPlayerInventory_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.GetSubdivideMeshData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveSubdivideMeshesSubdivideMeshes                                                  (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveSubdivideMeshesCallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::GetSubdivideMeshData(bool* Found, struct FTreePrimitiveSubdivideMeshes* SubdivideMeshes, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTreePrimitiveSubdivideMeshes& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "GetSubdivideMeshData");

	Params::UBP_TreePrimitive_C_GetSubdivideMeshData_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (SubdivideMeshes != nullptr)
		*SubdivideMeshes = std::move(Parms.SubdivideMeshes);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.ShouldAutoPickupReplacementItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusCharacter*            ContextActionPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSubdivideMeshData_Found                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveSubdivideMeshesCallFunc_GetSubdivideMeshData_SubdivideMeshes                    (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_TreePrimitive_C::ShouldAutoPickupReplacementItem(class AIcarusCharacter* ContextActionPlayer, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_GetSubdivideMeshData_Found, const struct FTreePrimitiveSubdivideMeshes& CallFunc_GetSubdivideMeshData_SubdivideMeshes, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "ShouldAutoPickupReplacementItem");

	Params::UBP_TreePrimitive_C_ShouldAutoPickupReplacementItem_Params Parms{};

	Parms.ContextActionPlayer = ContextActionPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetSubdivideMeshData_Found = CallFunc_GetSubdivideMeshData_Found;
	Parms.CallFunc_GetSubdivideMeshData_SubdivideMeshes = CallFunc_GetSubdivideMeshData_SubdivideMeshes;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.ShouldTreePrimivieAffectNavigation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TreePrimitive_C::ShouldTreePrimivieAffectNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "ShouldTreePrimivieAffectNavigation");

	Params::UBP_TreePrimitive_C_ShouldTreePrimivieAffectNavigation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.UpdateSoftBranchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBeSoft                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::UpdateSoftBranchState(bool CanBeSoft, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "UpdateSoftBranchState");

	Params::UBP_TreePrimitive_C_UpdateSoftBranchState_Params Parms{};

	Parms.CanBeSoft = CanBeSoft;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.CanSupportTreeHierarchy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_TreePrimitive_C::CanSupportTreeHierarchy(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "CanSupportTreeHierarchy");

	Params::UBP_TreePrimitive_C_CanSupportTreeHierarchy_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.AddItemToPlayerInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreePrimitiveReplacementDescriptionReplacementDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AIcarusPlayerCharacter*      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InfectedBarkToGenerate                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stack                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemToAdd                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue                      (ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemProperty_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIcarusStatReplicated>K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAlterationsEnum>    K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_CreateCustomItem_ReturnValue                            (ContainsInstancedReference)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemStackCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTreeSubsystem*              CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Temp_wildcard_Variable_1                                         (ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSubdivideMeshData_Found                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveSubdivideMeshesCallFunc_GetSubdivideMeshData_SubdivideMeshes                    (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::AddItemToPlayerInventory(struct FTreePrimitiveReplacementDescription& ReplacementDescription, class AIcarusPlayerCharacter* PlayerCharacter, bool* Success, int32 InfectedBarkToGenerate, int32 Stack, const struct FItemData& ItemToAdd, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FItemRewardEntry& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RemoveItemProperty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float Temp_wildcard_Variable, float CallFunc_FMax_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, class UTreeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FItemData& Temp_wildcard_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_GetSubdivideMeshData_Found, const struct FTreePrimitiveSubdivideMeshes& CallFunc_GetSubdivideMeshData_SubdivideMeshes, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "AddItemToPlayerInventory");

	Params::UBP_TreePrimitive_C_AddItemToPlayerInventory_Params Parms{};

	Parms.ReplacementDescription = ReplacementDescription;
	Parms.PlayerCharacter = PlayerCharacter;
	Parms.InfectedBarkToGenerate = InfectedBarkToGenerate;
	Parms.Stack = Stack;
	Parms.ItemToAdd = ItemToAdd;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue = CallFunc_GenerateItemFromReward_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RemoveItemProperty_ReturnValue = CallFunc_RemoveItemProperty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateCustomItem_ReturnValue = CallFunc_CreateCustomItem_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetItemStackCount_ReturnValue = CallFunc_GetItemStackCount_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue = CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetSubdivideMeshData_Found = CallFunc_GetSubdivideMeshData_Found;
	Parms.CallFunc_GetSubdivideMeshData_SubdivideMeshes = CallFunc_GetSubdivideMeshData_SubdivideMeshes;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.SpawnReplacementItemActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreePrimitiveReplacementDescriptionReplacementDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AIcarusPlayerCharacter*      DetachmentContextPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 SpawnedItemActor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InfectedBarkToGenerate                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreePrimitiveSubdivideMeshesSubdivideMeshes                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UStaticMesh*>         CachedSubdivideMeshes                                            (Edit, BlueprintVisible)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsBeingFelledInstantly_InstantlyFelled               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue                      (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSubdivideMeshData_Found                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTreePrimitiveSubdivideMeshesCallFunc_GetSubdivideMeshData_SubdivideMeshes                    (HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetDecalMaterial_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>  CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusItemSpawnParametersAdvancedK2Node_MakeStruct_IcarusItemSpawnParametersAdvanced              (None)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemStackCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StaticItem_TreePrimitive_C*K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetPhysicsLinearVelocity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::SpawnReplacementItemActor(struct FTreePrimitiveReplacementDescription& ReplacementDescription, class AIcarusPlayerCharacter* DetachmentContextPlayer, class AIcarusItem** SpawnedItemActor, bool* Success, int32 InfectedBarkToGenerate, const struct FTreePrimitiveSubdivideMeshes& SubdivideMeshes, const TArray<class UStaticMesh*>& CachedSubdivideMeshes, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsBeingFelledInstantly_InstantlyFelled, bool CallFunc_Not_PreBool_ReturnValue, const struct FItemRewardEntry& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetSubdivideMeshData_Found, const struct FTreePrimitiveSubdivideMeshes& CallFunc_GetSubdivideMeshData_SubdivideMeshes, class UDecalComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_StaticItem_TreePrimitive_C* K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "SpawnReplacementItemActor");

	Params::UBP_TreePrimitive_C_SpawnReplacementItemActor_Params Parms{};

	Parms.ReplacementDescription = ReplacementDescription;
	Parms.DetachmentContextPlayer = DetachmentContextPlayer;
	Parms.InfectedBarkToGenerate = InfectedBarkToGenerate;
	Parms.SubdivideMeshes = SubdivideMeshes;
	Parms.CachedSubdivideMeshes = CachedSubdivideMeshes;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIsBeingFelledInstantly_InstantlyFelled = CallFunc_GetIsBeingFelledInstantly_InstantlyFelled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue = CallFunc_GenerateItemFromReward_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSubdivideMeshData_Found = CallFunc_GetSubdivideMeshData_Found;
	Parms.CallFunc_GetSubdivideMeshData_SubdivideMeshes = CallFunc_GetSubdivideMeshData_SubdivideMeshes;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDecalMaterial_ReturnValue = CallFunc_GetDecalMaterial_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced = K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnDecalAttached_ReturnValue = CallFunc_SpawnDecalAttached_ReturnValue;
	Parms.CallFunc_GetItemStackCount_ReturnValue = CallFunc_GetItemStackCount_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue = CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue = CallFunc_GetRootMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive = K2Node_DynamicCast_AsBP_Static_Item_Tree_Primitive;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue = CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue;
	Parms.CallFunc_GetPhysicsLinearVelocity_ReturnValue = CallFunc_GetPhysicsLinearVelocity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedItemActor != nullptr)
		*SpawnedItemActor = Parms.SpawnedItemActor;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.GetReplacementDescriptionForContext
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETreePrimitiveDetachContextDetachContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreePrimitiveReplacementDescriptionReplacementDescription                                           (Parm, OutParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreePrimitiveReplacementDescriptionK2Node_MakeStruct_TreePrimitiveReplacementDescription            (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::GetReplacementDescriptionForContext(enum class ETreePrimitiveDetachContext DetachContext, struct FTreePrimitiveReplacementDescription* ReplacementDescription, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTreePrimitiveReplacementDescription& K2Node_MakeStruct_TreePrimitiveReplacementDescription, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "GetReplacementDescriptionForContext");

	Params::UBP_TreePrimitive_C_GetReplacementDescriptionForContext_Params Parms{};

	Parms.DetachContext = DetachContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_TreePrimitiveReplacementDescription = K2Node_MakeStruct_TreePrimitiveReplacementDescription;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReplacementDescription != nullptr)
		*ReplacementDescription = std::move(Parms.ReplacementDescription);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.AddReplacementDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETreePrimitiveDetachContextDetachContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETreePrimitiveItemReplaceMethodMethod                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreePrimitiveReplacementDescriptionK2Node_MakeStruct_TreePrimitiveReplacementDescription            (NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::AddReplacementDescription(enum class ETreePrimitiveDetachContext DetachContext, enum class ETreePrimitiveItemReplaceMethod Method, const struct FTreePrimitiveReplacementDescription& K2Node_MakeStruct_TreePrimitiveReplacementDescription, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "AddReplacementDescription");

	Params::UBP_TreePrimitive_C_AddReplacementDescription_Params Parms{};

	Parms.DetachContext = DetachContext;
	Parms.Method = Method;
	Parms.K2Node_MakeStruct_TreePrimitiveReplacementDescription = K2Node_MakeStruct_TreePrimitiveReplacementDescription;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.ReplaceTreePrimitiveWithItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTreePrimitiveDetachContext DetachContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AIcarusItem*                 OutItemActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              InfectedBarkToGenerate                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTreePrimitiveReplacementDescriptionCallFunc_GetReplacementDescriptionForContext_ReplacementDescription(NoDestructor)
// bool                               CallFunc_ShouldAutoPickupReplacementItem_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_SpawnReplacementItemActor_SpawnedItemActor              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnReplacementItemActor_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddItemToPlayerInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_TreePrimitive_C::ReplaceTreePrimitiveWithItem(struct FTreePrimitiveDetachContext& DetachContext, class AIcarusItem** OutItemActor, int32 InfectedBarkToGenerate, const struct FTreePrimitiveReplacementDescription& CallFunc_GetReplacementDescriptionForContext_ReplacementDescription, bool CallFunc_ShouldAutoPickupReplacementItem_ReturnValue, class AIcarusItem* CallFunc_SpawnReplacementItemActor_SpawnedItemActor, bool CallFunc_SpawnReplacementItemActor_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AddItemToPlayerInventory_Success, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "ReplaceTreePrimitiveWithItem");

	Params::UBP_TreePrimitive_C_ReplaceTreePrimitiveWithItem_Params Parms{};

	Parms.DetachContext = DetachContext;
	Parms.InfectedBarkToGenerate = InfectedBarkToGenerate;
	Parms.CallFunc_GetReplacementDescriptionForContext_ReplacementDescription = CallFunc_GetReplacementDescriptionForContext_ReplacementDescription;
	Parms.CallFunc_ShouldAutoPickupReplacementItem_ReturnValue = CallFunc_ShouldAutoPickupReplacementItem_ReturnValue;
	Parms.CallFunc_SpawnReplacementItemActor_SpawnedItemActor = CallFunc_SpawnReplacementItemActor_SpawnedItemActor;
	Parms.CallFunc_SpawnReplacementItemActor_Success = CallFunc_SpawnReplacementItemActor_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddItemToPlayerInventory_Success = CallFunc_AddItemToPlayerInventory_Success;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItemActor != nullptr)
		*OutItemActor = Parms.OutItemActor;

	return Parms.ReturnValue;

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentOverlap_Branch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::OnComponentOverlap_Branch(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "OnComponentOverlap_Branch");

	Params::UBP_TreePrimitive_C_OnComponentOverlap_Branch_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentHit_Branch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Primitive                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              ImpulseValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::OnComponentHit_Branch(class UPrimitiveComponent* Primitive, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit, float ImpulseValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "OnComponentHit_Branch");

	Params::UBP_TreePrimitive_C_OnComponentHit_Branch_Params Parms{};

	Parms.Primitive = Primitive;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;
	Parms.ImpulseValue = ImpulseValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentHit_Trunk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TreePrimitive_C::OnComponentHit_Trunk(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "OnComponentHit_Trunk");

	Params::UBP_TreePrimitive_C_OnComponentHit_Trunk_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.Construct
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::Construct(class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "Construct");

	Params::UBP_TreePrimitive_C_Construct_Params Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.Transfer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTreePrimitiveComponent*     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::Transfer(class UTreePrimitiveComponent* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "Transfer");

	Params::UBP_TreePrimitive_C_Transfer_Params Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.InitializePostConstruction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TreePrimitive_C::InitializePostConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "InitializePostConstruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TreePrimitive.BP_TreePrimitive_C.ExecuteUbergraph_BP_TreePrimitive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TreeBase_C*              K2Node_DynamicCast_AsBP_Tree_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATreePrefab*                 CallFunc_GetTreePrefab_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UStaticMeshComponent*        K2Node_Event_MeshComponent                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCustomPrimitiveDataVector3_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCustomPrimitiveDataVector3_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTreePrimitiveComponent*     K2Node_Event_Source                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TreePrimitive_C*         K2Node_DynamicCast_AsBP_Tree_Primitive                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetDecalMaterial_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCustomPrimitiveDataFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCustomPrimitiveDataFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStaticMeshCapsuleCollider>CallFunc_GetStaticMeshCapsuleGeo_ReturnValue                     (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaticMeshCapsuleCollider  CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardsRowHandle       CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_Select_Default                                            (ReferenceParm)
// class UDecalComponent*             CallFunc_SpawnDecalAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TreePrimitive_C::ExecuteUbergraph_BP_TreePrimitive(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& K2Node_MakeArray_Array_1, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ATreePrefab* CallFunc_GetTreePrefab_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UStaticMeshComponent* K2Node_Event_MeshComponent, const struct FVector& CallFunc_GetCustomPrimitiveDataVector3_ReturnValue, const struct FVector& CallFunc_GetCustomPrimitiveDataVector3_ReturnValue_1, class UTreePrimitiveComponent* K2Node_Event_Source, class UBP_TreePrimitive_C* K2Node_DynamicCast_AsBP_Tree_Primitive, bool K2Node_DynamicCast_bSuccess_1, class UDecalComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, float CallFunc_GetCustomPrimitiveDataFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GetCustomPrimitiveDataFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FStaticMeshCapsuleCollider>& CallFunc_GetStaticMeshCapsuleGeo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FStaticMeshCapsuleCollider& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardsRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TArray<class FName>& K2Node_Select_Default, class UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TreePrimitive_C", "ExecuteUbergraph_BP_TreePrimitive");

	Params::UBP_TreePrimitive_C_ExecuteUbergraph_BP_TreePrimitive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Tree_Base = K2Node_DynamicCast_AsBP_Tree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTreePrefab_ReturnValue = CallFunc_GetTreePrefab_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_MeshComponent = K2Node_Event_MeshComponent;
	Parms.CallFunc_GetCustomPrimitiveDataVector3_ReturnValue = CallFunc_GetCustomPrimitiveDataVector3_ReturnValue;
	Parms.CallFunc_GetCustomPrimitiveDataVector3_ReturnValue_1 = CallFunc_GetCustomPrimitiveDataVector3_ReturnValue_1;
	Parms.K2Node_Event_Source = K2Node_Event_Source;
	Parms.K2Node_DynamicCast_AsBP_Tree_Primitive = K2Node_DynamicCast_AsBP_Tree_Primitive;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDecalMaterial_ReturnValue = CallFunc_GetDecalMaterial_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_GetCustomPrimitiveDataFloat_ReturnValue = CallFunc_GetCustomPrimitiveDataFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetCustomPrimitiveDataFloat_ReturnValue_1 = CallFunc_GetCustomPrimitiveDataFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetStaticMeshCapsuleGeo_ReturnValue = CallFunc_GetStaticMeshCapsuleGeo_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnDecalAttached_ReturnValue = CallFunc_SpawnDecalAttached_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


