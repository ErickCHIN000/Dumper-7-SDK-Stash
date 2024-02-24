#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LargeMap.WBP_LargeMap_C
// (None)

class UClass* UWBP_LargeMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LargeMap_C");

	return Clss;
}


// WBP_LargeMap_C WBP_LargeMap.Default__WBP_LargeMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LargeMap_C* UWBP_LargeMap_C::GetDefaultObj()
{
	static class UWBP_LargeMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LargeMap_C*>(UWBP_LargeMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LargeMap.WBP_LargeMap_C.Show UI Panels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::Show_UI_Panels(class UZoneData* CallFunc_GetZoneData_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "Show UI Panels");

	Params::UWBP_LargeMap_C_Show_UI_Panels_Params Parms{};

	Parms.CallFunc_GetZoneData_ReturnValue = CallFunc_GetZoneData_ReturnValue;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue = CallFunc_ZoneIndex_to_Zone_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.Get_ConquestOverlay_Visibility_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWBP_LargeMap_C::Get_ConquestOverlay_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "Get_ConquestOverlay_Visibility_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.Refresh Infopanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::Refresh_Infopanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "Refresh Infopanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BP_OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::BP_OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BP_OnTick");

	Params::UWBP_LargeMap_C_BP_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnToggleSandboxProgression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ZoneMasterySummary_C*   Caller                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::OnToggleSandboxProgression(class UWBP_ZoneMasterySummary_C* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnToggleSandboxProgression");

	Params::UWBP_LargeMap_C_OnToggleSandboxProgression_Params Parms{};

	Parms.Caller = Caller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.RefreshFastTravelPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::RefreshFastTravelPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "RefreshFastTravelPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.RebuildZoneProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::RebuildZoneProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "RebuildZoneProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_0_PreviousZoneClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_0_PreviousZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_0_PreviousZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_1_NextZoneClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_1_NextZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_1_NextZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_2_ExpandClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_2_ExpandClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_2_ExpandClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_3_CollapseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_3_CollapseClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_3_CollapseClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_4_PreviousZoneClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_4_PreviousZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_4_PreviousZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_5_NextZoneClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_5_NextZoneClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_5_NextZoneClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnNewSandboxCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::OnNewSandboxCategoryClicked(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnNewSandboxCategoryClicked");

	Params::UWBP_LargeMap_C_OnNewSandboxCategoryClicked_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_6_SandboxCategoryClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_6_SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_6_SandboxCategoryClicked__DelegateSignature");

	Params::UWBP_LargeMap_C_BndEvt__WBP_LargeMap_WBP_SandboxCollapsed_K2Node_ComponentBoundEvent_6_SandboxCategoryClicked__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_7_SandboxCategoryClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_7_SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_7_SandboxCategoryClicked__DelegateSignature");

	Params::UWBP_LargeMap_C_BndEvt__WBP_LargeMap_WBP_SandboxExpanded_K2Node_ComponentBoundEvent_7_SandboxCategoryClicked__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.NextCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::NextCategory(enum class EPuzzleCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "NextCategory");

	Params::UWBP_LargeMap_C_NextCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.PreviousCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::PreviousCategory(enum class EPuzzleCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "PreviousCategory");

	Params::UWBP_LargeMap_C_PreviousCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnSandboxModalClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::OnSandboxModalClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnSandboxModalClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnRewardClaimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::OnRewardClaimed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnRewardClaimed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.BPI_HideUIPanels
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::BPI_HideUIPanels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "BPI_HideUIPanels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnSandboxCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPuzzleCategory         Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        ZONE                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::OnSandboxCategoryClicked(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnSandboxCategoryClicked");

	Params::UWBP_LargeMap_C_OnSandboxCategoryClicked_Params Parms{};

	Parms.Category = Category;
	Parms.ZONE = ZONE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnPreviousZoneClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::OnPreviousZoneClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnPreviousZoneClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.OnNextZoneClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::OnNextZoneClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "OnNextZoneClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.On Reopen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::On_Reopen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "On Reopen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.RefreshSandboxModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LargeMap_C::RefreshSandboxModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "RefreshSandboxModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LargeMap.WBP_LargeMap_C.ExecuteUbergraph_WBP_LargeMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedZoneIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UWBP_ZoneMasterySummary_C*   K2Node_CustomEvent_caller                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLocationMarkerData         CallFunc_GetLastHoveredMarker_ReturnValue                        (None)
// class UWBP_SandboxModal_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue_1                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPuzzleCategory         K2Node_CustomEvent_Category_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        K2Node_CustomEvent_Zone_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SandboxModal_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPuzzleCategory         K2Node_ComponentBoundEvent_Category_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        K2Node_ComponentBoundEvent_Zone_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPuzzleCategory         K2Node_ComponentBoundEvent_Category                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        K2Node_ComponentBoundEvent_Zone                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPuzzleCategory         K2Node_CustomEvent_Category_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPuzzleCategory         K2Node_CustomEvent_Category_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPuzzleDatabase*             CallFunc_GetPuzzleDatabase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetPuzzleTypesInZone_OutNames                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPuzzleCategory> CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue   (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPuzzleCategory         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// enum class EPuzzleCategory         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneData*                   CallFunc_GetZoneData_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UZoneDataEntry*              CallFunc_ZoneIndex_to_Zone_ReturnValue_2                         (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPuzzleCategory         K2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMainMapZoneName        K2Node_CustomEvent_Zone                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidKey_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LargeMap_C::ExecuteUbergraph_WBP_LargeMap(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float K2Node_Event_DeltaTime, int32 CallFunc_GetSelectedZoneIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWBP_ZoneMasterySummary_C* K2Node_CustomEvent_caller, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FLocationMarkerData& CallFunc_GetLastHoveredMarker_ReturnValue, class UWBP_SandboxModal_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UZoneData* CallFunc_GetZoneData_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, class UZoneData* CallFunc_GetZoneData_ReturnValue_1, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue_1, enum class EPuzzleCategory K2Node_CustomEvent_Category_3, enum class EMainMapZoneName K2Node_CustomEvent_Zone_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_SandboxModal_C* CallFunc_Create_ReturnValue_1, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, enum class EPuzzleCategory K2Node_ComponentBoundEvent_Category_1, enum class EMainMapZoneName K2Node_ComponentBoundEvent_Zone_1, enum class EPuzzleCategory K2Node_ComponentBoundEvent_Category, enum class EMainMapZoneName K2Node_ComponentBoundEvent_Zone, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, enum class EPuzzleCategory K2Node_CustomEvent_Category_2, enum class EPuzzleCategory K2Node_CustomEvent_Category_1, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, int32 CallFunc_Array_Find_ReturnValue, TArray<enum class EPuzzleCategory>& CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class EPuzzleCategory CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class EPuzzleCategory CallFunc_Array_Get_Item_1, class UZoneData* CallFunc_GetZoneData_ReturnValue_2, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue_2, enum class EPuzzleCategory K2Node_CustomEvent_Category, enum class EMainMapZoneName K2Node_CustomEvent_Zone, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_HasValidKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LargeMap_C", "ExecuteUbergraph_WBP_LargeMap");

	Params::UWBP_LargeMap_C_ExecuteUbergraph_WBP_LargeMap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetSelectedZoneIndex_ReturnValue = CallFunc_GetSelectedZoneIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_caller = K2Node_CustomEvent_caller;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLastHoveredMarker_ReturnValue = CallFunc_GetLastHoveredMarker_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetZoneData_ReturnValue = CallFunc_GetZoneData_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue = CallFunc_ZoneIndex_to_Zone_ReturnValue;
	Parms.CallFunc_GetZoneData_ReturnValue_1 = CallFunc_GetZoneData_ReturnValue_1;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue_1 = CallFunc_ZoneIndex_to_Zone_ReturnValue_1;
	Parms.K2Node_CustomEvent_Category_3 = K2Node_CustomEvent_Category_3;
	Parms.K2Node_CustomEvent_Zone_1 = K2Node_CustomEvent_Zone_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetParent_ReturnValue_1 = CallFunc_GetParent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_Category_1 = K2Node_ComponentBoundEvent_Category_1;
	Parms.K2Node_ComponentBoundEvent_Zone_1 = K2Node_ComponentBoundEvent_Zone_1;
	Parms.K2Node_ComponentBoundEvent_Category = K2Node_ComponentBoundEvent_Category;
	Parms.K2Node_ComponentBoundEvent_Zone = K2Node_ComponentBoundEvent_Zone;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue_1 = CallFunc_AddChildToOverlay_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_Category_2 = K2Node_CustomEvent_Category_2;
	Parms.K2Node_CustomEvent_Category_1 = K2Node_CustomEvent_Category_1;
	Parms.CallFunc_GetPuzzleDatabase_ReturnValue = CallFunc_GetPuzzleDatabase_ReturnValue;
	Parms.CallFunc_GetPuzzleTypesInZone_OutNames = CallFunc_GetPuzzleTypesInZone_OutNames;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue = CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetZoneData_ReturnValue_2 = CallFunc_GetZoneData_ReturnValue_2;
	Parms.CallFunc_ZoneIndex_to_Zone_ReturnValue_2 = CallFunc_ZoneIndex_to_Zone_ReturnValue_2;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_Zone = K2Node_CustomEvent_Zone;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_HasValidKey_ReturnValue = CallFunc_HasValidKey_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


