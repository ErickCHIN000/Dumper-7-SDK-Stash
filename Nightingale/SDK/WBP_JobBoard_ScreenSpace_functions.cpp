#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C
// (None)

class UClass* UWBP_JobBoard_ScreenSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_JobBoard_ScreenSpace_C");

	return Clss;
}


// WBP_JobBoard_ScreenSpace_C WBP_JobBoard_ScreenSpace.Default__WBP_JobBoard_ScreenSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_JobBoard_ScreenSpace_C* UWBP_JobBoard_ScreenSpace_C::GetDefaultObj()
{
	static class UWBP_JobBoard_ScreenSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_JobBoard_ScreenSpace_C*>(UWBP_JobBoard_ScreenSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::SetFaction(bool Temp_bool_Variable, enum class EFaction Temp_byte_Variable, enum class EFaction Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EFaction Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EFaction Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class EFaction Temp_byte_Variable_4, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool Temp_bool_Variable_4, enum class EFaction Temp_byte_Variable_5, const struct FGameplayTag& Temp_struct_Variable_4, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, enum class EFaction K2Node_Select_Default, enum class EFaction K2Node_Select_Default_1, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_3, enum class EFaction K2Node_Select_Default_2, enum class EFaction K2Node_Select_Default_3, bool CallFunc_ActorHasTag_ReturnValue_4, enum class EFaction K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "SetFaction");

	Params::UWBP_JobBoard_ScreenSpace_C_SetFaction_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_4 = CallFunc_ActorHasTag_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.WIP_RefreshFactionEmptyListType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::WIP_RefreshFactionEmptyListType(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFaction Temp_byte_Variable_2, uint8 CallFunc_GetValidValue_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "WIP_RefreshFactionEmptyListType");

	Params::UWBP_JobBoard_ScreenSpace_C_WIP_RefreshFactionEmptyListType_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.HandleExitOnQuestTracker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestGiverInterface>K2Node_DynamicCast_AsQuest_Giver_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetQuestGiverTag_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::HandleExitOnQuestTracker(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "HandleExitOnQuestTracker");

	Params::UWBP_JobBoard_ScreenSpace_C_HandleExitOnQuestTracker_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue = CallFunc_GetComponentsByInterface_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQuest_Giver_Interface = K2Node_DynamicCast_AsQuest_Giver_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_GetQuestGiverTag_ReturnValue = CallFunc_GetQuestGiverTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.RemoveBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "RemoveBindings");

	Params::UWBP_JobBoard_ScreenSpace_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.SetupBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestGiverInterface>K2Node_DynamicCast_AsQuest_Giver_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetQuestGiverTag_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AQuestGiverSession*          CallFunc_GetQuestGiverSession_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::SetupBindings(const struct FGameplayTag& Temp_struct_Variable, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "SetupBindings");

	Params::UWBP_JobBoard_ScreenSpace_C_SetupBindings_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue = CallFunc_GetComponentsByInterface_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsQuest_Giver_Interface = K2Node_DynamicCast_AsQuest_Giver_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetQuestGiverTag_ReturnValue = CallFunc_GetQuestGiverTag_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetQuestGiverSession_ReturnValue = CallFunc_GetQuestGiverSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.HandleIfListIsEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicText_OneLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::HandleIfListIsEmpty(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 K2Node_Select_Default, class FText Temp_text_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "HandleIfListIsEmpty");

	Params::UWBP_JobBoard_ScreenSpace_C_HandleIfListIsEmpty_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.RefreshBoardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsQuestGiverFactionExchange_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::RefreshBoardStyle(bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "RefreshBoardStyle");

	Params::UWBP_JobBoard_ScreenSpace_C_RefreshBoardStyle_Params Parms{};

	Parms.CallFunc_IsQuestGiverFactionExchange_ReturnValue = CallFunc_IsQuestGiverFactionExchange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_JobBoard_ScreenSpace_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "GetDefaultFocusWidget");

	Params::UWBP_JobBoard_ScreenSpace_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.QuestConfirmed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_ScreenSpace_C::QuestConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "QuestConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.FocusDefaultWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_JobBoard_ScreenSpace_C::FocusDefaultWidget(const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "FocusDefaultWidget");

	Params::UWBP_JobBoard_ScreenSpace_C_FocusDefaultWidget_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue_2 = CallFunc_GetChildAt_ReturnValue_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue_2 = CallFunc_HasAnyChildren_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.SetGridPanelQuestEntriesToUnselected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                GridPanelWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              IndexToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CurrentChildWidget                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::SetGridPanelQuestEntriesToUnselected(class UPanelWidget* GridPanelWidget, int32 IndexToIgnore, class UWidget* CurrentChildWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_JobBoard_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "SetGridPanelQuestEntriesToUnselected");

	Params::UWBP_JobBoard_ScreenSpace_C_SetGridPanelQuestEntriesToUnselected_Params Parms{};

	Parms.GridPanelWidget = GridPanelWidget;
	Parms.IndexToIgnore = IndexToIgnore;
	Parms.CurrentChildWidget = CurrentChildWidget;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry = K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.ResetQuestBoard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXWindowWidget*            Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::ResetQuestBoard(class UNWXWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "ResetQuestBoard");

	Params::UWBP_JobBoard_ScreenSpace_C_ResetQuestBoard_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.Cleanup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_ScreenSpace_C::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "Cleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.OnTaskHandedIn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::OnTaskHandedIn(struct FOngoingTaskProgress& TaskProgress, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "OnTaskHandedIn");

	Params::UWBP_JobBoard_ScreenSpace_C_OnTaskHandedIn_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.OnQuestAccepted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "OnQuestAccepted");

	Params::UWBP_JobBoard_ScreenSpace_C_OnQuestAccepted_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.SetupQuestContractBoard
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestGiverSession*          CallFunc_GetQuestGiverSession_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::SetupQuestContractBoard(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "SetupQuestContractBoard");

	Params::UWBP_JobBoard_ScreenSpace_C_SetupQuestContractBoard_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestGiverSession_ReturnValue = CallFunc_GetQuestGiverSession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.QuestHovered
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::QuestHovered(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "QuestHovered");

	Params::UWBP_JobBoard_ScreenSpace_C_QuestHovered_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.QuestSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Grid_Index                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::QuestSelected(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, int32 Grid_Index, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "QuestSelected");

	Params::UWBP_JobBoard_ScreenSpace_C_QuestSelected_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.State = State;
	Parms.Grid_Index = Grid_Index;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.PopulateTasksToComplete
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_JobBoard_QuestGrid_Entry_C*JobBoardQuestEntry                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              TaskToCompleteIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         QuestRowHandle                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        TaskToComplete                                                   (Edit, BlueprintVisible)
// class UWBP_JobBoard_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOngoingTaskProgress>CallFunc_GetTasksToComplete_ReturnValue                          (ConstParm, ReferenceParm)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::PopulateTasksToComplete(class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 TaskToCompleteIndex, const struct FDataTableRowHandle& QuestRowHandle, const struct FOngoingTaskProgress& TaskToComplete, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FOngoingTaskProgress>& CallFunc_GetTasksToComplete_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "PopulateTasksToComplete");

	Params::UWBP_JobBoard_ScreenSpace_C_PopulateTasksToComplete_Params Parms{};

	Parms.JobBoardQuestEntry = JobBoardQuestEntry;
	Parms.TaskToCompleteIndex = TaskToCompleteIndex;
	Parms.QuestRowHandle = QuestRowHandle;
	Parms.TaskToComplete = TaskToComplete;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTasksToComplete_ReturnValue = CallFunc_GetTasksToComplete_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.PopulateQuestsToAccept
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GridWidth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*JobBoardQuestEntry                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              QuestIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_JobBoard_QuestGrid_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestAssetReference>CallFunc_GetAvailableQuests_ReturnValue                          (ConstParm, ReferenceParm)
// struct FQuestAssetReference        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue(None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::PopulateQuestsToAccept(int32 GridWidth, class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 QuestIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FQuestAssetReference>& CallFunc_GetAvailableQuests_ReturnValue, const struct FQuestAssetReference& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FOngoingTaskProgress& CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "PopulateQuestsToAccept");

	Params::UWBP_JobBoard_ScreenSpace_C_PopulateQuestsToAccept_Params Parms{};

	Parms.GridWidth = GridWidth;
	Parms.JobBoardQuestEntry = JobBoardQuestEntry;
	Parms.QuestIndex = QuestIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAvailableQuests_ReturnValue = CallFunc_GetAvailableQuests_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue = CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.RefreshList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 CallFunc_FocusDefaultWidget_ReturnValue                          (None)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestGiverComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::RefreshList(const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "RefreshList");

	Params::UWBP_JobBoard_ScreenSpace_C_RefreshList_Params Parms{};

	Parms.CallFunc_FocusDefaultWidget_ReturnValue = CallFunc_FocusDefaultWidget_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Information                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_JobBoard_ScreenSpace_C::CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallCreatureKilled");

	Params::UWBP_JobBoard_ScreenSpace_C_CallCreatureKilled_Params Parms{};

	Parms.Creature_Information = Creature_Information;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallGiveTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallGiveTag(const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallGiveTag");

	Params::UWBP_JobBoard_ScreenSpace_C_CallGiveTag_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallStructureBlueprintPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallStructureBlueprintPlaced");

	Params::UWBP_JobBoard_ScreenSpace_C_CallStructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallResourceHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallResourceHarvested");

	Params::UWBP_JobBoard_ScreenSpace_C_CallResourceHarvested_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallStructureCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallStructureCompleted");

	Params::UWBP_JobBoard_ScreenSpace_C_CallStructureCompleted_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallItemDeposited_InWorldContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallItemDeposited_InWorldContainer");

	Params::UWBP_JobBoard_ScreenSpace_C_CallItemDeposited_InWorldContainer_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallWeakpointHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UWBP_JobBoard_ScreenSpace_C::CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallWeakpointHit");

	Params::UWBP_JobBoard_ScreenSpace_C_CallWeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallOnSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>SpellCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallOnSpellCast");

	Params::UWBP_JobBoard_ScreenSpace_C_CallOnSpellCast_Params Parms{};

	Parms.SpellCast = SpellCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallOnGlyphRevealed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_ScreenSpace_C::CallOnGlyphRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallOnGlyphRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallFishCaught
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_JobBoard_ScreenSpace_C::CallFishCaught(struct FFish& CaughtFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallFishCaught");

	Params::UWBP_JobBoard_ScreenSpace_C_CallFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.CallOnInteractedWithPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::CallOnInteractedWithPlayer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "CallOnInteractedWithPlayer");

	Params::UWBP_JobBoard_ScreenSpace_C_CallOnInteractedWithPlayer_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_ScreenSpace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JobBoard_ScreenSpace_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    Contract_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature");

	Params::UWBP_JobBoard_ScreenSpace_C_BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;
	Parms.Contract_State = Contract_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JobBoard_ScreenSpace.WBP_JobBoard_ScreenSpace_C.ExecuteUbergraph_WBP_JobBoard_ScreenSpace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Creature_Information                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_CreatureTagContainer                                (None)
// struct FGameplayTagContainer       K2Node_Event_KillerTagContainer                                  (None)
// struct FGameplayTag                K2Node_Event_Gameplay_Tag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_StructureDataHandle                                 (NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Event_ItemEntry                                           (None)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Owning_Actor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Piece_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemRowHandle                                       (HasGetValueTypeHash)
// int32                              K2Node_Event_Quantity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ContainerTag                                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_WeakpointType                                       (None)
// struct FGameplayTagContainer       K2Node_Event_CreatureTags                                        (None)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_Event_SpellCast                                           (HasGetValueTypeHash)
// struct FFish                       K2Node_Event_CaughtFish                                          (ConstParm, ContainsInstancedReference)
// class APawn*                       K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        K2Node_ComponentBoundEvent_Accepted                              (None)
// enum class E_Contract_StateType    K2Node_ComponentBoundEvent_Contract_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_JobBoard_ScreenSpace_C::ExecuteUbergraph_WBP_JobBoard_ScreenSpace(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FFish& K2Node_Event_CaughtFish, class APawn* K2Node_Event_InteractingPawn, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, const struct FOngoingTaskProgress& K2Node_ComponentBoundEvent_Accepted, enum class E_Contract_StateType K2Node_ComponentBoundEvent_Contract_State, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JobBoard_ScreenSpace_C", "ExecuteUbergraph_WBP_JobBoard_ScreenSpace");

	Params::UWBP_JobBoard_ScreenSpace_C_ExecuteUbergraph_WBP_JobBoard_ScreenSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_Event_Creature_Information = K2Node_Event_Creature_Information;
	Parms.K2Node_Event_CreatureTagContainer = K2Node_Event_CreatureTagContainer;
	Parms.K2Node_Event_KillerTagContainer = K2Node_Event_KillerTagContainer;
	Parms.K2Node_Event_Gameplay_Tag = K2Node_Event_Gameplay_Tag;
	Parms.K2Node_Event_StructureDataHandle = K2Node_Event_StructureDataHandle;
	Parms.K2Node_Event_ItemEntry = K2Node_Event_ItemEntry;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Owning_Actor = K2Node_Event_Owning_Actor;
	Parms.K2Node_Event_Piece_ID = K2Node_Event_Piece_ID;
	Parms.K2Node_Event_ItemRowHandle = K2Node_Event_ItemRowHandle;
	Parms.K2Node_Event_Quantity = K2Node_Event_Quantity;
	Parms.K2Node_Event_ContainerTag = K2Node_Event_ContainerTag;
	Parms.K2Node_Event_WeakpointType = K2Node_Event_WeakpointType;
	Parms.K2Node_Event_CreatureTags = K2Node_Event_CreatureTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_SpellCast = K2Node_Event_SpellCast;
	Parms.K2Node_Event_CaughtFish = K2Node_Event_CaughtFish;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Accepted = K2Node_ComponentBoundEvent_Accepted;
	Parms.K2Node_ComponentBoundEvent_Contract_State = K2Node_ComponentBoundEvent_Contract_State;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


