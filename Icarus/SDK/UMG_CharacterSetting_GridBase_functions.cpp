#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C
// (None)

class UClass* UUMG_CharacterSetting_GridBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterSetting_GridBase_C");

	return Clss;
}


// UMG_CharacterSetting_GridBase_C UMG_CharacterSetting_GridBase.Default__UMG_CharacterSetting_GridBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterSetting_GridBase_C* UUMG_CharacterSetting_GridBase_C::GetDefaultObj()
{
	static class UUMG_CharacterSetting_GridBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterSetting_GridBase_C*>(UUMG_CharacterSetting_GridBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_GridBase_C::ClearOptions(bool ClearIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "ClearOptions");

	Params::UUMG_CharacterSetting_GridBase_C_ClearOptions_Params Parms{};

	Parms.ClearIndex = ClearIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.GetToggleButtonAtIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_ToggleButton_ColorSelect_C*>CallFunc_GetChildWidgetsOfClass_ChildWidgets                     (ReferenceParm, ContainsInstancedReference)
// struct FRowHandle                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_GridBase_C::GetToggleButtonAtIndex(int32 OptionIndex, class UUMG_ToggleButton_ColorSelect_C** Button, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUMG_ToggleButton_ColorSelect_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, const struct FRowHandle& CallFunc_Array_Get_Item, class UUMG_ToggleButton_ColorSelect_C* CallFunc_Array_Get_Item_1, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "GetToggleButtonAtIndex");

	Params::UUMG_CharacterSetting_GridBase_C_GetToggleButtonAtIndex_Params Parms{};

	Parms.OptionIndex = OptionIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildWidgetsOfClass_ChildWidgets = CallFunc_GetChildWidgetsOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue = CallFunc_EqualEqual_FCharacterCreationDataRowHandleFCharacterCreationDataRowHandle_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.AddOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRowHandle                  Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_AddNewGridItem_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_GridBase_C::AddOption(const struct FRowHandle& Option, int32* Index, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, int32 CallFunc_AddOption_Index, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ToggleButton_ColorSelect_C* CallFunc_AddNewGridItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "AddOption");

	Params::UUMG_CharacterSetting_GridBase_C_AddOption_Params Parms{};

	Parms.Option = Option;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddNewGridItem_ReturnValue = CallFunc_AddNewGridItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.OnGridSelectionUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_GridBase_C::OnGridSelectionUpdated(class UUMG_ToggleButtonBase_C* ToggleButton, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "OnGridSelectionUpdated");

	Params::UUMG_CharacterSetting_GridBase_C_OnGridSelectionUpdated_Params Parms{};

	Parms.ToggleButton = ToggleButton;
	Parms.K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select = K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.AddNewGridItem
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCreationDataRowHandleCharacterCustomisationRow                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              WidthOverride                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RowLength                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButton_ColorSelect_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUMG_ToggleButton_ColorSelect_C* UUMG_CharacterSetting_GridBase_C::AddNewGridItem(const struct FCharacterCreationDataRowHandle& CharacterCustomisationRow, float WidthOverride, int32 RowLength, class UUMG_ToggleButton_ColorSelect_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "AddNewGridItem");

	Params::UUMG_CharacterSetting_GridBase_C_AddNewGridItem_Params Parms{};

	Parms.CharacterCustomisationRow = CharacterCustomisationRow;
	Parms.WidthOverride = WidthOverride;
	Parms.RowLength = RowLength;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_GridBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "PreConstruct");

	Params::UUMG_CharacterSetting_GridBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.ExecuteUbergraph_UMG_CharacterSetting_GridBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSetting_GridBase_C::ExecuteUbergraph_UMG_CharacterSetting_GridBase(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_GridBase_C", "ExecuteUbergraph_UMG_CharacterSetting_GridBase");

	Params::UUMG_CharacterSetting_GridBase_C_ExecuteUbergraph_UMG_CharacterSetting_GridBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


