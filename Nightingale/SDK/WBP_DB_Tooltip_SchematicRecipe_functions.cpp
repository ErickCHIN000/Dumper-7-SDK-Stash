#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C
// (None)

class UClass* UWBP_DB_Tooltip_SchematicRecipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Tooltip_SchematicRecipe_C");

	return Clss;
}


// WBP_DB_Tooltip_SchematicRecipe_C WBP_DB_Tooltip_SchematicRecipe.Default__WBP_DB_Tooltip_SchematicRecipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Tooltip_SchematicRecipe_C* UWBP_DB_Tooltip_SchematicRecipe_C::GetDefaultObj()
{
	static class UWBP_DB_Tooltip_SchematicRecipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Tooltip_SchematicRecipe_C*>(UWBP_DB_Tooltip_SchematicRecipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.PopulateRequirements
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStructureResourceRequirements>InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// class FText                        CallFunc_ResourceRequirementToUIData_ResourceTraits              (None)
// class FText                        CallFunc_ResourceRequirementToUIData_ResourceQuantity            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_RecipeRequirementsListing_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Tooltip_SchematicRecipe_C::PopulateRequirements(TArray<struct FStructureResourceRequirements>& InputPin, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, class FText CallFunc_ResourceRequirementToUIData_ResourceTraits, class FText CallFunc_ResourceRequirementToUIData_ResourceQuantity, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_DB_RecipeRequirementsListing_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Tooltip_SchematicRecipe_C", "PopulateRequirements");

	Params::UWBP_DB_Tooltip_SchematicRecipe_C_PopulateRequirements_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ResourceRequirementToUIData_ResourceTraits = CallFunc_ResourceRequirementToUIData_ResourceTraits;
	Parms.CallFunc_ResourceRequirementToUIData_ResourceQuantity = CallFunc_ResourceRequirementToUIData_ResourceQuantity;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Tooltip_SchematicRecipe_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Tooltip_SchematicRecipe_C", "PreConstruct");

	Params::UWBP_DB_Tooltip_SchematicRecipe_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Tooltip_SchematicRecipe_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Tooltip_SchematicRecipe_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Tooltip_SchematicRecipe.WBP_DB_Tooltip_SchematicRecipe_C.ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureDataFromStructureAssetReference_IsValid     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureDataFromStructureAssetReference_OutData     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Tooltip_SchematicRecipe_C::ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe(int32 EntryPoint, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Tooltip_SchematicRecipe_C", "ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe");

	Params::UWBP_DB_Tooltip_SchematicRecipe_C_ExecuteUbergraph_WBP_DB_Tooltip_SchematicRecipe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_IsValid = CallFunc_GetStructureDataFromStructureAssetReference_IsValid;
	Parms.CallFunc_GetStructureDataFromStructureAssetReference_OutData = CallFunc_GetStructureDataFromStructureAssetReference_OutData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


