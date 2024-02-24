#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerReadiness.WBP_PlayerReadiness_C
// (None)

class UClass* UWBP_PlayerReadiness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerReadiness_C");

	return Clss;
}


// WBP_PlayerReadiness_C WBP_PlayerReadiness.Default__WBP_PlayerReadiness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerReadiness_C* UWBP_PlayerReadiness_C::GetDefaultObj()
{
	static class UWBP_PlayerReadiness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerReadiness_C*>(UWBP_PlayerReadiness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerReadiness_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PlayerReadiness_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.SetRandomSketchOnGuidebook
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBiomeID                Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          LBiomeSketchTextures                                             (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          LSwampBiomeSketchTextures                                        (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          LDesertBiomeSketchTextures                                       (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          LForestBiomeSketchTextures                                       (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::SetRandomSketchOnGuidebook(enum class EBiomeID Biome, const TArray<class UTexture2D*>& LBiomeSketchTextures, const TArray<class UTexture2D*>& LSwampBiomeSketchTextures, const TArray<class UTexture2D*>& LDesertBiomeSketchTextures, const TArray<class UTexture2D*>& LForestBiomeSketchTextures, TArray<class UTexture2D*>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, TArray<class UTexture2D*>& K2Node_MakeArray_Array_1, TArray<class UTexture2D*>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "SetRandomSketchOnGuidebook");

	Params::UWBP_PlayerReadiness_C_SetRandomSketchOnGuidebook_Params Parms{};

	Parms.Biome = Biome;
	Parms.LBiomeSketchTextures = LBiomeSketchTextures;
	Parms.LSwampBiomeSketchTextures = LSwampBiomeSketchTextures;
	Parms.LDesertBiomeSketchTextures = LDesertBiomeSketchTextures;
	Parms.LForestBiomeSketchTextures = LForestBiomeSketchTextures;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.CheckIfInNightmareRealm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmTags_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetCurrentRealmTags_RealmTags                           (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::CheckIfInNightmareRealm(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "CheckIfInNightmareRealm");

	Params::UWBP_PlayerReadiness_C_CheckIfInNightmareRealm_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentRealmTags_Success = CallFunc_GetCurrentRealmTags_Success;
	Parms.CallFunc_GetCurrentRealmTags_RealmTags = CallFunc_GetCurrentRealmTags_RealmTags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.OnExperienceStatesReadyHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReadiness_C::OnExperienceStatesReadyHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "OnExperienceStatesReadyHandler");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.BindToPESReadiness
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExperienceStateTrackerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IExperienceStateEventInterface>CallFunc_BindEventTo_ExperienceStatesReady_self_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::BindToPESReadiness(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UExperienceStateTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IExperienceStateEventInterface> CallFunc_BindEventTo_ExperienceStatesReady_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "BindToPESReadiness");

	Params::UWBP_PlayerReadiness_C_BindToPESReadiness_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BindEventTo_ExperienceStatesReady_self_CastInput = CallFunc_BindEventTo_ExperienceStatesReady_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerReadiness_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "GetDefaultFocusWidget");

	Params::UWBP_PlayerReadiness_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.SetupMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name         (None)
// bool                               CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UI_MapTable              CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details          (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::SetupMap(class FText CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name, bool CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details, const struct FS_UI_MapTable& CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "SetupMap");

	Params::UWBP_PlayerReadiness_C_SetupMap_Params Parms{};

	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name = CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name;
	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details = CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details;
	Parms.CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details = CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.OnEnterLevelCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       L_AppendingContainer                                             (Edit, BlueprintVisible)
// class UBP_RealmHistory_Persistence_C*CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmHistoryComponent_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmTags_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetCurrentRealmTags_RealmTags                           (None)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentInfluenceLevels_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmInfluenceValues       CallFunc_GetCurrentInfluenceLevels_Influence_Levels              (NoDestructor)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoK2Node_MakeStruct_S_Persisted_RealmVisitedInfo                   (HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::OnEnterLevelCheck(const struct FGameplayTagContainer& L_AppendingContainer, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_GetCurrentInfluenceLevels_Success, const struct FRealmInfluenceValues& CallFunc_GetCurrentInfluenceLevels_Influence_Levels, int32 CallFunc_GetCurrentRealmPower_RealmPower, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "OnEnterLevelCheck");

	Params::UWBP_PlayerReadiness_C_OnEnterLevelCheck_Params Parms{};

	Parms.L_AppendingContainer = L_AppendingContainer;
	Parms.CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component = CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component;
	Parms.CallFunc_GetRealmHistoryComponent_Success = CallFunc_GetRealmHistoryComponent_Success;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetCurrentRealmTags_Success = CallFunc_GetCurrentRealmTags_Success;
	Parms.CallFunc_GetCurrentRealmTags_RealmTags = CallFunc_GetCurrentRealmTags_RealmTags;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController_1 = CallFunc_GetLocalPlayerController_LocalPlayerController_1;
	Parms.CallFunc_GetCurrentInfluenceLevels_Success = CallFunc_GetCurrentInfluenceLevels_Success;
	Parms.CallFunc_GetCurrentInfluenceLevels_Influence_Levels = CallFunc_GetCurrentInfluenceLevels_Influence_Levels;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;
	Parms.K2Node_MakeStruct_S_Persisted_RealmVisitedInfo = K2Node_MakeStruct_S_Persisted_RealmVisitedInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_PlayerReadiness_C::OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "OnInputCancel");

	Params::UWBP_PlayerReadiness_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.ResetCursorToCenter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetAlignmentInViewport_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::ResetCursorToCenter(double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector2D& CallFunc_GetAlignmentInViewport_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "ResetCursorToCenter");

	Params::UWBP_PlayerReadiness_C_ResetCursorToCenter_Params Parms{};

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetAlignmentInViewport_ReturnValue = CallFunc_GetAlignmentInViewport_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerReadiness_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerReadiness_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "Tick");

	Params::UWBP_PlayerReadiness_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.OnPlayerSpawnTimedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReadiness_C::OnPlayerSpawnTimedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "OnPlayerSpawnTimedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerReadiness_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.BndEvt__WBP_PlayerReadiness_CBU_Ready_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::BndEvt__WBP_PlayerReadiness_CBU_Ready_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "BndEvt__WBP_PlayerReadiness_CBU_Ready_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PlayerReadiness_C_BndEvt__WBP_PlayerReadiness_CBU_Ready_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReadiness.WBP_PlayerReadiness_C.ExecuteUbergraph_WBP_PlayerReadiness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmInfo_CurrentRealm_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoCallFunc_GetRealmInfo_CurrentRealm_RealmInfo                     (HasGetValueTypeHash)
// class FText                        CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name             (None)
// class FText                        CallFunc_UI_Get_NWXRealmName_FromTags_Description                (None)
// bool                               CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmInfo_CurrentRealm_Success_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoCallFunc_GetRealmInfo_CurrentRealm_RealmInfo_1                   (HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              K2Node_MakeStruct_RealmSettings                                  (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReadiness_C::ExecuteUbergraph_WBP_PlayerReadiness(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetRealmInfo_CurrentRealm_Success, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Description, bool CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetRealmInfo_CurrentRealm_Success_1, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FRealmSettings& K2Node_MakeStruct_RealmSettings, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReadiness_C", "ExecuteUbergraph_WBP_PlayerReadiness");

	Params::UWBP_PlayerReadiness_C_ExecuteUbergraph_WBP_PlayerReadiness_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_Success = CallFunc_GetRealmInfo_CurrentRealm_Success;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_RealmInfo = CallFunc_GetRealmInfo_CurrentRealm_RealmInfo;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name = CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Description = CallFunc_UI_Get_NWXRealmName_FromTags_Description;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details = CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_Success_1 = CallFunc_GetRealmInfo_CurrentRealm_Success_1;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_RealmInfo_1 = CallFunc_GetRealmInfo_CurrentRealm_RealmInfo_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_RealmSettings = K2Node_MakeStruct_RealmSettings;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


