#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadarIcon.UMG_RadarIcon_C
// (None)

class UClass* UUMG_RadarIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadarIcon_C");

	return Clss;
}


// UMG_RadarIcon_C UMG_RadarIcon.Default__UMG_RadarIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadarIcon_C* UUMG_RadarIcon_C::GetDefaultObj()
{
	static class UUMG_RadarIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadarIcon_C*>(UUMG_RadarIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RadarIcon.UMG_RadarIcon_C.ShouldDrawPathToLinkedActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RadarIcon_C::ShouldDrawPathToLinkedActor(class AActor** LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "ShouldDrawPathToLinkedActor");

	Params::UUMG_RadarIcon_C_ShouldDrawPathToLinkedActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LinkedActor != nullptr)
		*LinkedActor = Parms.LinkedActor;

	return Parms.ReturnValue;

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.ShouldOverrideWidgetLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RadarIcon_C::ShouldOverrideWidgetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "ShouldOverrideWidgetLocation");

	Params::UUMG_RadarIcon_C_ShouldOverrideWidgetLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.ShouldOverrideVisibility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        ForcedVisibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RadarIcon_C::ShouldOverrideVisibility(enum class ESlateVisibility* ForcedVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "ShouldOverrideVisibility");

	Params::UUMG_RadarIcon_C_ShouldOverrideVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForcedVisibility != nullptr)
		*ForcedVisibility = Parms.ForcedVisibility;

	return Parms.ReturnValue;

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.SetShouldDrawLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DrawLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RadarIcon_C::SetShouldDrawLabel(bool DrawLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "SetShouldDrawLabel");

	Params::UUMG_RadarIcon_C_SetShouldDrawLabel_Params Parms{};

	Parms.DrawLabel = DrawLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.ApplyLabelPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERotationalDirections   RelativePosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_5                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_6                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_7                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_8                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_9                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_10                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_11                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RadarIcon_C::ApplyLabelPosition(enum class ERotationalDirections RelativePosition, bool K2Node_SwitchEnum_CmpSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_3, bool K2Node_DynamicCast_bSuccess_3, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_4, bool K2Node_DynamicCast_bSuccess_4, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_5, bool K2Node_DynamicCast_bSuccess_5, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_6, bool K2Node_DynamicCast_bSuccess_6, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_7, bool K2Node_DynamicCast_bSuccess_7, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_8, bool K2Node_DynamicCast_bSuccess_8, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_9, bool K2Node_DynamicCast_bSuccess_9, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_10, bool K2Node_DynamicCast_bSuccess_10, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_11, bool K2Node_DynamicCast_bSuccess_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "ApplyLabelPosition");

	Params::UUMG_RadarIcon_C_ApplyLabelPosition_Params Parms{};

	Parms.RelativePosition = RelativePosition;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_2 = K2Node_DynamicCast_AsCanvas_Panel_Slot_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_3 = K2Node_DynamicCast_AsCanvas_Panel_Slot_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_4 = K2Node_DynamicCast_AsCanvas_Panel_Slot_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_5 = K2Node_DynamicCast_AsCanvas_Panel_Slot_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_6 = K2Node_DynamicCast_AsCanvas_Panel_Slot_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_7 = K2Node_DynamicCast_AsCanvas_Panel_Slot_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_8 = K2Node_DynamicCast_AsCanvas_Panel_Slot_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_9 = K2Node_DynamicCast_AsCanvas_Panel_Slot_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_10 = K2Node_DynamicCast_AsCanvas_Panel_Slot_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_11 = K2Node_DynamicCast_AsCanvas_Panel_Slot_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RadarIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RadarIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "Tick");

	Params::UUMG_RadarIcon_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.InitialiseIconWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FMapIconsRowHandle          MapIconData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OwningActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RadarIcon_C::InitialiseIconWidget(const struct FMapIconsRowHandle& MapIconData, class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "InitialiseIconWidget");

	Params::UUMG_RadarIcon_C_InitialiseIconWidget_Params Parms{};

	Parms.MapIconData = MapIconData;
	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarIcon.UMG_RadarIcon_C.ExecuteUbergraph_UMG_RadarIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapIconsRowHandle          K2Node_Event_MapIconData                                         (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwningActor                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusWaypointActor*        K2Node_DynamicCast_AsIcarus_Waypoint_Actor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerVisualIdentity_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerIdentityData         CallFunc_GetPlayerIdentityData_PlayerIdentity                    (None)
// struct FMapIconsData               CallFunc_GetMapIconsStruct_MapIcons                              (None)
// enum class EValid                  CallFunc_GetMapIconsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UUMG_RadarIcon_C::ExecuteUbergraph_UMG_RadarIcon(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Variable, const struct FMapIconsRowHandle& K2Node_Event_MapIconData, class AActor* K2Node_Event_OwningActor, class AIcarusWaypointActor* K2Node_DynamicCast_AsIcarus_Waypoint_Actor, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPlayerVisualIdentity_ReturnValue, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarIcon_C", "ExecuteUbergraph_UMG_RadarIcon");

	Params::UUMG_RadarIcon_C_ExecuteUbergraph_UMG_RadarIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_MapIconData = K2Node_Event_MapIconData;
	Parms.K2Node_Event_OwningActor = K2Node_Event_OwningActor;
	Parms.K2Node_DynamicCast_AsIcarus_Waypoint_Actor = K2Node_DynamicCast_AsIcarus_Waypoint_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerVisualIdentity_ReturnValue = CallFunc_GetPlayerVisualIdentity_ReturnValue;
	Parms.CallFunc_GetPlayerIdentityData_PlayerIdentity = CallFunc_GetPlayerIdentityData_PlayerIdentity;
	Parms.CallFunc_GetMapIconsStruct_MapIcons = CallFunc_GetMapIconsStruct_MapIcons;
	Parms.CallFunc_GetMapIconsStruct_Paths = CallFunc_GetMapIconsStruct_Paths;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


