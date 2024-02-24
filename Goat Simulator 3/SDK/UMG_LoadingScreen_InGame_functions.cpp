#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C
// (None)

class UClass* UUMG_LoadingScreen_InGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadingScreen_InGame_C");

	return Clss;
}


// UMG_LoadingScreen_InGame_C UMG_LoadingScreen_InGame.Default__UMG_LoadingScreen_InGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadingScreen_InGame_C* UUMG_LoadingScreen_InGame_C::GetDefaultObj()
{
	static class UUMG_LoadingScreen_InGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadingScreen_InGame_C*>(UUMG_LoadingScreen_InGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.ApplyMobilePadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OriginalGoatX                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateMobilePadding_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingScreen_InGame_C::ApplyMobilePadding(float OriginalGoatX, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_CalculateMobilePadding_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "ApplyMobilePadding");

	Params::UUMG_LoadingScreen_InGame_C_ApplyMobilePadding_Params Parms{};

	Parms.OriginalGoatX = OriginalGoatX;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_CalculateMobilePadding_ReturnValue = CallFunc_CalculateMobilePadding_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.GetLoadingScreenProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_LoadingScreen_InGame_C::GetLoadingScreenProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "GetLoadingScreenProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.GoatWalkTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingScreen_InGame_C::GoatWalkTexture(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "GoatWalkTexture");

	Params::UUMG_LoadingScreen_InGame_C_GoatWalkTexture_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_LoadingScreen_InGame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingScreen_InGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "Tick");

	Params::UUMG_LoadingScreen_InGame_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.InitializeLoadingScreen
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FLoadingWidgetParameter>WidgetParameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LoadingScreen_InGame_C::InitializeLoadingScreen(TArray<struct FLoadingWidgetParameter>& WidgetParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "InitializeLoadingScreen");

	Params::UUMG_LoadingScreen_InGame_C_InitializeLoadingScreen_Params Parms{};

	Parms.WidgetParameters = WidgetParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_LoadingScreen_InGame_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingScreen_InGame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "PreConstruct");

	Params::UUMG_LoadingScreen_InGame_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen_InGame.UMG_LoadingScreen_InGame_C.ExecuteUbergraph_UMG_LoadingScreen_InGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGameInstance*             K2Node_DynamicCast_AsGGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadingWidgetParameter>K2Node_Event_WidgetParameters                                    (ConstParm, ReferenceParm)
// class UGGMenuUserWidget*           CallFunc_GetTopMenu_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingScreen_InGame_C::ExecuteUbergraph_UMG_LoadingScreen_InGame(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, TArray<struct FLoadingWidgetParameter>& K2Node_Event_WidgetParameters, class UGGMenuUserWidget* CallFunc_GetTopMenu_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_InGame_C", "ExecuteUbergraph_UMG_LoadingScreen_InGame");

	Params::UUMG_LoadingScreen_InGame_C_ExecuteUbergraph_UMG_LoadingScreen_InGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsGGGame_Instance = K2Node_DynamicCast_AsGGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_WidgetParameters = K2Node_Event_WidgetParameters;
	Parms.CallFunc_GetTopMenu_ReturnValue = CallFunc_GetTopMenu_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


