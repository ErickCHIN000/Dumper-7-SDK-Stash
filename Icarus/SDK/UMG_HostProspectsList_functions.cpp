#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_HostProspectsList.UMG_HostProspectsList_C
// (None)

class UClass* UUMG_HostProspectsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_HostProspectsList_C");

	return Clss;
}


// UMG_HostProspectsList_C UMG_HostProspectsList.Default__UMG_HostProspectsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_HostProspectsList_C* UUMG_HostProspectsList_C::GetDefaultObj()
{
	static class UUMG_HostProspectsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_HostProspectsList_C*>(UUMG_HostProspectsList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.OnFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "OnFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.Get_ServerCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUMG_HostProspectsList_C::Get_ServerCountText(int32 CallFunc_GetNumItems_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "Get_ServerCountText");

	Params::UUMG_HostProspectsList_C_Get_ServerCountText_Params Parms{};

	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.ClearDirectConnect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::ClearDirectConnect(bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "ClearDirectConnect");

	Params::UUMG_HostProspectsList_C_ClearDirectConnect_Params Parms{};

	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.UpdateQueryFilters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSessionsSearchSetting>Filters                                                          (Edit, BlueprintVisible)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue            (None)
// struct FSessionsSearchSetting      CallFunc_MakeLiteralSessionSearchProperty_ReturnValue            (None)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::UpdateQueryFilters(const TArray<struct FSessionsSearchSetting>& Filters, bool CallFunc_IsEmpty_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "UpdateQueryFilters");

	Params::UUMG_HostProspectsList_C_UpdateQueryFilters_Params Parms{};

	Parms.Filters = Filters;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue = CallFunc_MakeLiteralSessionPropertyString_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionSearchProperty_ReturnValue = CallFunc_MakeLiteralSessionSearchProperty_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.ClearList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::ClearList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "ClearList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.AddInstanceToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::AddInstanceToList(class UObject* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "AddInstanceToList");

	Params::UUMG_HostProspectsList_C_AddInstanceToList_Params Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.SessionButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SessionSortButton_C*    ButtonPressed                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionSortType        OldSortType                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewType                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESessionSortType        NewSortType                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SessionSortButton_C*    Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SessionSortButton_C*    K2Node_DynamicCast_AsUMG_Session_Sort_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESessionSortType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_SessionSortButton_C*    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::SessionButtonClicked(class UUMG_ButtonBase_C* Button, class UUMG_SessionSortButton_C* ButtonPressed, enum class ESessionSortType OldSortType, bool NewType, enum class ESessionSortType NewSortType, class UUMG_SessionSortButton_C* Temp_object_Variable, class UUMG_SessionSortButton_C* K2Node_DynamicCast_AsUMG_Session_Sort_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESessionSortType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMG_SessionSortButton_C* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "SessionButtonClicked");

	Params::UUMG_HostProspectsList_C_SessionButtonClicked_Params Parms{};

	Parms.Button = Button;
	Parms.ButtonPressed = ButtonPressed;
	Parms.OldSortType = OldSortType;
	Parms.NewType = NewType;
	Parms.NewSortType = NewSortType;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsUMG_Session_Sort_Button = K2Node_DynamicCast_AsUMG_Session_Sort_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.SetLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loading                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::SetLoading(bool Loading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "SetLoading");

	Params::UUMG_HostProspectsList_C_SetLoading_Params Parms{};

	Parms.Loading = Loading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.RefreshList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dedicated                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ClaimedProspect                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESessionSearchType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionSearchType      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSessionFilters             K2Node_MakeStruct_SessionFilters                                 (None)
// struct FSessionQuery               K2Node_MakeStruct_SessionQuery                                   (None)
// enum class ESessionSearchType      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UIcarusSessionResult*>CallFunc_GetSessions_ReturnValue                                 (ReferenceParm)

void UUMG_HostProspectsList_C::RefreshList(bool Dedicated, bool ClaimedProspect, bool Temp_bool_Variable, enum class ESessionSearchType Temp_byte_Variable, enum class ESessionSearchType Temp_byte_Variable_1, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSessionFilters& K2Node_MakeStruct_SessionFilters, const struct FSessionQuery& K2Node_MakeStruct_SessionQuery, enum class ESessionSearchType K2Node_Select_Default, TArray<class UIcarusSessionResult*>& CallFunc_GetSessions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "RefreshList");

	Params::UUMG_HostProspectsList_C_RefreshList_Params Parms{};

	Parms.Dedicated = Dedicated;
	Parms.ClaimedProspect = ClaimedProspect;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_SessionFilters = K2Node_MakeStruct_SessionFilters;
	Parms.K2Node_MakeStruct_SessionQuery = K2Node_MakeStruct_SessionQuery;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSessions_ReturnValue = CallFunc_GetSessions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.SortButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::SortButton(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "SortButton");

	Params::UUMG_HostProspectsList_C_SortButton_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.FilterCheked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESessionFilterState     Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasForced                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::FilterCheked(enum class ESessionFilterState Checked, bool WasForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "FilterCheked");

	Params::UUMG_HostProspectsList_C_FilterCheked_Params Parms{};

	Parms.Checked = Checked;
	Parms.WasForced = WasForced;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_HostProspectsList_C::BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUMG_HostProspectsList_C_BndEvt__UMG_HostProspectsList_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              PreviousToggleIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentToggleIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature");

	Params::UUMG_HostProspectsList_C_BndEvt__UMG_HostProspectsList_UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature_Params Parms{};

	Parms.PreviousToggleIndex = PreviousToggleIndex;
	Parms.CurrentToggleIndex = CurrentToggleIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.OnFindInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusSessionResult*        Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::OnFindInstance(class UIcarusSessionResult* Session)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "OnFindInstance");

	Params::UUMG_HostProspectsList_C_OnFindInstance_Params Parms{};

	Parms.Session = Session;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_HostProspectsList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "Tick");

	Params::UUMG_HostProspectsList_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.OnSessionsCleared
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::OnSessionsCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "OnSessionsCleared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.ConfirmDirectConnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::ConfirmDirectConnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "ConfirmDirectConnect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.CancelDirectConnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::CancelDirectConnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "CancelDirectConnect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.ProspectSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::ProspectSelected(const struct FFProspectServerInfo& ProspectInfo, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "ProspectSelected");

	Params::UUMG_HostProspectsList_C_ProspectSelected_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.OnSessionsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_HostProspectsList_C::OnSessionsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "OnSessionsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.ExecuteUbergraph_UMG_HostProspectsList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESteamSearchType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESteamSearchType        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESteamSearchType        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESteamSearchType        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UUMG_DirectConnectInput_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsFindDedicatedSessionsRunning_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFindFriendSessionsRunning_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESessionSearchType      CallFunc_GetCurrentSearchType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionSearchType      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionFilterState     K2Node_CustomEvent_Checked                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasForced                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// int32                              K2Node_ComponentBoundEvent_PreviousToggleIndex                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_CurrentToggleIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESteamSearchType        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusSessionResult*        K2Node_CustomEvent_Session                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESteamSearchType        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetConnectString_Pasword                                (ZeroConstructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFProspectServerInfo        K2Node_CustomEvent_ProspectInfo                                  (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UUMG_HostProspectsList_C::ExecuteUbergraph_UMG_HostProspectsList(int32 EntryPoint, enum class ESteamSearchType Temp_byte_Variable, enum class ESteamSearchType Temp_byte_Variable_1, enum class ESteamSearchType Temp_byte_Variable_2, enum class ESteamSearchType Temp_byte_Variable_3, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMG_DirectConnectInput_C* CallFunc_Create_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsFindDedicatedSessionsRunning_ReturnValue, bool CallFunc_IsFindFriendSessionsRunning_ReturnValue, enum class ESessionSearchType CallFunc_GetCurrentSearchType_ReturnValue, enum class ESessionSearchType Temp_byte_Variable_4, bool K2Node_Select_Default, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, enum class ESessionFilterState K2Node_CustomEvent_Checked, bool K2Node_CustomEvent_WasForced, class FText K2Node_ComponentBoundEvent_Text, int32 K2Node_ComponentBoundEvent_PreviousToggleIndex, int32 K2Node_ComponentBoundEvent_CurrentToggleIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESteamSearchType Temp_byte_Variable_5, class UIcarusSessionResult* K2Node_CustomEvent_Session, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Variable, enum class ESteamSearchType K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const class FString& CallFunc_GetConnectString_Pasword, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsEmpty_ReturnValue, const struct FFProspectServerInfo& K2Node_CustomEvent_ProspectInfo, bool K2Node_CustomEvent_Active, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "ExecuteUbergraph_UMG_HostProspectsList");

	Params::UUMG_HostProspectsList_C_ExecuteUbergraph_UMG_HostProspectsList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsFindDedicatedSessionsRunning_ReturnValue = CallFunc_IsFindDedicatedSessionsRunning_ReturnValue;
	Parms.CallFunc_IsFindFriendSessionsRunning_ReturnValue = CallFunc_IsFindFriendSessionsRunning_ReturnValue;
	Parms.CallFunc_GetCurrentSearchType_ReturnValue = CallFunc_GetCurrentSearchType_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Checked = K2Node_CustomEvent_Checked;
	Parms.K2Node_CustomEvent_WasForced = K2Node_CustomEvent_WasForced;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_PreviousToggleIndex = K2Node_ComponentBoundEvent_PreviousToggleIndex;
	Parms.K2Node_ComponentBoundEvent_CurrentToggleIndex = K2Node_ComponentBoundEvent_CurrentToggleIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetConnectString_Pasword = CallFunc_GetConnectString_Pasword;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_ProspectInfo = K2Node_CustomEvent_ProspectInfo;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_HostProspectsList.UMG_HostProspectsList_C.SelectProspect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_HostProspectsList_C::SelectProspect__DelegateSignature(const struct FFProspectServerInfo& ProspectInfo, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_HostProspectsList_C", "SelectProspect__DelegateSignature");

	Params::UUMG_HostProspectsList_C_SelectProspect__DelegateSignature_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}

}


