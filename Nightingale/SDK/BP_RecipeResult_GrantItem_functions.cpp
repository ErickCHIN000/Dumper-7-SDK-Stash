#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C
// (None)

class UClass* UBP_RecipeResult_GrantItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RecipeResult_GrantItem_C");

	return Clss;
}


// BP_RecipeResult_GrantItem_C BP_RecipeResult_GrantItem.Default__BP_RecipeResult_GrantItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RecipeResult_GrantItem_C* UBP_RecipeResult_GrantItem_C::GetDefaultObj()
{
	static class UBP_RecipeResult_GrantItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RecipeResult_GrantItem_C*>(UBP_RecipeResult_GrantItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.UpdateDerivedStateToCreatedForRecipe
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ExperienceStateChange                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAssetName_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetDerivedIDForState_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_ModifyExperienceStateValue_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ModifyExperienceStateValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RecipeResult_GrantItem_C::UpdateDerivedStateToCreatedForRecipe(class AController* Controller, const struct FCraftingRecipeReference& Recipe, int32 ExperienceStateChange, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_GetAssetName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FExperienceStateID& CallFunc_GetDerivedIDForState_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EGetResult CallFunc_ModifyExperienceStateValue_Result, int32 CallFunc_ModifyExperienceStateValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "UpdateDerivedStateToCreatedForRecipe");

	Params::UBP_RecipeResult_GrantItem_C_UpdateDerivedStateToCreatedForRecipe_Params Parms{};

	Parms.Controller = Controller;
	Parms.Recipe = Recipe;
	Parms.ExperienceStateChange = ExperienceStateChange;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAssetName_ReturnValue = CallFunc_GetAssetName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDerivedIDForState_ReturnValue = CallFunc_GetDerivedIDForState_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ModifyExperienceStateValue_Result = CallFunc_ModifyExperienceStateValue_Result;
	Parms.CallFunc_ModifyExperienceStateValue_ReturnValue = CallFunc_ModifyExperienceStateValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.CreateGrantResults
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FInventoryEntry>     ItemsToGrant                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      Outer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCrafting_Result_Items_DataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class UCrafting_Result_Items_DataAsset*Results                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UCrafting_Result_Items_DataAsset*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UCrafting_Result_Items_DataAsset*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

TArray<class UCrafting_Result_Items_DataAsset*> UBP_RecipeResult_GrantItem_C::CreateGrantResults(TArray<struct FInventoryEntry>& ItemsToGrant, class AActor* Outer, class UCrafting_Result_Items_DataAsset* Results, TArray<class UCrafting_Result_Items_DataAsset*>& K2Node_MakeArray_Array, TArray<class UCrafting_Result_Items_DataAsset*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, class UCrafting_Result_Items_DataAsset* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "CreateGrantResults");

	Params::UBP_RecipeResult_GrantItem_C_CreateGrantResults_Params Parms{};

	Parms.ItemsToGrant = ItemsToGrant;
	Parms.Outer = Outer;
	Parms.Results = Results;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.SpawnUnclaimedInstances
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     UnclaimedItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCrafting_Result_Items_DataAsset*Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*Result                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CurrentSpawnTransform                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CurrentUnclaimedItem                                             (Edit, BlueprintVisible)
// class UCrafting_Result_Items_DataAsset*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Temp_struct_Variable                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RecipeResult_GrantItem_C::SpawnUnclaimedInstances(class APawn* Pawn, TArray<struct FInventoryEntry>& UnclaimedItems, class UCrafting_Result_Items_DataAsset** Return_Value, class UCrafting_Result_Items_DataAsset* Result, const struct FTransform& CurrentSpawnTransform, const struct FInventoryEntry& CurrentUnclaimedItem, class UCrafting_Result_Items_DataAsset* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryEntry& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "SpawnUnclaimedInstances");

	Params::UBP_RecipeResult_GrantItem_C_SpawnUnclaimedInstances_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.UnclaimedItems = UnclaimedItems;
	Parms.Result = Result;
	Parms.CurrentSpawnTransform = CurrentSpawnTransform;
	Parms.CurrentUnclaimedItem = CurrentUnclaimedItem;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.MakeClaimedInstancesPayload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGuid>               ClaimedInstances                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     Outer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// class UCraft_Result_Instances_DataAsset*Payload                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UCraft_Result_Instances_DataAsset*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_GrantItem_C::MakeClaimedInstancesPayload(TArray<struct FGuid>& ClaimedInstances, class UObject* Outer, class UCraft_Result_Instances_DataAsset* Payload, TArray<class UItemProcessingDataAsset*>& K2Node_MakeArray_Array, class UCraft_Result_Instances_DataAsset* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "MakeClaimedInstancesPayload");

	Params::UBP_RecipeResult_GrantItem_C_MakeClaimedInstancesPayload_Params Parms{};

	Parms.ClaimedInstances = ClaimedInstances;
	Parms.Outer = Outer;
	Parms.Payload = Payload;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.GetItemGrants
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UItemProcessingDataAsset*>InputData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UItemProcessingDataAsset*    CurrentDatum                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemGrants                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafting_Result_Items_DataAsset*K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemProcessingDataAsset*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FInventoryEntry> UBP_RecipeResult_GrantItem_C::GetItemGrants(TArray<class UItemProcessingDataAsset*>& InputData, class UItemProcessingDataAsset* CurrentDatum, const TArray<struct FInventoryEntry>& ItemGrants, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCrafting_Result_Items_DataAsset* K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UItemProcessingDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "GetItemGrants");

	Params::UBP_RecipeResult_GrantItem_C_GetItemGrants_Params Parms{};

	Parms.InputData = InputData;
	Parms.CurrentDatum = CurrentDatum;
	Parms.ItemGrants = ItemGrants;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset = K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.GetCraftingPawnAndController
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      CraftingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       Pawn                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 LController                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RecipeResult_GrantItem_C::GetCraftingPawnAndController(class AActor* CraftingActor, bool* bSuccess, class APawn** Pawn, class AController** Controller, class AController* LController, class APawn* LPawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "GetCraftingPawnAndController");

	Params::UBP_RecipeResult_GrantItem_C_GetCraftingPawnAndController_Params Parms{};

	Parms.CraftingActor = CraftingActor;
	Parms.LController = LController;
	Parms.LPawn = LPawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Pawn != nullptr)
		*Pawn = Parms.Pawn;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.CanExecuteAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanProcessData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_GrantItem_C::CanExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool CallFunc_CanProcessData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "CanExecuteAction");

	Params::UBP_RecipeResult_GrantItem_C_CanExecuteAction_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.CallFunc_CanProcessData_ReturnValue = CallFunc_CanProcessData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.CanProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_RecipeResult_GrantItem_C::CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "CanProcessData");

	Params::UBP_RecipeResult_GrantItem_C_CanProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.ProcessData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_GrantItem_C::ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "ProcessData");

	Params::UBP_RecipeResult_GrantItem_C_ProcessData_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function BP_RecipeResult_GrantItem.BP_RecipeResult_GrantItem_C.ExecuteAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InstigatingActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemProcessingContext      Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     InputItems                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UItemProcessingDataAsset*>ProcessingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// struct FInventoryEntry             CurrentGrantedItem                                               (Edit, BlueprintVisible)
