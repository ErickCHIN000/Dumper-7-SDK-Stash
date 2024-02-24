#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C
// (None)

class UClass* UBPFL_Telemetry_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Telemetry_Crafting_C");

	return Clss;
}


// BPFL_Telemetry_Crafting_C BPFL_Telemetry_Crafting.Default__BPFL_Telemetry_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Telemetry_Crafting_C* UBPFL_Telemetry_Crafting_C::GetDefaultObj()
{
	static class UBPFL_Telemetry_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Telemetry_Crafting_C*>(UBPFL_Telemetry_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GenerateCraftingStationRecipesString
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCraftingRecipeReference>Recipes                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      OutputString                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

class FString UBPFL_Telemetry_Crafting_C::GenerateCraftingStationRecipesString(TArray<struct FCraftingRecipeReference>& Recipes, class UObject* __WorldContext, const class FString& OutputString, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GenerateCraftingStationRecipesString");

	Params::UBPFL_Telemetry_Crafting_C_GenerateCraftingStationRecipesString_Params Parms{};

	Parms.Recipes = Recipes;
	Parms.__WorldContext = __WorldContext;
	Parms.OutputString = OutputString;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GenerateCommonStationData
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       SessionId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (Parm, OutParm)
// class FString                      OwnerID                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StationID                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StationType                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CraftingStationActor                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITelemetrySerializationInterface>K2Node_DynamicCast_AsTelemetry_Serialization_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipInterface>K2Node_DynamicCast_AsOwnership_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTelemetryAttribute_ObjectUniqueId_OutUniqueId        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTelemetryAttribute_ObjectUniqueId_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerPersistentID_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOwnershipAccessInterface>K2Node_DynamicCast_AsOwnership_Access_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwnershipObject_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStationIdAndType_StationType                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStationIdAndType_UniqueId                            (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// TArray<struct FCraftingRecipeReference>CallFunc_GetCraftingRecipes_CurrentCraftingRecipes               (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GenerateCraftingStationRecipesString_ReturnValue        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GenerateCraftingStationDecorationsString_ReturnValue    (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_2                             (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_3                             (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_4                             (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_5                             (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_6                             (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ReferenceParm)

void UBPFL_Telemetry_Crafting_C::GenerateCommonStationData(const struct FGuid& SessionId, class UBP_CraftingStationComponent_C* CraftingStation, class UObject* __WorldContext, bool* bWasSuccess, TArray<struct FMetricsEventAttr>* Attributes, const class FString& OwnerID, const class FString& StationID, const class FString& StationType, class AActor* CraftingStationActor, const class FString& Temp_string_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& Temp_string_Variable_1, class UObject* Temp_object_Variable, TScriptInterface<class ITelemetrySerializationInterface> K2Node_DynamicCast_AsTelemetry_Serialization_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetTelemetryAttribute_ObjectUniqueId_OutUniqueId, bool CallFunc_GetTelemetryAttribute_ObjectUniqueId_ReturnValue, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, bool Temp_bool_Variable, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_GetOwnershipObject_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_GetStationIdAndType_StationType, const class FString& CallFunc_GetStationIdAndType_UniqueId, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GenerateCraftingStationRecipesString_ReturnValue, const class FString& CallFunc_GenerateCraftingStationDecorationsString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_3, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_4, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_5, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_6, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GenerateCommonStationData");

	Params::UBPFL_Telemetry_Crafting_C_GenerateCommonStationData_Params Parms{};

	Parms.SessionId = SessionId;
	Parms.CraftingStation = CraftingStation;
	Parms.__WorldContext = __WorldContext;
	Parms.OwnerID = OwnerID;
	Parms.StationID = StationID;
	Parms.StationType = StationType;
	Parms.CraftingStationActor = CraftingStationActor;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTelemetry_Serialization_Interface = K2Node_DynamicCast_AsTelemetry_Serialization_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOwnership_Interface = K2Node_DynamicCast_AsOwnership_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTelemetryAttribute_ObjectUniqueId_OutUniqueId = CallFunc_GetTelemetryAttribute_ObjectUniqueId_OutUniqueId;
	Parms.CallFunc_GetTelemetryAttribute_ObjectUniqueId_ReturnValue = CallFunc_GetTelemetryAttribute_ObjectUniqueId_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPersistentID_ReturnValue = CallFunc_GetOwningPlayerPersistentID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsOwnership_Access_Interface = K2Node_DynamicCast_AsOwnership_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwnershipObject_ReturnValue = CallFunc_GetOwnershipObject_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_GetStationIdAndType_StationType = CallFunc_GetStationIdAndType_StationType;
	Parms.CallFunc_GetStationIdAndType_UniqueId = CallFunc_GetStationIdAndType_UniqueId;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.CallFunc_GetCraftingRecipes_CurrentCraftingRecipes = CallFunc_GetCraftingRecipes_CurrentCraftingRecipes;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GenerateCraftingStationRecipesString_ReturnValue = CallFunc_GenerateCraftingStationRecipesString_ReturnValue;
	Parms.CallFunc_GenerateCraftingStationDecorationsString_ReturnValue = CallFunc_GenerateCraftingStationDecorationsString_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_2 = K2Node_MakeStruct_MetricsEventAttr_2;
	Parms.K2Node_MakeStruct_MetricsEventAttr_3 = K2Node_MakeStruct_MetricsEventAttr_3;
	Parms.K2Node_MakeStruct_MetricsEventAttr_4 = K2Node_MakeStruct_MetricsEventAttr_4;
	Parms.K2Node_MakeStruct_MetricsEventAttr_5 = K2Node_MakeStruct_MetricsEventAttr_5;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_6 = K2Node_MakeStruct_MetricsEventAttr_6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasSuccess != nullptr)
		*bWasSuccess = Parms.bWasSuccess;

	if (Attributes != nullptr)
		*Attributes = std::move(Parms.Attributes);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GenerateCommonCraftData
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       CraftId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      StationTypeOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bWasSuccess                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   OutAttributes                                                    (Parm, OutParm)
// class FString                      StationUniqueId                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StationType                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CraftingStationActor                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// TArray<struct FCraftingRecipeReference>CallFunc_GetCraftingRecipes_CurrentCraftingRecipes               (ReferenceParm)
// class FString                      CallFunc_GenerateCraftingStationRecipesString_ReturnValue        (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_2                             (None)
// class FString                      CallFunc_GetStationIdAndType_StationType                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStationIdAndType_UniqueId                            (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_3                             (None)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_4                             (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_5                             (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::GenerateCommonCraftData(const struct FGuid& CraftId, const struct FCraftingRecipeReference& RecipeReference, class UBP_CraftingStationComponent_C* CraftingStation, const class FString& StationTypeOverride, class UObject* __WorldContext, bool* bWasSuccess, TArray<struct FMetricsEventAttr>* OutAttributes, const class FString& StationUniqueId, const class FString& StationType, class AActor* CraftingStationActor, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes, const class FString& CallFunc_GenerateCraftingStationRecipesString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, const class FString& CallFunc_GetStationIdAndType_StationType, const class FString& CallFunc_GetStationIdAndType_UniqueId, const struct FGuid& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_3, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const class FString& CallFunc_GetBaseFilename_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_4, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_5, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GenerateCommonCraftData");

	Params::UBPFL_Telemetry_Crafting_C_GenerateCommonCraftData_Params Parms{};

	Parms.CraftId = CraftId;
	Parms.RecipeReference = RecipeReference;
	Parms.CraftingStation = CraftingStation;
	Parms.StationTypeOverride = StationTypeOverride;
	Parms.__WorldContext = __WorldContext;
	Parms.StationUniqueId = StationUniqueId;
	Parms.StationType = StationType;
	Parms.CraftingStationActor = CraftingStationActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.CallFunc_GetCraftingRecipes_CurrentCraftingRecipes = CallFunc_GetCraftingRecipes_CurrentCraftingRecipes;
	Parms.CallFunc_GenerateCraftingStationRecipesString_ReturnValue = CallFunc_GenerateCraftingStationRecipesString_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_2 = K2Node_MakeStruct_MetricsEventAttr_2;
	Parms.CallFunc_GetStationIdAndType_StationType = CallFunc_GetStationIdAndType_StationType;
	Parms.CallFunc_GetStationIdAndType_UniqueId = CallFunc_GetStationIdAndType_UniqueId;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_3 = K2Node_MakeStruct_MetricsEventAttr_3;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_4 = K2Node_MakeStruct_MetricsEventAttr_4;
	Parms.K2Node_MakeStruct_MetricsEventAttr_5 = K2Node_MakeStruct_MetricsEventAttr_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasSuccess != nullptr)
		*bWasSuccess = Parms.bWasSuccess;

	if (OutAttributes != nullptr)
		*OutAttributes = std::move(Parms.OutAttributes);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GetStationIdAndType
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CraftingStationActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      StationType                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UniqueID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureUniqueIDInterface>CallFunc_GetUniqueIdentifierAsGUID_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIdentifierAsGUID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::GetStationIdAndType(class AActor* CraftingStationActor, class UObject* __WorldContext, class FString* StationType, class FString* UniqueID, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const class FString& CallFunc_Conv_GuidToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GetStationIdAndType");

	Params::UBPFL_Telemetry_Crafting_C_GetStationIdAndType_Params Parms{};

	Parms.CraftingStationActor = CraftingStationActor;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_self_CastInput = CallFunc_GetUniqueIdentifierAsGUID_self_CastInput;
	Parms.CallFunc_GetUniqueIdentifierAsGUID_ReturnValue = CallFunc_GetUniqueIdentifierAsGUID_ReturnValue;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StationType != nullptr)
		*StationType = std::move(Parms.StationType);

	if (UniqueID != nullptr)
		*UniqueID = std::move(Parms.UniqueID);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GenerateCraftingStationDecorationsString
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      StructureActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      OutputString                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetStructureSlotInformation_OutNumSlots                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetStructureSlotInformation_OutSlottedStructures        (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDataProviderInterface>K2Node_DynamicCast_AsStructure_Data_Provider_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_GetStructureAssetReference_IsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    CallFunc_GetStructureAssetReference_OutStructureReference        (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBPFL_Telemetry_Crafting_C::GenerateCraftingStationDecorationsString(class AActor* StructureActor, class UObject* __WorldContext, const class FString& OutputString, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_GetStructureSlotInformation_OutNumSlots, TArray<class AActor*>& CallFunc_GetStructureSlotInformation_OutSlottedStructures, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, const class FString& CallFunc_SelectString_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FSoftObjectPath& CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GenerateCraftingStationDecorationsString");

	Params::UBPFL_Telemetry_Crafting_C_GenerateCraftingStationDecorationsString_Params Parms{};

	Parms.StructureActor = StructureActor;
	Parms.__WorldContext = __WorldContext;
	Parms.OutputString = OutputString;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetStructureSlotInformation_OutNumSlots = CallFunc_GetStructureSlotInformation_OutNumSlots;
	Parms.CallFunc_GetStructureSlotInformation_OutSlottedStructures = CallFunc_GetStructureSlotInformation_OutSlottedStructures;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Data_Provider_Interface = K2Node_DynamicCast_AsStructure_Data_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetStructureAssetReference_IsValid = CallFunc_GetStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureAssetReference_OutStructureReference = CallFunc_GetStructureAssetReference_OutStructureReference;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue = CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_CraftingStationExited
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftingSessionID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateCommonStationData_bWasSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   CallFunc_GenerateCommonStationData_Attributes                    (ReferenceParm)

void UBPFL_Telemetry_Crafting_C::Telemetry_CraftingStationExited(class APlayerState* PlayerState, const struct FGuid& CraftingSessionID, class UBP_CraftingStationComponent_C* CraftingStationComponent, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GenerateCommonStationData_bWasSuccess, TArray<struct FMetricsEventAttr>& CallFunc_GenerateCommonStationData_Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_CraftingStationExited");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_CraftingStationExited_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CraftingSessionID = CraftingSessionID;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GenerateCommonStationData_bWasSuccess = CallFunc_GenerateCommonStationData_bWasSuccess;
	Parms.CallFunc_GenerateCommonStationData_Attributes = CallFunc_GenerateCommonStationData_Attributes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_RecipesUsedInSession
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCraftingRecipeReference>Recipes                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftingSessionID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CraftIds                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CraftIdsOutputString                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StationID                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StationType                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CurrentSeparator                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CurrentRecipe                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      RecipeIdsOutputString                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      RecipesOutputString                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateCommonStationData_bWasSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   CallFunc_GenerateCommonStationData_Attributes                    (ReferenceParm)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_2                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::Telemetry_RecipesUsedInSession(class APlayerState* PlayerState, TArray<struct FCraftingRecipeReference>& Recipes, class UBP_CraftingStationComponent_C* CraftingStation, const struct FGuid& CraftingSessionID, TArray<struct FGuid>& CraftIds, class UObject* __WorldContext, const class FString& CraftIdsOutputString, int32 CurrentIndex, const class FString& StationID, const class FString& StationType, const class FString& CurrentSeparator, const struct FCraftingRecipeReference& CurrentRecipe, const class FString& RecipeIdsOutputString, const class FString& RecipesOutputString, const TArray<struct FMetricsEventAttr>& Attributes, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_GenerateCommonStationData_bWasSuccess, TArray<struct FMetricsEventAttr>& CallFunc_GenerateCommonStationData_Attributes, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FGuid& CallFunc_GetID_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, class FText CallFunc_Conv_StringToText_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, int32 CallFunc_Array_Add_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_RecipesUsedInSession");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_RecipesUsedInSession_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Recipes = Recipes;
	Parms.CraftingStation = CraftingStation;
	Parms.CraftingSessionID = CraftingSessionID;
	Parms.CraftIds = CraftIds;
	Parms.__WorldContext = __WorldContext;
	Parms.CraftIdsOutputString = CraftIdsOutputString;
	Parms.CurrentIndex = CurrentIndex;
	Parms.StationID = StationID;
	Parms.StationType = StationType;
	Parms.CurrentSeparator = CurrentSeparator;
	Parms.CurrentRecipe = CurrentRecipe;
	Parms.RecipeIdsOutputString = RecipeIdsOutputString;
	Parms.RecipesOutputString = RecipesOutputString;
	Parms.Attributes = Attributes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GenerateCommonStationData_bWasSuccess = CallFunc_GenerateCommonStationData_bWasSuccess;
	Parms.CallFunc_GenerateCommonStationData_Attributes = CallFunc_GenerateCommonStationData_Attributes;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_2 = K2Node_MakeStruct_MetricsEventAttr_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_CraftingStationEntered
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftingSessionID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateCommonStationData_bWasSuccess                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   CallFunc_GenerateCommonStationData_Attributes                    (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::Telemetry_CraftingStationEntered(class APlayerState* PlayerState, const struct FGuid& CraftingSessionID, class UBP_CraftingStationComponent_C* CraftingStation, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GenerateCommonStationData_bWasSuccess, TArray<struct FMetricsEventAttr>& CallFunc_GenerateCommonStationData_Attributes, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_CraftingStationEntered");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_CraftingStationEntered_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CraftingSessionID = CraftingSessionID;
	Parms.CraftingStation = CraftingStation;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GenerateCommonStationData_bWasSuccess = CallFunc_GenerateCommonStationData_bWasSuccess;
	Parms.CallFunc_GenerateCommonStationData_Attributes = CallFunc_GenerateCommonStationData_Attributes;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.GenerateCraftingStationDisciplinesString
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>        Disciplines                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      OutputString                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBPFL_Telemetry_Crafting_C::GenerateCraftingStationDisciplinesString(TArray<struct FGameplayTag>& Disciplines, class UObject* __WorldContext, const class FString& OutputString, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "GenerateCraftingStationDisciplinesString");

	Params::UBPFL_Telemetry_Crafting_C_GenerateCraftingStationDisciplinesString_Params Parms{};

	Parms.Disciplines = Disciplines;
	Parms.__WorldContext = __WorldContext;
	Parms.OutputString = OutputString;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_GrantCraftedItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             OutputItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              QuantityGranted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputItems                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          DustReferenceT3                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemDataReference          DustReferenceT2                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemDataReference          DustReferenceT1                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              EssenceT3Used                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EssenceT2Used                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EssenceT1Used                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              EssenceDustUsed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrencyChangeEvent                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TSet<struct FCraftingRecipeReference>UpgradingRecipes                                                 (Edit, BlueprintVisible)
// struct FItemDataReference          DustReference                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSet<struct FCraftingRecipeReference>K2Node_MakeVariable_MakeVariableOutput                           (None)

void UBPFL_Telemetry_Crafting_C::Telemetry_GrantCraftedItem(class APlayerState* PlayerState, const struct FGuid& CraftId, const struct FCraftingRecipeReference& RecipeReference, class UBP_CraftingStationComponent_C* CraftingStation, const struct FInventoryEntry& OutputItem, int32 QuantityGranted, TArray<struct FInventoryEntry>& InputItems, class UObject* __WorldContext, const struct FItemDataReference& DustReferenceT3, const struct FItemDataReference& DustReferenceT2, const struct FItemDataReference& DustReferenceT1, int32 EssenceT3Used, int32 EssenceT2Used, int32 EssenceT1Used, int32 EssenceDustUsed, const class FString& CurrencyChangeEvent, TSet<struct FCraftingRecipeReference> UpgradingRecipes, const struct FItemDataReference& DustReference, const TArray<struct FMetricsEventAttr>& Attributes, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TSet<struct FCraftingRecipeReference> K2Node_MakeVariable_MakeVariableOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_GrantCraftedItem");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_GrantCraftedItem_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CraftId = CraftId;
	Parms.RecipeReference = RecipeReference;
	Parms.CraftingStation = CraftingStation;
	Parms.OutputItem = OutputItem;
	Parms.QuantityGranted = QuantityGranted;
	Parms.InputItems = InputItems;
	Parms.__WorldContext = __WorldContext;
	Parms.DustReferenceT3 = DustReferenceT3;
	Parms.DustReferenceT2 = DustReferenceT2;
	Parms.DustReferenceT1 = DustReferenceT1;
	Parms.EssenceT3Used = EssenceT3Used;
	Parms.EssenceT2Used = EssenceT2Used;
	Parms.EssenceT1Used = EssenceT1Used;
	Parms.EssenceDustUsed = EssenceDustUsed;
	Parms.CurrencyChangeEvent = CurrencyChangeEvent;
	Parms.UpgradingRecipes = UpgradingRecipes;
	Parms.DustReference = DustReference;
	Parms.Attributes = Attributes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_ItemCrafted
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       CraftId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    RecipeReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              QuantityRequested                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CraftingStationComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputMaterials                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      PlayerUniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CraftingStationActor                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CraftingStationType                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (Edit, BlueprintVisible)
// TArray<struct FGameplayTag>        CraftingDisciplines                                              (Edit, BlueprintVisible)
// class FString                      CraftingStationID                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_2                             (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_GenerateCommonCraftData_bWasSuccess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   CallFunc_GenerateCommonCraftData_OutAttributes                   (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_AugmentWithItemEntryAttribute_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::Telemetry_ItemCrafted(const struct FGuid& CraftId, const struct FCraftingRecipeReference& RecipeReference, int32 QuantityRequested, class UBP_CraftingStationComponent_C* CraftingStationComponent, TArray<struct FInventoryEntry>& InputMaterials, const class FString& PlayerUniqueId, class UObject* __WorldContext, class AActor* CraftingStationActor, const class FString& CraftingStationType, const TArray<struct FMetricsEventAttr>& Attributes, const TArray<struct FGameplayTag>& CraftingDisciplines, const class FString& CraftingStationID, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array, bool CallFunc_GenerateCommonCraftData_bWasSuccess, TArray<struct FMetricsEventAttr>& CallFunc_GenerateCommonCraftData_OutAttributes, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_AugmentWithItemEntryAttribute_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_ItemCrafted");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_ItemCrafted_Params Parms{};

	Parms.CraftId = CraftId;
	Parms.RecipeReference = RecipeReference;
	Parms.QuantityRequested = QuantityRequested;
	Parms.CraftingStationComponent = CraftingStationComponent;
	Parms.InputMaterials = InputMaterials;
	Parms.PlayerUniqueId = PlayerUniqueId;
	Parms.__WorldContext = __WorldContext;
	Parms.CraftingStationActor = CraftingStationActor;
	Parms.CraftingStationType = CraftingStationType;
	Parms.Attributes = Attributes;
	Parms.CraftingDisciplines = CraftingDisciplines;
	Parms.CraftingStationID = CraftingStationID;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_MetricsEventAttr_2 = K2Node_MakeStruct_MetricsEventAttr_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GenerateCommonCraftData_bWasSuccess = CallFunc_GenerateCommonCraftData_bWasSuccess;
	Parms.CallFunc_GenerateCommonCraftData_OutAttributes = CallFunc_GenerateCommonCraftData_OutAttributes;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AugmentWithItemEntryAttribute_ReturnValue = CallFunc_AugmentWithItemEntryAttribute_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Telemetry_Crafting.BPFL_Telemetry_Crafting_C.Telemetry_StartCraftItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftInProgressId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    BaseRecipeReference                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FCraftingRecipeReference    LookUpRecipeReference                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     InputItems                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bSlotsSelected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSlotsChanged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CraftingSessionID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      StationID                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StationType                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   Attributes                                                       (Edit, BlueprintVisible)
// int32                              CurrentItemQuantity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CurrentItemID                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              S_InputItemQuantities                                            (Edit, BlueprintVisible)
// TArray<class FString>              S_InputItemIDs                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateCommonCraftData_bWasSuccess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetricsEventAttr>   CallFunc_GenerateCommonCraftData_OutAttributes                   (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr                               (None)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_1                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_2                             (None)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_3                             (None)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_4                             (None)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FMetricsEventAttr           K2Node_MakeStruct_MetricsEventAttr_5                             (None)
// TArray<struct FMetricsEventAttr>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AugmentWithItemEntryAttribute_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Telemetry_Crafting_C::Telemetry_StartCraftItem(class APlayerState* PlayerState, const struct FGuid& CraftInProgressId, const struct FCraftingRecipeReference& BaseRecipeReference, const struct FCraftingRecipeReference& LookUpRecipeReference, int32 Quantity, TArray<struct FInventoryEntry>& InputItems, class UBP_CraftingStationComponent_C* CraftingStation, bool bSlotsSelected, bool bSlotsChanged, const struct FGuid& CraftingSessionID, class UObject* __WorldContext, const class FString& StationID, const class FString& StationType, const TArray<struct FMetricsEventAttr>& Attributes, int32 CurrentItemQuantity, const struct FDataTableRowHandle& CurrentItemID, const TArray<class FString>& S_InputItemQuantities, const TArray<class FString>& S_InputItemIDs, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_GenerateCommonCraftData_bWasSuccess, TArray<struct FMetricsEventAttr>& CallFunc_GenerateCommonCraftData_OutAttributes, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_IsValid_Guid_ReturnValue_1, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_SelectString_ReturnValue_1, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_3, const struct FGuid& CallFunc_GetID_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const class FString& CallFunc_BreakSoftObjectPath_PathString, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_4, const class FString& CallFunc_GetBaseFilename_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_5, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AugmentWithItemEntryAttribute_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Telemetry_Crafting_C", "Telemetry_StartCraftItem");

	Params::UBPFL_Telemetry_Crafting_C_Telemetry_StartCraftItem_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CraftInProgressId = CraftInProgressId;
	Parms.BaseRecipeReference = BaseRecipeReference;
	Parms.LookUpRecipeReference = LookUpRecipeReference;
	Parms.Quantity = Quantity;
	Parms.InputItems = InputItems;
	Parms.CraftingStation = CraftingStation;
	Parms.bSlotsSelected = bSlotsSelected;
	Parms.bSlotsChanged = bSlotsChanged;
	Parms.CraftingSessionID = CraftingSessionID;
	Parms.__WorldContext = __WorldContext;
	Parms.StationID = StationID;
	Parms.StationType = StationType;
	Parms.Attributes = Attributes;
	Parms.CurrentItemQuantity = CurrentItemQuantity;
	Parms.CurrentItemID = CurrentItemID;
	Parms.S_InputItemQuantities = S_InputItemQuantities;
	Parms.S_InputItemIDs = S_InputItemIDs;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_GenerateCommonCraftData_bWasSuccess = CallFunc_GenerateCommonCraftData_bWasSuccess;
	Parms.CallFunc_GenerateCommonCraftData_OutAttributes = CallFunc_GenerateCommonCraftData_OutAttributes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_IsValid_Guid_ReturnValue_1 = CallFunc_IsValid_Guid_ReturnValue_1;
	Parms.K2Node_MakeStruct_MetricsEventAttr = K2Node_MakeStruct_MetricsEventAttr;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.K2Node_MakeStruct_MetricsEventAttr_1 = K2Node_MakeStruct_MetricsEventAttr_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_MetricsEventAttr_2 = K2Node_MakeStruct_MetricsEventAttr_2;
	Parms.K2Node_MakeStruct_MetricsEventAttr_3 = K2Node_MakeStruct_MetricsEventAttr_3;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.K2Node_MakeStruct_MetricsEventAttr_4 = K2Node_MakeStruct_MetricsEventAttr_4;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.K2Node_MakeStruct_MetricsEventAttr_5 = K2Node_MakeStruct_MetricsEventAttr_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AugmentWithItemEntryAttribute_ReturnValue = CallFunc_AugmentWithItemEntryAttribute_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


