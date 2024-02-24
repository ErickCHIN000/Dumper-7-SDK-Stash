#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RevampedGameHUD.WBP_RevampedGameHUD_C
// (None)

class UClass* UWBP_RevampedGameHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RevampedGameHUD_C");

	return Clss;
}


// WBP_RevampedGameHUD_C WBP_RevampedGameHUD.Default__WBP_RevampedGameHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RevampedGameHUD_C* UWBP_RevampedGameHUD_C::GetDefaultObj()
{
	static class UWBP_RevampedGameHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RevampedGameHUD_C*>(UWBP_RevampedGameHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_PlayOpeningAnimations
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BP_PlayOpeningAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_PlayOpeningAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_PlayQFPDamageAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BP_PlayQFPDamageAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_PlayQFPDamageAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_PlayHintAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BP_PlayHintAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_PlayHintAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_NotifyCaveHoverV3
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGridCaveHighlightInfo      Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RevampedGameHUD_C::BP_NotifyCaveHoverV3(const struct FGridCaveHighlightInfo& Info, bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_NotifyCaveHoverV3");

	Params::UWBP_RevampedGameHUD_C_BP_NotifyCaveHoverV3_Params Parms{};

	Parms.Info = Info;
	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_NotifyAreaHoverV2
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                   ScreenCursorLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridHighlightInfo>  HighlightTiles                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsLight                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RevampedGameHUD_C::BP_NotifyAreaHoverV2(const struct FVector2D& ScreenCursorLocation, TArray<struct FGridHighlightInfo>& HighlightTiles, bool bIsLight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_NotifyAreaHoverV2");

	Params::UWBP_RevampedGameHUD_C_BP_NotifyAreaHoverV2_Params Parms{};

	Parms.ScreenCursorLocation = ScreenCursorLocation;
	Parms.HighlightTiles = HighlightTiles;
	Parms.bIsLight = bIsLight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_NextOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BP_NextOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_NextOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BP_OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RevampedGameHUD_C::BP_OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BP_OnTick");

	Params::UWBP_RevampedGameHUD_C_BP_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowMultiplayerMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RevampedGameHUD_C::BPI_ShowMultiplayerMessage(class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowMultiplayerMessage");

	Params::UWBP_RevampedGameHUD_C_BPI_ShowMultiplayerMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_OnExitRune
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_OnExitRune()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_OnExitRune");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_OnEnterRune
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_OnEnterRune()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_OnEnterRune");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.DifficultyTutorialClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::DifficultyTutorialClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "DifficultyTutorialClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowRegularDifficultyTutorial
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_ShowRegularDifficultyTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowRegularDifficultyTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.DifficultyTutorialStarClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::DifficultyTutorialStarClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "DifficultyTutorialStarClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowStarDifficultyTutorial
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_ShowStarDifficultyTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowStarDifficultyTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowQFPFirstTierSolvePopup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_ShowQFPFirstTierSolvePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowQFPFirstTierSolvePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.FirstTierSolveClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::FirstTierSolveClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "FirstTierSolveClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowQFPAllTierSolvePopup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_ShowQFPAllTierSolvePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowQFPAllTierSolvePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.AllTierSolveClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::AllTierSolveClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "AllTierSolveClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.BPI_ShowQFPInfinitePopup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::BPI_ShowQFPInfinitePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "BPI_ShowQFPInfinitePopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.InfinitePopupClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevampedGameHUD_C::InfinitePopupClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "InfinitePopupClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevampedGameHUD.WBP_RevampedGameHUD_C.ExecuteUbergraph_WBP_RevampedGameHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGridCaveHighlightInfo      K2Node_Event_Info                                                (NoDestructor)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_AreaHighlightIndividual_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_ScreenCursorLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridHighlightInfo>  K2Node_Event_HighlightTiles                                      (ConstParm, ReferenceParm)
// bool                               K2Node_Event_bIsLight                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSyncedWithMaterials_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridHighlightInfo          CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSyncedWithMaterials_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_AreaHighlightIndividual_C*K2Node_DynamicCast_AsWBP_Area_Highlight_Individual               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_message                                             (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaHUD*                  CallFunc_BP_GetFirstLocalPlayerHUD_hud                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaHUD*                  CallFunc_BP_GetFirstLocalPlayerHUD_hud_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_GameHintModalGridDifficulties_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameHintModalGridDifficultiesStar_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameHintModalQFPMirabilis_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameHintModalQFP_C*     CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameHintModalQFPInfinite_C*CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_RevampedGameHUD_C::ExecuteUbergraph_WBP_RevampedGameHUD(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, int32 Temp_int_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FGridCaveHighlightInfo& K2Node_Event_Info, bool K2Node_Event_bShow, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class FText CallFunc_Format_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_AreaHighlightIndividual_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& K2Node_Event_ScreenCursorLocation, TArray<struct FGridHighlightInfo>& K2Node_Event_HighlightTiles, bool K2Node_Event_bIsLight, float CallFunc_GetTimeSyncedWithMaterials_ReturnValue, const struct FGridHighlightInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetTimeSyncedWithMaterials_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, float K2Node_Event_DeltaTime, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_AreaHighlightIndividual_C* K2Node_DynamicCast_AsWBP_Area_Highlight_Individual, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText K2Node_Event_message, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_3, class ASophiaHUD* CallFunc_BP_GetFirstLocalPlayerHUD_hud, bool CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_4, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_1, bool K2Node_DynamicCast_bSuccess_5, class ASophiaHUD* CallFunc_BP_GetFirstLocalPlayerHUD_hud_1, bool CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD_1, bool K2Node_DynamicCast_bSuccess_6, class UWBP_GameHintModalGridDifficulties_C* CallFunc_Create_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_GameHintModalGridDifficultiesStar_C* CallFunc_Create_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWBP_GameHintModalQFPMirabilis_C* CallFunc_Create_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWBP_GameHintModalQFP_C* CallFunc_Create_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWBP_GameHintModalQFPInfinite_C* CallFunc_Create_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_5, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevampedGameHUD_C", "ExecuteUbergraph_WBP_RevampedGameHUD");

	Params::UWBP_RevampedGameHUD_C_ExecuteUbergraph_WBP_RevampedGameHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue_8 = CallFunc_PlayAnimation_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Info = K2Node_Event_Info;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_Event_ScreenCursorLocation = K2Node_Event_ScreenCursorLocation;
	Parms.K2Node_Event_HighlightTiles = K2Node_Event_HighlightTiles;
	Parms.K2Node_Event_bIsLight = K2Node_Event_bIsLight;
	Parms.CallFunc_GetTimeSyncedWithMaterials_ReturnValue = CallFunc_GetTimeSyncedWithMaterials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue_1 = CallFunc_Add_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTimeSyncedWithMaterials_ReturnValue_1 = CallFunc_GetTimeSyncedWithMaterials_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWBP_Area_Highlight_Individual = K2Node_DynamicCast_AsWBP_Area_Highlight_Individual;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_hud = CallFunc_BP_GetFirstLocalPlayerHUD_hud;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue = CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD = K2Node_DynamicCast_AsBP_Sophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsSophia_Character_1 = K2Node_DynamicCast_AsSophia_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_hud_1 = CallFunc_BP_GetFirstLocalPlayerHUD_hud_1;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue_1 = CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD_1 = K2Node_DynamicCast_AsBP_Sophia_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_4 = CallFunc_PlayAnimationForward_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_5 = CallFunc_PlayAnimationForward_ReturnValue_5;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


