#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Talent_Blueprint.UMG_Talent_Blueprint_C
// (None)

class UClass* UUMG_Talent_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Talent_Blueprint_C");

	return Clss;
}


// UMG_Talent_Blueprint_C UMG_Talent_Blueprint.Default__UMG_Talent_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Talent_Blueprint_C* UUMG_Talent_Blueprint_C::GetDefaultObj()
{
	static class UUMG_Talent_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Talent_Blueprint_C*>(UUMG_Talent_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.GetStringForFilterSearch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUMG_Talent_Blueprint_C::GetStringForFilterSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "GetStringForFilterSearch");

	Params::UUMG_Talent_Blueprint_C_GetStringForFilterSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.RefreshSearchHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::RefreshSearchHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "RefreshSearchHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateTooltipAndComingSoon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::UpdateTooltipAndComingSoon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "UpdateTooltipAndComingSoon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::UpdateToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "UpdateToolTip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateRequiredTalent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCPackageDataRowHandle    DLCRequired                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FDLCPackageDataRowHandle    RequiredDLC                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           RequiredTalent                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentsRowHandle           CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue(NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelsRowHandle     CallFunc_GetFeatureLevel_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAllFlagsSet_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlagsMultiRowHandle        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FDLCPackageDataRowHandle    CallFunc_ToDLCPackageDataRowHandle_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::UpdateRequiredTalent(const struct FDLCPackageDataRowHandle& DLCRequired, const struct FDLCPackageDataRowHandle& RequiredDLC, const struct FTalentsRowHandle& RequiredTalent, bool CallFunc_IsRowHandleValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FTalentsRowHandle& CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, const struct FFeatureLevelsRowHandle& CallFunc_GetFeatureLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AreAllFlagsSet_ReturnValue, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, const struct FDLCPackageDataRowHandle& CallFunc_ToDLCPackageDataRowHandle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "UpdateRequiredTalent");

	Params::UUMG_Talent_Blueprint_C_UpdateRequiredTalent_Params Parms{};

	Parms.DLCRequired = DLCRequired;
	Parms.RequiredDLC = RequiredDLC;
	Parms.RequiredTalent = RequiredTalent;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue = CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.CallFunc_GetFeatureLevel_ReturnValue = CallFunc_GetFeatureLevel_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AreAllFlagsSet_ReturnValue = CallFunc_AreAllFlagsSet_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ToDLCPackageDataRowHandle_ReturnValue = CallFunc_ToDLCPackageDataRowHandle_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_2 = CallFunc_IsRowHandleValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Update Required Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::Update_Required_Level(const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Update Required Level");

	Params::UUMG_Talent_Blueprint_C_Update_Required_Level_Params Parms{};

	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateDesaturationMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::UpdateDesaturationMaterial(int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "UpdateDesaturationMaterial");

	Params::UUMG_Talent_Blueprint_C_UpdateDesaturationMaterial_Params Parms{};

	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Blueprint_C::GetOverlay(class UOverlay** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "GetOverlay");

	Params::UUMG_Talent_Blueprint_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_SoftObjectReference_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::Set_Icon(TSoftObjectPtr<class UTexture2D> Texture, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UObject> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Set Icon");

	Params::UUMG_Talent_Blueprint_C_Set_Icon_Params Parms{};

	Parms.Texture = Texture;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_NotEqual_SoftObjectReference_ReturnValue = CallFunc_NotEqual_SoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InVec                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Blueprint_C::SetSize(const struct FVector2D& InVec, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "SetSize");

	Params::UUMG_Talent_Blueprint_C_SetSize_Params Parms{};

	Parms.InVec = InVec;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Refresh Hover State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentView                 TalentView                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETalentState            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           CallFunc_GetButtonState_State                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentHoverConfig          K2Node_Select_Default                                            (None)
// enum class E_ButtonState           CallFunc_GetButtonState_State_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::Refresh_Hover_State(struct FTalentView& TalentView, enum class ETalentState Temp_byte_Variable, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, enum class E_ButtonState CallFunc_GetButtonState_State, bool K2Node_SwitchEnum_CmpSuccess, const struct FTalentHoverConfig& K2Node_Select_Default, enum class E_ButtonState CallFunc_GetButtonState_State_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Refresh Hover State");

	Params::UUMG_Talent_Blueprint_C_Refresh_Hover_State_Params Parms{};

	Parms.TalentView = TalentView;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_GetButtonState_State = CallFunc_GetButtonState_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetButtonState_State_1 = CallFunc_GetButtonState_State_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Finished_A81076484900AC102F0EE58623931564
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::Finished_A81076484900AC102F0EE58623931564()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Finished_A81076484900AC102F0EE58623931564");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Refresh Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::Refresh_Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Refresh Display");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Hover States
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Talent_Blueprint_C::Set_Hover_States(const struct FSlateColor& TextColor, const struct FSlateColor& IconColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "Set Hover States");

	Params::UUMG_Talent_Blueprint_C_Set_Hover_States_Params Parms{};

	Parms.TextColor = TextColor;
	Parms.IconColor = IconColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentModelData            NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Talent_Blueprint_C::OnStateChanged(const struct FTalentModelData& NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "OnStateChanged");

	Params::UUMG_Talent_Blueprint_C_OnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnTalentSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Talent_Blueprint_C::OnTalentSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "OnTalentSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_Talent_Blueprint_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "OnMouseEnter");

	Params::UUMG_Talent_Blueprint_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_Talent_Blueprint_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "OnMouseLeave");

	Params::UUMG_Talent_Blueprint_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.SetSearchHighlight
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::SetSearchHighlight(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "SetSearchHighlight");

	Params::UUMG_Talent_Blueprint_C_SetSearchHighlight_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.ExecuteUbergraph_UMG_Talent_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue      (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_CustomEvent_TextColor                                     (None)
// struct FSlateColor                 K2Node_CustomEvent_IconColor                                     (None)
// struct FTalentModelData            K2Node_Event_NewState                                            (NoDestructor)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnlockNextTalentRank_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_CastToItemableRowHandle_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          CallFunc_CastToItemableRowHandle_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentTooltipWidget*        CallFunc_TryGetCurrentTooltipWidget_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentTooltip_Blueprint_C*K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Blueprint_C::ExecuteUbergraph_UMG_Talent_Blueprint(int32 EntryPoint, const class FString& CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_CustomEvent_IconColor, const struct FTalentModelData& K2Node_Event_NewState, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_UnlockNextTalentRank_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EValid CallFunc_CastToItemableRowHandle_Paths, const struct FItemableRowHandle& CallFunc_CastToItemableRowHandle_ReturnValue, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue, bool K2Node_Event_bHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UTalentTooltipWidget* CallFunc_TryGetCurrentTooltipWidget_ReturnValue, class UUMG_TalentTooltip_Blueprint_C* K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "ExecuteUbergraph_UMG_Talent_Blueprint");

	Params::UUMG_Talent_Blueprint_C_ExecuteUbergraph_UMG_Talent_Blueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue = CallFunc_GenerateSearchStringForBlueprintTalent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_TextColor = K2Node_CustomEvent_TextColor;
	Parms.K2Node_CustomEvent_IconColor = K2Node_CustomEvent_IconColor;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_UnlockNextTalentRank_ReturnValue = CallFunc_UnlockNextTalentRank_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_CastToItemableRowHandle_Paths = CallFunc_CastToItemableRowHandle_Paths;
	Parms.CallFunc_CastToItemableRowHandle_ReturnValue = CallFunc_CastToItemableRowHandle_ReturnValue;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_TryGetCurrentTooltipWidget_ReturnValue = CallFunc_TryGetCurrentTooltipWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint = K2Node_DynamicCast_AsUMG_Talent_Tooltip_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnTalentClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Blueprint_C::OnTalentClicked__DelegateSignature(const struct FTalentsRowHandle& Talent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Blueprint_C", "OnTalentClicked__DelegateSignature");

	Params::UUMG_Talent_Blueprint_C_OnTalentClicked__DelegateSignature_Params Parms{};

	Parms.Talent = Talent;

	UObject::ProcessEvent(Func, &Parms);

}

}


