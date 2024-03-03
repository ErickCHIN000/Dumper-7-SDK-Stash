#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C
// (None)

class UClass* UALS_PlayerCameraBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_PlayerCameraBehavior_C");

	return Clss;
}


// ALS_PlayerCameraBehavior_C ALS_PlayerCameraBehavior.Default__ALS_PlayerCameraBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_PlayerCameraBehavior_C* UALS_PlayerCameraBehavior_C::GetDefaultObj()
{
	static class UALS_PlayerCameraBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_PlayerCameraBehavior_C*>(UALS_PlayerCameraBehavior_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_PlayerCameraBehavior_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "AnimGraph");

	Params::UALS_PlayerCameraBehavior_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.UpdateCharacterInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Controller_BPI_C>K2Node_DynamicCast_AsALS_Controller_BPI                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           CallFunc_BPI_Get_CurrentStates_PawnMovementMode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_PrevMovementState                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementAction     CallFunc_BPI_Get_CurrentStates_MovementAction                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_RotationMode       CallFunc_BPI_Get_CurrentStates_RotationMode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Gait               CallFunc_BPI_Get_CurrentStates_ActualGait                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Stance             CallFunc_BPI_Get_CurrentStates_ActualStance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_ViewMode           CallFunc_BPI_Get_CurrentStates_ViewMode                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_OverlayState       CallFunc_BPI_Get_CurrentStates_OverlayState                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_DebugInfo_DebugView                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowHUD                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowTraces                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowDebugShapes                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowLayerColors                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_Slomo                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Camera_BPI_C>K2Node_DynamicCast_AsALS_Camera_BPI                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BPI_Get_CameraParameters_TP_FOV                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_Get_CameraParameters_FP_FOV                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_CameraParameters_RightShoulder                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UALS_PlayerCameraBehavior_C::UpdateCharacterInfo(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IALS_Controller_BPI_C> K2Node_DynamicCast_AsALS_Controller_BPI, bool K2Node_DynamicCast_bSuccess_1, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, class ACharacter* CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter, bool CallFunc_BPI_Get_DebugInfo_DebugView, bool CallFunc_BPI_Get_DebugInfo_ShowHUD, bool CallFunc_BPI_Get_DebugInfo_ShowTraces, bool CallFunc_BPI_Get_DebugInfo_ShowDebugShapes, bool CallFunc_BPI_Get_DebugInfo_ShowLayerColors, bool CallFunc_BPI_Get_DebugInfo_Slomo, bool CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IALS_Camera_BPI_C> K2Node_DynamicCast_AsALS_Camera_BPI, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BPI_Get_CameraParameters_TP_FOV, float CallFunc_BPI_Get_CameraParameters_FP_FOV, bool CallFunc_BPI_Get_CameraParameters_RightShoulder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "UpdateCharacterInfo");

	Params::UALS_PlayerCameraBehavior_C_UpdateCharacterInfo_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI = K2Node_DynamicCast_AsALS_Character_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsALS_Controller_BPI = K2Node_DynamicCast_AsALS_Controller_BPI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPI_Get_CurrentStates_PawnMovementMode = CallFunc_BPI_Get_CurrentStates_PawnMovementMode;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementState = CallFunc_BPI_Get_CurrentStates_MovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_PrevMovementState = CallFunc_BPI_Get_CurrentStates_PrevMovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementAction = CallFunc_BPI_Get_CurrentStates_MovementAction;
	Parms.CallFunc_BPI_Get_CurrentStates_RotationMode = CallFunc_BPI_Get_CurrentStates_RotationMode;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualGait = CallFunc_BPI_Get_CurrentStates_ActualGait;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualStance = CallFunc_BPI_Get_CurrentStates_ActualStance;
	Parms.CallFunc_BPI_Get_CurrentStates_ViewMode = CallFunc_BPI_Get_CurrentStates_ViewMode;
	Parms.CallFunc_BPI_Get_CurrentStates_OverlayState = CallFunc_BPI_Get_CurrentStates_OverlayState;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter = CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter;
	Parms.CallFunc_BPI_Get_DebugInfo_DebugView = CallFunc_BPI_Get_DebugInfo_DebugView;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowHUD = CallFunc_BPI_Get_DebugInfo_ShowHUD;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowTraces = CallFunc_BPI_Get_DebugInfo_ShowTraces;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowDebugShapes = CallFunc_BPI_Get_DebugInfo_ShowDebugShapes;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowLayerColors = CallFunc_BPI_Get_DebugInfo_ShowLayerColors;
	Parms.CallFunc_BPI_Get_DebugInfo_Slomo = CallFunc_BPI_Get_DebugInfo_Slomo;
	Parms.CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo = CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsALS_Camera_BPI = K2Node_DynamicCast_AsALS_Camera_BPI;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BPI_Get_CameraParameters_TP_FOV = CallFunc_BPI_Get_CameraParameters_TP_FOV;
	Parms.CallFunc_BPI_Get_CameraParameters_FP_FOV = CallFunc_BPI_Get_CameraParameters_FP_FOV;
	Parms.CallFunc_BPI_Get_CameraParameters_RightShoulder = CallFunc_BPI_Get_CameraParameters_RightShoulder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_38C2CC2441B7E054743A14AB880FE7C4
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_38C2CC2441B7E054743A14AB880FE7C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_38C2CC2441B7E054743A14AB880FE7C4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_217B04474D0413D948288DAAD61B3502
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_217B04474D0413D948288DAAD61B3502()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_217B04474D0413D948288DAAD61B3502");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_440683FE407F1F8A79B7EBA57AC52916
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_440683FE407F1F8A79B7EBA57AC52916()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_440683FE407F1F8A79B7EBA57AC52916");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_604284824796763ACBDA5B84202DEDFA
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_604284824796763ACBDA5B84202DEDFA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_604284824796763ACBDA5B84202DEDFA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_3EA4CE9D45EE798D7BF11496CAE91FDC
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_3EA4CE9D45EE798D7BF11496CAE91FDC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_ModifyCurve_3EA4CE9D45EE798D7BF11496CAE91FDC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_0D30AFC6461B5834DDD33588DB08FD2B
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_0D30AFC6461B5834DDD33588DB08FD2B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_0D30AFC6461B5834DDD33588DB08FD2B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_12E957984E9E8E18C540A197CA5611D7
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_12E957984E9E8E18C540A197CA5611D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_12E957984E9E8E18C540A197CA5611D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_C201AD03413A706ECFD533B5BE53C5AD
// (BlueprintEvent)
// Parameters:

void UALS_PlayerCameraBehavior_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_C201AD03413A706ECFD533B5BE53C5AD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_PlayerCameraBehavior_AnimGraphNode_TransitionResult_C201AD03413A706ECFD533B5BE53C5AD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_PlayerCameraBehavior_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "BlueprintUpdateAnimation");

	Params::UALS_PlayerCameraBehavior_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_PlayerCameraBehavior.ALS_PlayerCameraBehavior_C.ExecuteUbergraph_ALS_PlayerCameraBehavior
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_PlayerCameraBehavior_C::ExecuteUbergraph_ALS_PlayerCameraBehavior(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_PlayerCameraBehavior_C", "ExecuteUbergraph_ALS_PlayerCameraBehavior");

	Params::UALS_PlayerCameraBehavior_C_ExecuteUbergraph_ALS_PlayerCameraBehavior_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


