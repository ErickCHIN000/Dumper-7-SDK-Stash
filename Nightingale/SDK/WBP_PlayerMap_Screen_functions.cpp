#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C
// (None)

class UClass* UWBP_PlayerMap_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMap_Screen_C");

	return Clss;
}


// WBP_PlayerMap_Screen_C WBP_PlayerMap_Screen.Default__WBP_PlayerMap_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMap_Screen_C* UWBP_PlayerMap_Screen_C::GetDefaultObj()
{
	static class UWBP_PlayerMap_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMap_Screen_C*>(UWBP_PlayerMap_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleNewMapPinUnderCursor
// (Exec, Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleNewMapPinUnderCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleNewMapPinUnderCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.GetMarkerRelativePosition
// (Exec, Private, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWBP_PlayerMapPin_C*         MapPinWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_PlayerMap_Screen_C::GetMarkerRelativePosition(class UWBP_PlayerMapPin_C* MapPinWidget, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "GetMarkerRelativePosition");

	Params::UWBP_PlayerMap_Screen_C_GetMarkerRelativePosition_Params Parms{};

	Parms.MapPinWidget = MapPinWidget;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue = CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.SetTooltipActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetTooltipCoordText_OutputText                          (None)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FText                        CallFunc_GetTooltipBodyText_OutputText                           (None)
// class FText                        CallFunc_GetTooltipTitleText_OutputText                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::SetTooltipActive(class FText CallFunc_GetTooltipCoordText_OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_GetTooltipBodyText_OutputText, class FText CallFunc_GetTooltipTitleText_OutputText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "SetTooltipActive");

	Params::UWBP_PlayerMap_Screen_C_SetTooltipActive_Params Parms{};

	Parms.CallFunc_GetTooltipCoordText_OutputText = CallFunc_GetTooltipCoordText_OutputText;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_GetTooltipBodyText_OutputText = CallFunc_GetTooltipBodyText_OutputText;
	Parms.CallFunc_GetTooltipTitleText_OutputText = CallFunc_GetTooltipTitleText_OutputText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.GetGamepadPointerRelativePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_PlayerMap_Screen_C::GetGamepadPointerRelativePos(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "GetGamepadPointerRelativePos");

	Params::UWBP_PlayerMap_Screen_C_GetGamepadPointerRelativePos_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue = CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnPlayerLocalRespiteTravel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::OnPlayerLocalRespiteTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnPlayerLocalRespiteTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UWBP_PlayerMapPin_C*         LCurrentMapPinUnderCursor                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue_1           (None)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// float                              CallFunc_GetAnalogValue_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// TArray<class UWBP_PlayerMapPin_C*> CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerMapPin_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMarkerRelativePosition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DistanceSquared2D_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AnalogInputY_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PlayerMap_Screen_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, class UWBP_PlayerMapPin_C* LCurrentMapPinUnderCursor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue_1, float CallFunc_GetAnalogValue_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, TArray<class UWBP_PlayerMapPin_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PlayerMapPin_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_GetMarkerRelativePosition_ReturnValue, double CallFunc_DistanceSquared2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_VariableSet_AnalogInputY_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnAnalogValueChanged");

	Params::UWBP_PlayerMap_Screen_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.LCurrentMapPinUnderCursor = LCurrentMapPinUnderCursor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue = CallFunc_GetGamepadPointerRelativePos_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue_1 = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue_1;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_GetAnalogValue_ReturnValue_1 = CallFunc_GetAnalogValue_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMarkerRelativePosition_ReturnValue = CallFunc_GetMarkerRelativePosition_ReturnValue;
	Parms.CallFunc_DistanceSquared2D_ReturnValue = CallFunc_DistanceSquared2D_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_AnalogInputY_ImplicitCast = K2Node_VariableSet_AnalogInputY_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerMap_Screen_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PlayerMap_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.TryTogglePublicRealmLabelVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDeploymentInformationProvider>K2Node_DynamicCast_AsDeployment_Information_Provider             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeploymentInformation      CallFunc_GetDeploymentInformation_ReturnValue                    (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::TryTogglePublicRealmLabelVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IDeploymentInformationProvider> K2Node_DynamicCast_AsDeployment_Information_Provider, bool K2Node_DynamicCast_bSuccess, const struct FDeploymentInformation& CallFunc_GetDeploymentInformation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "TryTogglePublicRealmLabelVisibility");

	Params::UWBP_PlayerMap_Screen_C_TryTogglePublicRealmLabelVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsDeployment_Information_Provider = K2Node_DynamicCast_AsDeployment_Information_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDeploymentInformation_ReturnValue = CallFunc_GetDeploymentInformation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.GetRealmName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetRealmInfo_CurrentRealm_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoCallFunc_GetRealmInfo_CurrentRealm_RealmInfo                     (HasGetValueTypeHash)
// class FText                        CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name             (None)
// class FText                        CallFunc_UI_Get_NWXRealmName_FromTags_Description                (None)
// bool                               CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::GetRealmName(bool CallFunc_GetRealmInfo_CurrentRealm_Success, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Description, bool CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "GetRealmName");

	Params::UWBP_PlayerMap_Screen_C_GetRealmName_Params Parms{};

	Parms.CallFunc_GetRealmInfo_CurrentRealm_Success = CallFunc_GetRealmInfo_CurrentRealm_Success;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_RealmInfo = CallFunc_GetRealmInfo_CurrentRealm_RealmInfo;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name = CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Description = CallFunc_UI_Get_NWXRealmName_FromTags_Description;
	Parms.CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details = CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.SetUpSanctuaryTravelButton
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBiomeID>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRealmPlacementRequirement  K2Node_MakeStruct_RealmPlacementRequirement                      (None)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetRequirement_RequirementMet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::SetUpSanctuaryTravelButton(class UObject* Temp_object_Variable, TArray<enum class EBiomeID>& K2Node_MakeArray_Array, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, const struct FRealmPlacementRequirement& K2Node_MakeStruct_RealmPlacementRequirement, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_DoesRealmMeetRequirement_RequirementMet, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "SetUpSanctuaryTravelButton");

	Params::UWBP_PlayerMap_Screen_C_SetUpSanctuaryTravelButton_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_MakeStruct_RealmPlacementRequirement = K2Node_MakeStruct_RealmPlacementRequirement;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_DoesRealmMeetRequirement_RequirementMet = CallFunc_DoesRealmMeetRequirement_RequirementMet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.CheckIfInLateGameVaultRunForCA6
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::CheckIfInLateGameVaultRunForCA6(bool CallFunc_IsFeatureFlagEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "CheckIfInLateGameVaultRunForCA6");

	Params::UWBP_PlayerMap_Screen_C_CheckIfInLateGameVaultRunForCA6_Params Parms{};

	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.GetToolTipForTravelToRespite
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerMap_Screen_C::GetToolTipForTravelToRespite(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_1, class FText Temp_text_Variable_1, bool CallFunc_IsFeatureFlagEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "GetToolTipForTravelToRespite");

	Params::UWBP_PlayerMap_Screen_C_GetToolTipForTravelToRespite_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerMap_Screen_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "GetDefaultFocusWidget");

	Params::UWBP_PlayerMap_Screen_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.CenterOnPlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MapUI_WorldLocationToMapPosition_Map_Position           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::CenterOnPlayer(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "CenterOnPlayer");

	Params::UWBP_PlayerMap_Screen_C_CenterOnPlayer_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MapUI_WorldLocationToMapPosition_Map_Position = CallFunc_MapUI_WorldLocationToMapPosition_Map_Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnSanctuaryPopupConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::OnSanctuaryPopupConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnSanctuaryPopupConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.BndEvt__WBP_PlayerMap_Screen_CBU_TravelToSanctuary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::BndEvt__WBP_PlayerMap_Screen_CBU_TravelToSanctuary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "BndEvt__WBP_PlayerMap_Screen_CBU_TravelToSanctuary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PlayerMap_Screen_C_BndEvt__WBP_PlayerMap_Screen_CBU_TravelToSanctuary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.BndEvt__WBP_PlayerMap_Screen_WBP_Button_ReturnToRespite_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::BndEvt__WBP_PlayerMap_Screen_WBP_Button_ReturnToRespite_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "BndEvt__WBP_PlayerMap_Screen_WBP_Button_ReturnToRespite_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_PlayerMap_Screen_C_BndEvt__WBP_PlayerMap_Screen_WBP_Button_ReturnToRespite_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnZoomIN
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::OnZoomIN()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnZoomIN");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnInputMethodChanged");

	Params::UWBP_PlayerMap_Screen_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.OnZoomOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::OnZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "OnZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleTriggeringActionAddPin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleTriggeringActionAddPin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleTriggeringActionAddPin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleTriggeringActionZoomOutPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleTriggeringActionZoomOutPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleTriggeringActionZoomOutPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleTriggeringActionZoomOutReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleTriggeringActionZoomOutReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleTriggeringActionZoomOutReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleTriggeringActionZoomInPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleTriggeringActionZoomInPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleTriggeringActionZoomInPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.HandleTriggeringActionZoomInReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::HandleTriggeringActionZoomInReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "HandleTriggeringActionZoomInReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PlayerMap_Screen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "Tick");

	Params::UWBP_PlayerMap_Screen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.ExecuteUbergraph_WBP_PlayerMap_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// struct FRealmPlacementRequirement  K2Node_MakeStruct_RealmPlacementRequirement                      (None)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerSpawnComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmInfo_CurrentRealm_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Persisted_RealmVisitedInfoCallFunc_GetRealmInfo_CurrentRealm_RealmInfo                     (HasGetValueTypeHash)
