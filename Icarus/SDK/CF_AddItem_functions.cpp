#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_AddItem.CF_AddItem_C
// (None)

class UClass* UCF_AddItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_AddItem_C");

	return Clss;
}


// CF_AddItem_C CF_AddItem.Default__CF_AddItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_AddItem_C* UCF_AddItem_C::GetDefaultObj()
{
	static class UCF_AddItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_AddItem_C*>(UCF_AddItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_AddItem.CF_AddItem_C.OnConstruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAddResourceComboRow_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateEnum           CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_AddItem_C::OnConstruction(class UAddResourceComboRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FItemTemplateEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddItem_C", "OnConstruction");

	Params::UCF_AddItem_C_OnConstruction_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddItem.CF_AddItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_AddItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_AddItem.CF_AddItem_C.Handle Execute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_AddItem_C::Handle_Execute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddItem_C", "Handle Execute");

	Params::UCF_AddItem_C_Handle_Execute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddItem.CF_AddItem_C.Handle On Item Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_AddItem_C::Handle_On_Item_Set(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddItem_C", "Handle On Item Set");

	Params::UCF_AddItem_C_Handle_On_Item_Set_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_AddItem.CF_AddItem_C.ExecuteUbergraph_CF_AddItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAddResourceComboRow_C*      K2Node_DynamicCast_AsAdd_Resource_Combo_Row                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTemplateRowHandle      CallFunc_MakeItemTemplate_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAddResourceComboRow_C*      K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTemplateRowHandle      CallFunc_MakeItemTemplate_ReturnValue_1                          (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate_1                    (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_AddItem_C::ExecuteUbergraph_CF_AddItem(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, bool K2Node_SwitchEnum_CmpSuccess_1, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1, bool K2Node_DynamicCast_bSuccess_2, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue_1, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_AddItem_C", "ExecuteUbergraph_CF_AddItem");

	Params::UCF_AddItem_C_ExecuteUbergraph_CF_AddItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_DynamicCast_AsAdd_Resource_Combo_Row = K2Node_DynamicCast_AsAdd_Resource_Combo_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeItemTemplate_ReturnValue = CallFunc_MakeItemTemplate_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1 = K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_MakeItemTemplate_ReturnValue_1 = CallFunc_MakeItemTemplate_ReturnValue_1;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate_1 = CallFunc_GetItemTemplateStruct_ItemTemplate_1;
	Parms.CallFunc_GetItemTemplateStruct_Paths_1 = CallFunc_GetItemTemplateStruct_Paths_1;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


