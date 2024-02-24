#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleNotifyWidget.TitleNotifyWidget_C
// (None)

class UClass* UTitleNotifyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleNotifyWidget_C");

	return Clss;
}


// TitleNotifyWidget_C TitleNotifyWidget.Default__TitleNotifyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleNotifyWidget_C* UTitleNotifyWidget_C::GetDefaultObj()
{
	static class UTitleNotifyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleNotifyWidget_C*>(UTitleNotifyWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleNotifyWidget.TitleNotifyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleNotifyWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleNotifyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "Tick");

	Params::UTitleNotifyWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnLevelAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleNotifyWidget_C::OnLevelAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnLevelAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnLocationReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LocationName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleNotifyWidget_C::OnLocationReached(class FText LocationName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnLocationReached");

	Params::UTitleNotifyWidget_C_OnLocationReached_Params Parms{};

	Parms.LocationName = LocationName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnQuestAdded_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestView                  QuestView                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTitleNotifyWidget_C::OnQuestAdded_Event(struct FQuestView& QuestView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnQuestAdded_Event");

	Params::UTitleNotifyWidget_C_OnQuestAdded_Event_Params Parms{};

	Parms.QuestView = QuestView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnQuestComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestView                  QuestView                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTitleNotifyWidget_C::OnQuestComplete(struct FQuestView& QuestView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnQuestComplete");

	Params::UTitleNotifyWidget_C_OnQuestComplete_Params Parms{};

	Parms.QuestView = QuestView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnReputationRankUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReputationLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleNotifyWidget_C::OnReputationRankUp(class UClass* NPC, int32 ReputationLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnReputationRankUp");

	Params::UTitleNotifyWidget_C_OnReputationRankUp_Params Parms{};

	Parms.NPC = NPC;
	Parms.ReputationLevel = ReputationLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.OnNeutralReputationRankUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NeutralsLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleNotifyWidget_C::OnNeutralReputationRankUp(int32 NeutralsLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "OnNeutralReputationRankUp");

	Params::UTitleNotifyWidget_C_OnNeutralReputationRankUp_Params Parms{};

	Parms.NeutralsLevel = NeutralsLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.StartQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleNotifyWidget_C::StartQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "StartQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.UpdateQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleNotifyWidget_C::UpdateQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "UpdateQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleNotifyWidget.TitleNotifyWidget_C.ExecuteUbergraph_TitleNotifyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EQuestCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// enum class EQuestCategory          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue                             (HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHMapManager*               CallFunc_GetMapManager_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_LocationName                                  (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestView                  K2Node_CustomEvent_QuestView_1                                   (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue_1                           (HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestView                  K2Node_CustomEvent_QuestView                                     (ConstParm)
// class UClass*                      K2Node_CustomEvent_NPC                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ReputationLevel                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUINpcColor_ID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue_2                           (HasGetValueTypeHash)
// float                              CallFunc_GetExperienceFromDatatable_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue_3                           (HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NeutralsLevel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue_4                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetExperienceFromDatatable_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         K2Node_MakeStruct_UITitleNotifyQueue_5                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUITitleNotifyQueue         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleNotifyWidget_C::ExecuteUbergraph_TitleNotifyWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQuestCategory Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EQuestCategory Temp_byte_Variable_1, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_CustomEvent_LocationName, bool CallFunc_TextIsEmpty_ReturnValue, const struct FQuestView& K2Node_CustomEvent_QuestView_1, bool CallFunc_IsValid_ReturnValue_1, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_1, bool K2Node_Select_Default, const struct FQuestView& K2Node_CustomEvent_QuestView, class UClass* K2Node_CustomEvent_NPC, int32 K2Node_CustomEvent_ReputationLevel, int32 CallFunc_GetUINpcColor_ID, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_2, float CallFunc_GetExperienceFromDatatable_ReturnValue, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_3, bool K2Node_Select_Default_1, int32 K2Node_CustomEvent_NeutralsLevel, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, float CallFunc_GetExperienceFromDatatable_ReturnValue_1, const struct FUITitleNotifyQueue& K2Node_MakeStruct_UITitleNotifyQueue_5, int32 CallFunc_Array_Add_ReturnValue_3, const struct FUITitleNotifyQueue& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FCeil_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleNotifyWidget_C", "ExecuteUbergraph_TitleNotifyWidget");

	Params::UTitleNotifyWidget_C_ExecuteUbergraph_TitleNotifyWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue = K2Node_MakeStruct_UITitleNotifyQueue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMapManager_ReturnValue = CallFunc_GetMapManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_LocationName = K2Node_CustomEvent_LocationName;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_QuestView_1 = K2Node_CustomEvent_QuestView_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue_1 = K2Node_MakeStruct_UITitleNotifyQueue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_QuestView = K2Node_CustomEvent_QuestView;
	Parms.K2Node_CustomEvent_NPC = K2Node_CustomEvent_NPC;
	Parms.K2Node_CustomEvent_ReputationLevel = K2Node_CustomEvent_ReputationLevel;
	Parms.CallFunc_GetUINpcColor_ID = CallFunc_GetUINpcColor_ID;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue_2 = K2Node_MakeStruct_UITitleNotifyQueue_2;
	Parms.CallFunc_GetExperienceFromDatatable_ReturnValue = CallFunc_GetExperienceFromDatatable_ReturnValue;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue_3 = K2Node_MakeStruct_UITitleNotifyQueue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_NeutralsLevel = K2Node_CustomEvent_NeutralsLevel;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue_4 = K2Node_MakeStruct_UITitleNotifyQueue_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetExperienceFromDatatable_ReturnValue_1 = CallFunc_GetExperienceFromDatatable_ReturnValue_1;
	Parms.K2Node_MakeStruct_UITitleNotifyQueue_5 = K2Node_MakeStruct_UITitleNotifyQueue_5;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