// struct FRealmSettings              K2Node_MakeStruct_RealmSettings                                  (None)
// class FString                      CallFunc_GetLocalPlayerName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_General_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGamepadPointerRelativePos_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_MapMarkerTray_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerMapPinControllerInterface>CallFunc_RemovePlayerOwnedMapPin_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetRequirement_RequirementMet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::ExecuteUbergraph_WBP_PlayerMap_Screen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText Temp_text_Variable, const struct FRealmPlacementRequirement& K2Node_MakeStruct_RealmPlacementRequirement, class FText Temp_text_Variable_1, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UPlayerSpawnComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRealmInfo_CurrentRealm_Success, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo, const struct FRealmSettings& K2Node_MakeStruct_RealmSettings, const class FString& CallFunc_GetLocalPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue_1, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue_2, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue_3, const struct FVector2D& CallFunc_GetGamepadPointerRelativePos_ReturnValue_4, class FText Temp_text_Variable_2, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_MapMarkerTray_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_RemovePlayerOwnedMapPin_self_CastInput, class UObject* Temp_object_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, bool CallFunc_DoesRealmMeetRequirement_RequirementMet, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "ExecuteUbergraph_WBP_PlayerMap_Screen");

	Params::UWBP_PlayerMap_Screen_C_ExecuteUbergraph_WBP_PlayerMap_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_RealmPlacementRequirement = K2Node_MakeStruct_RealmPlacementRequirement;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_Success = CallFunc_GetRealmInfo_CurrentRealm_Success;
	Parms.CallFunc_GetRealmInfo_CurrentRealm_RealmInfo = CallFunc_GetRealmInfo_CurrentRealm_RealmInfo;
	Parms.K2Node_MakeStruct_RealmSettings = K2Node_MakeStruct_RealmSettings;
	Parms.CallFunc_GetLocalPlayerName_ReturnValue = CallFunc_GetLocalPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue = CallFunc_GetGamepadPointerRelativePos_ReturnValue;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue_1 = CallFunc_GetGamepadPointerRelativePos_ReturnValue_1;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue_2 = CallFunc_GetGamepadPointerRelativePos_ReturnValue_2;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue_3 = CallFunc_GetGamepadPointerRelativePos_ReturnValue_3;
	Parms.CallFunc_GetGamepadPointerRelativePos_ReturnValue_4 = CallFunc_GetGamepadPointerRelativePos_ReturnValue_4;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1 = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue = CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_RemovePlayerOwnedMapPin_self_CastInput = CallFunc_RemovePlayerOwnedMapPin_self_CastInput;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_DoesRealmMeetRequirement_RequirementMet = CallFunc_DoesRealmMeetRequirement_RequirementMet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMap_Screen.WBP_PlayerMap_Screen_C.ConfirmationPopup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ConfirmOpened                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMap_Screen_C::ConfirmationPopup__DelegateSignature(bool ConfirmOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMap_Screen_C", "ConfirmationPopup__DelegateSignature");

	Params::UWBP_PlayerMap_Screen_C_ConfirmationPopup__DelegateSignature_Params Parms{};

	Parms.ConfirmOpened = ConfirmOpened;

	UObject::ProcessEvent(Func, &Parms);

}

}


