#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass IcarusCompassWidget.IcarusCompassWidget_C
// (None)

class UClass* UIcarusCompassWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusCompassWidget_C");

	return Clss;
}


// IcarusCompassWidget_C IcarusCompassWidget.Default__IcarusCompassWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIcarusCompassWidget_C* UIcarusCompassWidget_C::GetDefaultObj()
{
	static class UIcarusCompassWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusCompassWidget_C*>(UIcarusCompassWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusCompassWidget.IcarusCompassWidget_C.ShouldDisplayIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIcarusMapIconComponent*     IconComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldDisplay                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapIconsData               CallFunc_GetMapIconsStruct_MapIcons                              (None)
// enum class EValid                  CallFunc_GetMapIconsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcarusCompassWidget_C::ShouldDisplayIcon(class UIcarusMapIconComponent* IconComponent, bool* ShouldDisplay, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "ShouldDisplayIcon");

	Params::UIcarusCompassWidget_C_ShouldDisplayIcon_Params Parms{};

	Parms.IconComponent = IconComponent;
	Parms.CallFunc_GetMapIconsStruct_MapIcons = CallFunc_GetMapIconsStruct_MapIcons;
	Parms.CallFunc_GetMapIconsStruct_Paths = CallFunc_GetMapIconsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDisplay != nullptr)
		*ShouldDisplay = Parms.ShouldDisplay;

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.RemoveWaypoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusCompassIcon*          CompassWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIcarusCompassWidget_C::RemoveWaypoint(class UIcarusCompassIcon* CompassWidget, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "RemoveWaypoint");

	Params::UIcarusCompassWidget_C_RemoveWaypoint_Params Parms{};

	Parms.CompassWidget = CompassWidget;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.RemoveWaypointComponentOld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusMapIconComponent*     MapIconComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusCompassIcon*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::RemoveWaypointComponentOld(class UIcarusMapIconComponent* MapIconComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UIcarusCompassIcon* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "RemoveWaypointComponentOld");

	Params::UIcarusCompassWidget_C_RemoveWaypointComponentOld_Params Parms{};

	Parms.MapIconComponent = MapIconComponent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.AddWaypoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusMapIconComponent*     MapIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapIconsData               CallFunc_GetMapIconsStruct_MapIcons                              (None)
// enum class EValid                  CallFunc_GetMapIconsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsUMG_Icarus_Compass_Icon                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_IcarusCompassIcon_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::AddWaypoint(class UIcarusMapIconComponent* MapIcon, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_ClassDynamicCast_AsUMG_Icarus_Compass_Icon, bool K2Node_ClassDynamicCast_bSuccess, class UUMG_IcarusCompassIcon_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "AddWaypoint");

	Params::UIcarusCompassWidget_C_AddWaypoint_Params Parms{};

	Parms.MapIcon = MapIcon;
	Parms.CallFunc_GetMapIconsStruct_MapIcons = CallFunc_GetMapIconsStruct_MapIcons;
	Parms.CallFunc_GetMapIconsStruct_Paths = CallFunc_GetMapIconsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ClassDynamicCast_AsUMG_Icarus_Compass_Icon = K2Node_ClassDynamicCast_AsUMG_Icarus_Compass_Icon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIcarusCompassWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.StatsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIcarusCompassWidget_C::StatsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "StatsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.AddWaypointComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusMapIconComponent*     MapIconComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::AddWaypointComponent(class UIcarusMapIconComponent* MapIconComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "AddWaypointComponent");

	Params::UIcarusCompassWidget_C_AddWaypointComponent_Params Parms{};

	Parms.MapIconComponent = MapIconComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.RemoveWaypointWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusCompassIcon*          CompassIcon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::RemoveWaypointWidget(class UIcarusCompassIcon* CompassIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "RemoveWaypointWidget");

	Params::UIcarusCompassWidget_C_RemoveWaypointWidget_Params Parms{};

	Parms.CompassIcon = CompassIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.RemoveWaypointComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusMapIconComponent*     MapIconComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::RemoveWaypointComponent(class UIcarusMapIconComponent* MapIconComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "RemoveWaypointComponent");

	Params::UIcarusCompassWidget_C_RemoveWaypointComponent_Params Parms{};

	Parms.MapIconComponent = MapIconComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IcarusCompassWidget.IcarusCompassWidget_C.ExecuteUbergraph_IcarusCompassWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusMapIconComponent*     K2Node_Event_MapIconComponent                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BoolStatCheck_HasStat                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusMapIconComponent*     K2Node_Event_MapIconComponent_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusCompassIcon*          K2Node_Event_CompassIcon                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIcarusCompassWidget_C::ExecuteUbergraph_IcarusCompassWidget(int32 EntryPoint, class UIcarusMapIconComponent* K2Node_Event_MapIconComponent, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, class UIcarusMapIconComponent* K2Node_Event_MapIconComponent_1, class UIcarusCompassIcon* K2Node_Event_CompassIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusCompassWidget_C", "ExecuteUbergraph_IcarusCompassWidget");

	Params::UIcarusCompassWidget_C_ExecuteUbergraph_IcarusCompassWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MapIconComponent = K2Node_Event_MapIconComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_1 = CallFunc_GetIcarusPlayerCharacter_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BoolStatCheck_HasStat = CallFunc_BoolStatCheck_HasStat;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_MapIconComponent_1 = K2Node_Event_MapIconComponent_1;
	Parms.K2Node_Event_CompassIcon = K2Node_Event_CompassIcon;

	UObject::ProcessEvent(Func, &Parms);

}

}


