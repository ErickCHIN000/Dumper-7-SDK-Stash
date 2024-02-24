#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Talent_Outpost.UMG_Talent_Outpost_C
// (None)

class UClass* UUMG_Talent_Outpost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Talent_Outpost_C");

	return Clss;
}


// UMG_Talent_Outpost_C UMG_Talent_Outpost.Default__UMG_Talent_Outpost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Talent_Outpost_C* UUMG_Talent_Outpost_C::GetDefaultObj()
{
	static class UUMG_Talent_Outpost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Talent_Outpost_C*>(UUMG_Talent_Outpost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.UpdateDLCLockIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCPackageDataRowHandle    DLCRequired                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_CastToOutpostsRowHandle_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutpostsRowHandle          CallFunc_CastToOutpostsRowHandle_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOutpost                    CallFunc_GetOutpostsStruct_Outposts                              (None)
// enum class EValid                  CallFunc_GetOutpostsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlagsMultiRowHandle        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCPackageDataRowHandle    CallFunc_ToDLCPackageDataRowHandle_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAllFlagsSet_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Outpost_C::UpdateDLCLockIcon(const struct FDLCPackageDataRowHandle& DLCRequired, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_CastToOutpostsRowHandle_Paths, const struct FOutpostsRowHandle& CallFunc_CastToOutpostsRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FOutpost& CallFunc_GetOutpostsStruct_Outposts, enum class EValid CallFunc_GetOutpostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDLCPackageDataRowHandle& CallFunc_ToDLCPackageDataRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AreAllFlagsSet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "UpdateDLCLockIcon");

	Params::UUMG_Talent_Outpost_C_UpdateDLCLockIcon_Params Parms{};

	Parms.DLCRequired = DLCRequired;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CastToOutpostsRowHandle_Paths = CallFunc_CastToOutpostsRowHandle_Paths;
	Parms.CallFunc_CastToOutpostsRowHandle_ReturnValue = CallFunc_CastToOutpostsRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOutpostsStruct_Outposts = CallFunc_GetOutpostsStruct_Outposts;
	Parms.CallFunc_GetOutpostsStruct_Paths = CallFunc_GetOutpostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ToDLCPackageDataRowHandle_ReturnValue = CallFunc_ToDLCPackageDataRowHandle_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AreAllFlagsSet_ReturnValue = CallFunc_AreAllFlagsSet_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.RefreshSearchHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::RefreshSearchHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "RefreshSearchHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.GetStringForFilterSearch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUMG_Talent_Outpost_C::GetStringForFilterSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "GetStringForFilterSearch");

	Params::UUMG_Talent_Outpost_C_GetStringForFilterSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.UpdateLockedCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOutpostsRowHandle          CallFunc_MakeOutposts_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// struct FOutpost                    CallFunc_GetOutpostsStruct_Outposts                              (None)
// enum class EValid                  CallFunc_GetOutpostsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTalentRank_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Outpost_C::UpdateLockedCondition(class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput, class UTalentModelInterface* CallFunc_GetModel_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FOutpostsRowHandle& CallFunc_MakeOutposts_ReturnValue, const struct FOutpost& CallFunc_GetOutpostsStruct_Outposts, enum class EValid CallFunc_GetOutpostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_GetTalentRank_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "UpdateLockedCondition");

	Params::UUMG_Talent_Outpost_C_UpdateLockedCondition_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetModel_self_CastInput = CallFunc_GetModel_self_CastInput;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeOutposts_ReturnValue = CallFunc_MakeOutposts_ReturnValue;
	Parms.CallFunc_GetOutpostsStruct_Outposts = CallFunc_GetOutpostsStruct_Outposts;
	Parms.CallFunc_GetOutpostsStruct_Paths = CallFunc_GetOutpostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetTalentRank_ReturnValue = CallFunc_GetTalentRank_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.SetTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)

void UUMG_Talent_Outpost_C::SetTime(TArray<class FString>& Time, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "SetTime");

	Params::UUMG_Talent_Outpost_C_SetTime_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.Refresh Hover State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentView                 TalentView                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETalentState            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           CallFunc_GetButtonState_State                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentHoverConfig          K2Node_Select_Default                                            (None)
// enum class E_ButtonState           CallFunc_GetButtonState_State_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Outpost_C::Refresh_Hover_State(struct FTalentView& TalentView, enum class ETalentState Temp_byte_Variable, enum class E_ButtonState CallFunc_GetButtonState_State, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, const struct FTalentHoverConfig& K2Node_Select_Default, enum class E_ButtonState CallFunc_GetButtonState_State_1, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "Refresh Hover State");

	Params::UUMG_Talent_Outpost_C_Refresh_Hover_State_Params Parms{};

	Parms.TalentView = TalentView;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetButtonState_State = CallFunc_GetButtonState_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetButtonState_State_1 = CallFunc_GetButtonState_State_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Outpost_C::GetOverlay(class UOverlay** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "GetOverlay");

	Params::UUMG_Talent_Outpost_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentModelData            NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Talent_Outpost_C::OnStateChanged(const struct FTalentModelData& NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "OnStateChanged");

	Params::UUMG_Talent_Outpost_C_OnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.OnTalentSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::OnTalentSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "OnTalentSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.Set Hover States
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Talent_Outpost_C::Set_Hover_States(const struct FSlateColor& TextColor, const struct FSlateColor& IconColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "Set Hover States");

	Params::UUMG_Talent_Outpost_C_Set_Hover_States_Params Parms{};

	Parms.TextColor = TextColor;
	Parms.IconColor = IconColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.Refresh Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::Refresh_Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "Refresh Display");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.SetSearchHighlight
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Outpost_C::SetSearchHighlight(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "SetSearchHighlight");

	Params::UUMG_Talent_Outpost_C_SetSearchHighlight_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.ExecuteUbergraph_UMG_Talent_Outpost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentModelData            K2Node_Event_NewState                                            (NoDestructor)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Outpost_C*   K2Node_DynamicCast_AsUMG_Talent_View_Outpost                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOutpostsRowHandle          CallFunc_MakeOutposts_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// struct FOutpost                    CallFunc_GetOutpostsStruct_Outposts                              (None)