// struct FGuid                       CraftInProgressId                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ProcessedData                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CraftingComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>ReturnArray                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               bInitializeOutput                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CraftedQuantity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CrafterPersistentID                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AController*                 CraftingController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CraftingPawn                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               bItemGrantPossible                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     ItemsToGrant                                                     (Edit, BlueprintVisible)
// struct FCraftingRecipeReference    CraftingRecipe                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindCraftForID_BP_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindCraftForID_BP_CraftInProgressIndex                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftingPawnAndController_bSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetCraftingPawnAndController_Pawn                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetCraftingPawnAndController_Controller                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanExecuteAction_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IncrementCraftClaimedQuantityByID_Success               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItems_bSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItems_ClaimedInstances                             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItems_UnclaimedItems                               (ReferenceParm)
// class UCrafting_Result_Items_DataAsset*CallFunc_SpawnUnclaimedInstances_Return_Value                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>CallFunc_MakeClaimedInstancesPayload_ReturnValue                 (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItemGrants_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_ProcessData_bSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemProcessingDataAsset*>CallFunc_ProcessData_ReturnValue                                 (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_CanProcessData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetCraftingRecipeReferenceFromContext_Branches       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_TryGetCraftingRecipeReferenceFromContext_ReturnValue    (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UItemProcessingDataAsset*> UBP_RecipeResult_GrantItem_C::ExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess, const struct FInventoryEntry& CurrentGrantedItem, const struct FGuid& CraftInProgressId, const TArray<class UItemProcessingDataAsset*>& ProcessedData, class UBP_CraftingStationComponent_C* CraftingStationComponent, class UBP_CraftingComponent_C* CraftingComponent, const TArray<class UItemProcessingDataAsset*>& ReturnArray, bool bInitializeOutput, int32 CraftedQuantity, const class FString& CrafterPersistentID, class AController* CraftingController, class APawn* CraftingPawn, bool bItemGrantPossible, const TArray<struct FInventoryEntry>& ItemsToGrant, const struct FCraftingRecipeReference& CraftingRecipe, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_GetCraftingPawnAndController_bSuccess, class APawn* CallFunc_GetCraftingPawnAndController_Pawn, class AController* CallFunc_GetCraftingPawnAndController_Controller, bool CallFunc_CanExecuteAction_ReturnValue, bool CallFunc_IncrementCraftClaimedQuantityByID_Success, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, class UCrafting_Result_Items_DataAsset* CallFunc_SpawnUnclaimedInstances_Return_Value, int32 CallFunc_Array_Add_ReturnValue, TArray<class UItemProcessingDataAsset*>& CallFunc_MakeClaimedInstancesPayload_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetItemGrants_ReturnValue, bool CallFunc_ProcessData_bSuccess, TArray<class UItemProcessingDataAsset*>& CallFunc_ProcessData_ReturnValue, bool CallFunc_CanProcessData_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EGetResult CallFunc_TryGetCraftingRecipeReferenceFromContext_Branches, const struct FCraftingRecipeReference& CallFunc_TryGetCraftingRecipeReferenceFromContext_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeResult_GrantItem_C", "ExecuteAction");

	Params::UBP_RecipeResult_GrantItem_C_ExecuteAction_Params Parms{};

	Parms.InstigatingActor = InstigatingActor;
	Parms.TargetActor = TargetActor;
	Parms.Context = Context;
	Parms.InputItems = InputItems;
	Parms.ProcessingData = ProcessingData;
	Parms.CurrentGrantedItem = CurrentGrantedItem;
	Parms.CraftInProgressId = CraftInProgressId;
	Parms.ProcessedData = ProcessedData;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.CraftingComponent = CraftingComponent;
	Parms.ReturnArray = ReturnArray;
	Parms.bInitializeOutput = bInitializeOutput;
	Parms.CraftedQuantity = CraftedQuantity;
	Parms.CrafterPersistentID = CrafterPersistentID;
	Parms.CraftingController = CraftingController;
	Parms.CraftingPawn = CraftingPawn;
	Parms.bItemGrantPossible = bItemGrantPossible;
	Parms.ItemsToGrant = ItemsToGrant;
	Parms.CraftingRecipe = CraftingRecipe;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FindCraftForID_BP_Success = CallFunc_FindCraftForID_BP_Success;
	Parms.CallFunc_FindCraftForID_BP_CraftInProgressIndex = CallFunc_FindCraftForID_BP_CraftInProgressIndex;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetCraftingPawnAndController_bSuccess = CallFunc_GetCraftingPawnAndController_bSuccess;
	Parms.CallFunc_GetCraftingPawnAndController_Pawn = CallFunc_GetCraftingPawnAndController_Pawn;
	Parms.CallFunc_GetCraftingPawnAndController_Controller = CallFunc_GetCraftingPawnAndController_Controller;
	Parms.CallFunc_CanExecuteAction_ReturnValue = CallFunc_CanExecuteAction_ReturnValue;
	Parms.CallFunc_IncrementCraftClaimedQuantityByID_Success = CallFunc_IncrementCraftClaimedQuantityByID_Success;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_ClaimItems_bSuccess = CallFunc_ClaimItems_bSuccess;
	Parms.CallFunc_ClaimItems_ClaimedInstances = CallFunc_ClaimItems_ClaimedInstances;
	Parms.CallFunc_ClaimItems_UnclaimedItems = CallFunc_ClaimItems_UnclaimedItems;
	Parms.CallFunc_SpawnUnclaimedInstances_Return_Value = CallFunc_SpawnUnclaimedInstances_Return_Value;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeClaimedInstancesPayload_ReturnValue = CallFunc_MakeClaimedInstancesPayload_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetItemGrants_ReturnValue = CallFunc_GetItemGrants_ReturnValue;
	Parms.CallFunc_ProcessData_bSuccess = CallFunc_ProcessData_bSuccess;
	Parms.CallFunc_ProcessData_ReturnValue = CallFunc_ProcessData_ReturnValue;
	Parms.CallFunc_CanProcessData_ReturnValue = CallFunc_CanProcessData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TryGetCraftingRecipeReferenceFromContext_Branches = CallFunc_TryGetCraftingRecipeReferenceFromContext_Branches;
	Parms.CallFunc_TryGetCraftingRecipeReferenceFromContext_ReturnValue = CallFunc_TryGetCraftingRecipeReferenceFromContext_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