// enum class EValid                  CallFunc_GetOutpostsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_CustomEvent_TextColor                                     (None)
// struct FSlateColor                 K2Node_CustomEvent_IconColor                                     (None)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GenerateSearchStringForProspectTalent_ReturnValue       (ZeroConstructor, HasGetValueTypeHash)

void UUMG_Talent_Outpost_C::ExecuteUbergraph_UMG_Talent_Outpost(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, const struct FTalentModelData& K2Node_Event_NewState, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool K2Node_SwitchEnum_CmpSuccess, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, class UUMG_TalentView_Outpost_C* K2Node_DynamicCast_AsUMG_Talent_View_Outpost, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FOutpostsRowHandle& CallFunc_MakeOutposts_ReturnValue, const struct FOutpost& CallFunc_GetOutpostsStruct_Outposts, enum class EValid CallFunc_GetOutpostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FSlateColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_CustomEvent_IconColor, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool K2Node_Event_bHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, const class FString& CallFunc_GenerateSearchStringForProspectTalent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "ExecuteUbergraph_UMG_Talent_Outpost");

	Params::UUMG_Talent_Outpost_C_ExecuteUbergraph_UMG_Talent_Outpost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Outpost = K2Node_DynamicCast_AsUMG_Talent_View_Outpost;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeOutposts_ReturnValue = CallFunc_MakeOutposts_ReturnValue;
	Parms.CallFunc_GetOutpostsStruct_Outposts = CallFunc_GetOutpostsStruct_Outposts;
	Parms.CallFunc_GetOutpostsStruct_Paths = CallFunc_GetOutpostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_CustomEvent_TextColor = K2Node_CustomEvent_TextColor;
	Parms.K2Node_CustomEvent_IconColor = K2Node_CustomEvent_IconColor;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GenerateSearchStringForProspectTalent_ReturnValue = CallFunc_GenerateSearchStringForProspectTalent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Outpost.UMG_Talent_Outpost_C.ProspectMissionClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Outpost_C::ProspectMissionClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Outpost_C", "ProspectMissionClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


